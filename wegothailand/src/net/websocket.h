#pragma once

// WinSock2 must be included before Windows.h to avoid redefinition errors
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <WinSock2.h>
#include <WS2tcpip.h>
#include <Windows.h>
#include <wincrypt.h>
#include <string>
#include <vector>
#include <functional>
#include <thread>
#include <mutex>
#include <atomic>

#pragma comment(lib, "ws2_32.lib")

namespace net {

    // Combined HTTP + WebSocket server on single port
    class HybridServer {
    public:
        HybridServer() = default;
        ~HybridServer() { stop(); }

        bool start(int port) {
            WSADATA wsa;
            if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) return false;

            listenSocket_ = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
            if (listenSocket_ == INVALID_SOCKET) return false;

            int opt = 1;
            setsockopt(listenSocket_, SOL_SOCKET, SO_REUSEADDR, (char*)&opt, sizeof(opt));

            sockaddr_in addr{};
            addr.sin_family = AF_INET;
            addr.sin_addr.s_addr = INADDR_ANY;
            addr.sin_port = htons(static_cast<u_short>(port));

            if (bind(listenSocket_, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR) {
                closesocket(listenSocket_);
                return false;
            }

            if (listen(listenSocket_, SOMAXCONN) == SOCKET_ERROR) {
                closesocket(listenSocket_);
                return false;
            }

            running_ = true;
            acceptThread_ = std::thread(&HybridServer::acceptLoop, this);
            return true;
        }

        void stop() {
            running_ = false;
            if (listenSocket_ != INVALID_SOCKET) {
                closesocket(listenSocket_);
                listenSocket_ = INVALID_SOCKET;
            }
            if (acceptThread_.joinable()) {
                acceptThread_.join();
            }
            std::lock_guard<std::mutex> lock(clientsMutex_);
            for (SOCKET client : wsClients_) {
                closesocket(client);
            }
            wsClients_.clear();
            WSACleanup();
        }

        void setHtmlContent(const std::string& html) {
            std::lock_guard<std::mutex> lock(contentMutex_);
            htmlContent_ = html;
        }

        void setMapImage(const std::vector<char>& data) {
            std::lock_guard<std::mutex> lock(contentMutex_);
            mapImageData_ = data;
        }

        void broadcast(const std::string& message) {
            auto frame = createWsFrame(message);
            std::lock_guard<std::mutex> lock(clientsMutex_);
            
            auto it = wsClients_.begin();
            while (it != wsClients_.end()) {
                int sent = send(*it, frame.data(), static_cast<int>(frame.size()), 0);
                if (sent == SOCKET_ERROR) {
                    closesocket(*it);
                    it = wsClients_.erase(it);
                } else {
                    ++it;
                }
            }
        }

        size_t clientCount() const {
            std::lock_guard<std::mutex> lock(clientsMutex_);
            return wsClients_.size();
        }

    private:
        SOCKET listenSocket_ = INVALID_SOCKET;
        std::vector<SOCKET> wsClients_;
        mutable std::mutex clientsMutex_;
        std::atomic<bool> running_{ false };
        std::thread acceptThread_;

        std::string htmlContent_;
        std::vector<char> mapImageData_;
        std::mutex contentMutex_;

        void acceptLoop() {
            while (running_) {
                fd_set readSet;
                FD_ZERO(&readSet);
                FD_SET(listenSocket_, &readSet);

                timeval timeout{ 0, 100000 };
                int result = select(0, &readSet, nullptr, nullptr, &timeout);

                if (result > 0 && FD_ISSET(listenSocket_, &readSet)) {
                    SOCKET client = accept(listenSocket_, nullptr, nullptr);
                    if (client != INVALID_SOCKET) {
                        // Handle in separate thread to not block accepts
                        std::thread(&HybridServer::handleConnection, this, client).detach();
                    }
                }
            }
        }

        void handleConnection(SOCKET client) {
            char buffer[4096]{};
            int received = recv(client, buffer, sizeof(buffer) - 1, 0);
            if (received <= 0) {
                closesocket(client);
                return;
            }

            std::string request(buffer);

            // Check if WebSocket upgrade request (case-insensitive)
            std::string lowerRequest = request;
            for (auto& c : lowerRequest) c = static_cast<char>(tolower(c));
            
            if (lowerRequest.find("upgrade: websocket") != std::string::npos) {
                if (handleWsHandshake(client, request)) {
                    std::lock_guard<std::mutex> lock(clientsMutex_);
                    wsClients_.push_back(client);
                } else {
                    closesocket(client);
                }
                return;
            }

            // Regular HTTP request
            handleHttpRequest(client, request);
            closesocket(client);
        }

