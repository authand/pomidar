#pragma once

// build mode: LOCAL = imgui overlay, SERVER = websocket server for cloud radar
#if !defined(BUILD_SERVER) && !defined(BUILD_LOCAL)
    #define BUILD_LOCAL
#endif

#include <string>
#include <fstream>
#include <sstream>
#include <cstdio>

namespace config {

    // config.json
    struct Settings {
        // radar display
        int radarWidth = 300;
        int radarHeight = 300;
        int windowPadding = 5;
        bool alwaysOnTop = true;

        // server
        int serverPort = 8080;
        int updateIntervalMs = 16;

        // map bounds (could improve by getting it from the game itself but i manually got them by going to every corner of map)
        float mapMinX = -9491.72f;
        float mapMaxX = 9310.34f;
        float mapMinY = -10725.97f;
        float mapMaxY = 10782.56f;

        // game
        std::wstring gameProcess = L"deadlock.exe";
        std::wstring clientModule = L"client.dll";
    };

    // global settings instance
    inline Settings g_settings;

    inline std::string extractJsonString(const std::string& json, const std::string& key) {
        std::string search = "\"" + key + "\"";
        auto pos = json.find(search);
        if (pos == std::string::npos) return "";
        
        pos = json.find(':', pos);
        if (pos == std::string::npos) return "";
        
        auto start = json.find('"', pos + 1);
        if (start == std::string::npos) return "";
        
        auto end = json.find('"', start + 1);
        if (end == std::string::npos) return "";
        
        return json.substr(start + 1, end - start - 1);
    }

    inline double extractJsonNumber(const std::string& json, const std::string& key, double defaultVal) {
        std::string search = "\"" + key + "\"";
        auto pos = json.find(search);
        if (pos == std::string::npos) return defaultVal;
        
        pos = json.find(':', pos);
        if (pos == std::string::npos) return defaultVal;
        
        // skip whitespace
        pos++;
        while (pos < json.size() && (json[pos] == ' ' || json[pos] == '\t')) pos++;
        
        // find end of number
        auto end = pos;
        while (end < json.size() && (isdigit(json[end]) || json[end] == '.' || json[end] == '-')) end++;
        
        if (end == pos) return defaultVal;
        
        try {
            return std::stod(json.substr(pos, end - pos));
        } catch (...) {
            return defaultVal;
        }
    }

    inline bool extractJsonBool(const std::string& json, const std::string& key, bool defaultVal) {
        std::string search = "\"" + key + "\"";
        auto pos = json.find(search);
        if (pos == std::string::npos) return defaultVal;
        
        pos = json.find(':', pos);
        if (pos == std::string::npos) return defaultVal;
        
        if (json.find("true", pos) < json.find(',', pos) && json.find("true", pos) < json.find('}', pos)) return true;
        if (json.find("false", pos) < json.find(',', pos) && json.find("false", pos) < json.find('}', pos)) return false;
        
        return defaultVal;
    }

    inline std::wstring toWide(const std::string& s) {
        if (s.empty()) return L"";
        std::wstring result(s.begin(), s.end());
        return result;
    }

    inline bool load(const std::string& path = "config.json") {
        std::ifstream file(path);
        if (!file) return false;

        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string json = buffer.str();

        // parse values with defaults
        g_settings.radarWidth = static_cast<int>(extractJsonNumber(json, "radar_width", g_settings.radarWidth));
        g_settings.radarHeight = static_cast<int>(extractJsonNumber(json, "radar_height", g_settings.radarHeight));
        g_settings.windowPadding = static_cast<int>(extractJsonNumber(json, "window_padding", g_settings.windowPadding));
        g_settings.alwaysOnTop = extractJsonBool(json, "always_on_top", g_settings.alwaysOnTop);
        
        g_settings.serverPort = static_cast<int>(extractJsonNumber(json, "server_port", g_settings.serverPort));
        g_settings.updateIntervalMs = static_cast<int>(extractJsonNumber(json, "update_interval_ms", g_settings.updateIntervalMs));
        
        g_settings.mapMinX = static_cast<float>(extractJsonNumber(json, "map_min_x", g_settings.mapMinX));
        g_settings.mapMaxX = static_cast<float>(extractJsonNumber(json, "map_max_x", g_settings.mapMaxX));
        g_settings.mapMinY = static_cast<float>(extractJsonNumber(json, "map_min_y", g_settings.mapMinY));
        g_settings.mapMaxY = static_cast<float>(extractJsonNumber(json, "map_max_y", g_settings.mapMaxY));

        auto gameProc = extractJsonString(json, "game_process");
        if (!gameProc.empty()) g_settings.gameProcess = toWide(gameProc);
        
        auto clientMod = extractJsonString(json, "client_module");
        if (!clientMod.empty()) g_settings.clientModule = toWide(clientMod);

        return true;
    }

    inline void createDefault(const std::string& path = "config.json") {
        std::ofstream file(path);
        if (!file) return;

        file << R"({
    "radar_width": 300,
    "radar_height": 300,
    "window_padding": 5,
    "always_on_top": true,
    
    "server_port": 8080,
    "update_interval_ms": 16,
    
    "map_min_x": -9491.72,
    "map_max_x": 9310.34,
    "map_min_y": -10725.97,
    "map_max_y": 10782.56,
    
    "game_process": "deadlock.exe",
    "client_module": "client.dll"
})";
    }

    inline int RADAR_WIDTH() { return g_settings.radarWidth; }
    inline int RADAR_HEIGHT() { return g_settings.radarHeight; }
    inline int WINDOW_PADDING() { return g_settings.windowPadding; }
    inline bool ALWAYS_ON_TOP() { return g_settings.alwaysOnTop; }
    inline int SERVER_PORT() { return g_settings.serverPort; }
    inline int UPDATE_INTERVAL_MS() { return g_settings.updateIntervalMs; }
    inline float MAP_MIN_X() { return g_settings.mapMinX; }
    inline float MAP_MAX_X() { return g_settings.mapMaxX; }
    inline float MAP_MIN_Y() { return g_settings.mapMinY; }
    inline float MAP_MAX_Y() { return g_settings.mapMaxY; }
    inline const wchar_t* GAME_PROCESS() { return g_settings.gameProcess.c_str(); }
    inline const wchar_t* CLIENT_MODULE() { return g_settings.clientModule.c_str(); }

}
