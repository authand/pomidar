#pragma once
#include "websocket.h"
#include "web/frontend.h"
#include "core/types.h"
#include "core/config.h"
#include <string>
#include <vector>
#include <fstream>
#include <cstdio>

namespace net {

    // load file into memory
    inline std::vector<char> loadFile(const std::string& path) {
        std::ifstream file(path, std::ios::binary | std::ios::ate);
        if (!file) return {};

        auto size = file.tellg();
        file.seekg(0, std::ios::beg);

        std::vector<char> data(static_cast<size_t>(size));
        file.read(data.data(), size);
        return data;
    }

    // serialize player data to JSON
    inline std::string playersToJson(
        const std::vector<PlayerInfo>& players,
        const PlayerInfo& localPlayer)
    {
        // pre-allocate buffer (each player ~120 chars max)
        std::string result;
        result.reserve(32 + players.size() * 128);
        result = R"({"players":[)";

        char buf[256];
        bool first = true;
        for (const auto& p : players) {
            if (!first) result += ',';
            first = false;

            snprintf(buf, sizeof(buf),
                R"({"index":%d,"x":%.2f,"y":%.2f,"health":%d,"team":%d,"self":%s,"enemy":%s,"dead":%s})",
                p.index, p.position.x, p.position.y, p.health, p.team,
                (p.index == localPlayer.index) ? "true" : "false",
                (p.team != localPlayer.team) ? "true" : "false",
                (p.health <= 0) ? "true" : "false"
            );
            result += buf;
        }

        result += "]}";
        return result;
    }

    // radar server - single port for HTTP + WebSocket
    class RadarServer {
    public:
        bool start() {
            if (!server_.start(config::SERVER_PORT())) {
                return false;
            }
            
            server_.setHtmlContent(web::getFrontendHtml(config::SERVER_PORT()));

            char cwd[MAX_PATH]{};
            GetCurrentDirectoryA(MAX_PATH, cwd);
            std::string mapPath = std::string(cwd) + "\\map.png";
            
            auto mapData = loadFile(mapPath);
            if (!mapData.empty()) {
                server_.setMapImage(mapData);
                mapLoaded_ = true;
            }

            return true;
        }

        void stop() {
            server_.stop();
        }

        void broadcast(const std::vector<PlayerInfo>& players, const PlayerInfo& localPlayer) {
            server_.broadcast(playersToJson(players, localPlayer));
        }

        size_t clientCount() const {
            return server_.clientCount();
        }

        bool mapLoaded() const { return mapLoaded_; }

    private:
        HybridServer server_;
        bool mapLoaded_ = false;
    };

}
