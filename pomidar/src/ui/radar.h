#pragma once
#include <vector>
#include "imgui/imgui.h"
#include "core/types.h"

namespace ui {

    void RenderRadar(
        const char* id,
        float minX, float minY, float maxX, float maxY,
        const std::vector<PlayerInfo>& players,
        const PlayerInfo& localPlayer,
        ImVec2 size = ImVec2(220, 220),
        ImTextureID mapTexture = 0
    );

}