        void handleHttpRequest(SOCKET client, const std::string& request) {
            // Check if requesting map image
            if (request.find("GET /map.png") != std::string::npos) {
                std::vector<char> imgData;
                {
                    std::lock_guard<std::mutex> lock(contentMutex_);
                    imgData = mapImageData_;
                }

                if (!imgData.empty()) {
                    std::string header =
                        "HTTP/1.1 200 OK\r\n"
                        "Content-Type: image/png\r\n"
                        "Content-Length: " + std::to_string(imgData.size()) + "\r\n"
                        "Connection: close\r\n"
                        "Access-Control-Allow-Origin: *\r\n"
                        "Cache-Control: max-age=3600\r\n\r\n";

                    send(client, header.c_str(), static_cast<int>(header.size()), 0);
                    send(client, imgData.data(), static_cast<int>(imgData.size()), 0);
                } else {
                    std::string response = "HTTP/1.1 404 Not Found\r\nConnection: close\r\n\r\n";
                    send(client, response.c_str(), static_cast<int>(response.size()), 0);
                }
                return;
            }

            // Default: serve HTML
            std::string content;
            {
                std::lock_guard<std::mutex> lock(contentMutex_);
                content = htmlContent_;
            }

            std::string response =
                "HTTP/1.1 200 OK\r\n"
                "Content-Type: text/html\r\n"
                "Content-Length: " + std::to_string(content.size()) + "\r\n"
                "Connection: close\r\n"
                "Access-Control-Allow-Origin: *\r\n\r\n" + content;

            send(client, response.c_str(), static_cast<int>(response.size()), 0);
        }

        bool handleWsHandshake(SOCKET client, const std::string& request) {
            // Case-insensitive search for Sec-WebSocket-Key
            std::string lowerReq = request;
            for (auto& c : lowerReq) c = static_cast<char>(tolower(c));
            
            auto keyPos = lowerReq.find("sec-websocket-key: ");
            if (keyPos == std::string::npos) return false;

            keyPos += 19;
            auto keyEnd = request.find("\r\n", keyPos);
            if (keyEnd == std::string::npos) return false;
            
            std::string key = request.substr(keyPos, keyEnd - keyPos);
            std::string acceptKey = createAcceptKey(key);
            if (acceptKey.empty()) return false;

            std::string response =
                "HTTP/1.1 101 Switching Protocols\r\n"
                "Upgrade: websocket\r\n"
                "Connection: Upgrade\r\n"
                "Sec-WebSocket-Accept: " + acceptKey + "\r\n\r\n";

            return send(client, response.c_str(), static_cast<int>(response.size()), 0) > 0;
        }

        std::string createAcceptKey(const std::string& key) {
            std::string combined = key + "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";

            HCRYPTPROV hProv = 0;
            HCRYPTHASH hHash = 0;

            if (!CryptAcquireContext(&hProv, nullptr, nullptr, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT)) {
                return "";
            }

            if (!CryptCreateHash(hProv, CALG_SHA1, 0, 0, &hHash)) {
                CryptReleaseContext(hProv, 0);
                return "";
            }

            CryptHashData(hHash, (BYTE*)combined.c_str(), static_cast<DWORD>(combined.size()), 0);

            BYTE hash[20]{};
            DWORD hashLen = 20;
            CryptGetHashParam(hHash, HP_HASHVAL, hash, &hashLen, 0);

            CryptDestroyHash(hHash);
            CryptReleaseContext(hProv, 0);

            return base64Encode(hash, 20);
        }

        std::string base64Encode(const BYTE* data, size_t len) {
            static const char* chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
            std::string result;
            result.reserve((len + 2) / 3 * 4);

            for (size_t i = 0; i < len; i += 3) {
                unsigned int n = (data[i] << 16);
                if (i + 1 < len) n |= (data[i + 1] << 8);
                if (i + 2 < len) n |= data[i + 2];

                result += chars[(n >> 18) & 0x3F];
                result += chars[(n >> 12) & 0x3F];
                result += (i + 1 < len) ? chars[(n >> 6) & 0x3F] : '=';
                result += (i + 2 < len) ? chars[n & 0x3F] : '=';
            }
            return result;
        }

        std::vector<char> createWsFrame(const std::string& message) {
            std::vector<char> frame;
            size_t len = message.size();

            frame.push_back(static_cast<char>(0x81));

            if (len <= 125) {
                frame.push_back(static_cast<char>(len));
            } else if (len <= 65535) {
                frame.push_back(126);
                frame.push_back(static_cast<char>((len >> 8) & 0xFF));
                frame.push_back(static_cast<char>(len & 0xFF));
            } else {
                frame.push_back(127);
                for (int i = 7; i >= 0; --i) {
                    frame.push_back(static_cast<char>((len >> (i * 8)) & 0xFF));
                }
            }

            frame.insert(frame.end(), message.begin(), message.end());
            return frame;
        }
    };

}
