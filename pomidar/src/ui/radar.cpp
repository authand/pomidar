#include "radar.h"
#include <algorithm>

namespace {

    ImVec2 worldToRadar(
        float worldX, float worldY,
        float minX, float minY, float maxX, float maxY,
        const ImVec2& origin, const ImVec2& size)
    {
        float nx = (maxX != minX) ? (worldX - minX) / (maxX - minX) : 0.5f;
        float ny = (maxY != minY) ? (worldY - minY) / (maxY - minY) : 0.5f;

        nx = std::clamp(nx, 0.0f, 1.0f);
        ny = std::clamp(ny, 0.0f, 1.0f);

        // flip Y so north is up
        ny = 1.0f - ny;

        return ImVec2(origin.x + nx * size.x, origin.y + ny * size.y);
    }

    void drawPlayer(ImDrawList* dl, ImVec2 pos, const PlayerInfo& player, const PlayerInfo& localPlayer) {
        constexpr float radius = 6.0f;
        
        if (player.health <= 0) {
            dl->AddCircleFilled(pos, radius, IM_COL32(128, 128, 128, 140), 12);
        } else if (player.index == localPlayer.index) {
            // self: white with black outline
            dl->AddCircleFilled(pos, radius + 1.5f, IM_COL32(0, 0, 0, 200), 12);
            dl->AddCircleFilled(pos, radius, IM_COL32(255, 255, 255, 255), 12);
        } else if (player.team != localPlayer.team) {
            // enemy: red with black outline
            dl->AddCircleFilled(pos, radius + 1.5f, IM_COL32(0, 0, 0, 200), 12);
            dl->AddCircleFilled(pos, radius, IM_COL32(255, 0, 0, 220), 12);
        } else {
            // teammate: green with black outline
            dl->AddCircleFilled(pos, radius + 1.5f, IM_COL32(0, 0, 0, 200), 12);
            dl->AddCircleFilled(pos, radius, IM_COL32(0, 255, 0, 220), 12);
        }
    }

}

namespace ui {

    void RenderRadar(
        const char* id,
        float minX, float minY, float maxX, float maxY,
        const std::vector<PlayerInfo>& players,
        const PlayerInfo& localPlayer,
        ImVec2 size,
        ImTextureID mapTexture)
    {
        const ImVec2 origin = ImGui::GetCursorScreenPos();
        const ImVec2 corner(origin.x + size.x, origin.y + size.y);

        ImDrawList* dl = ImGui::GetWindowDrawList();

        // background
        if (mapTexture) {
            dl->AddImage(mapTexture, origin, corner, ImVec2(0, 0), ImVec2(1, 1), IM_COL32(255, 255, 255, 255));
            dl->AddRectFilled(origin, corner, IM_COL32(0, 0, 0, 50), 12.0f);
        } else {
            dl->AddRectFilled(origin, corner, IM_COL32(10, 10, 10, 180), 12.0f);
        }

        dl->AddRect(origin, corner, IM_COL32(255, 255, 255, 90), 12.0f, 0, 1.0f);

        // player dots
        for (const auto& player : players) {
            ImVec2 pos = worldToRadar(
                player.position.x, player.position.y,
                minX, minY, maxX, maxY,
                origin, size
            );
            drawPlayer(dl, pos, player, localPlayer);
        }

        ImGui::InvisibleButton(id, size);
    }

}
