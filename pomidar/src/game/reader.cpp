#include "reader.h"
#include "entity.h"
#include "mem/memory.h"
#include "core/offsets.h"

namespace game {

    std::vector<PlayerInfo> ReadPlayersViaControllers(HANDLE process, std::uintptr_t clientDll) {
        std::vector<PlayerInfo> players;

        auto entityList = mem::Read<std::uintptr_t>(process, clientDll + offsets::ENTITY_LIST);

        for (int i = 0; i < 64; i++) {
            auto controller = GetEntityByIndex(process, entityList, i);
            if (!controller) continue;

            auto className = GetClassName(process, controller);
            if (className.find("PlayerController") == std::string::npos) continue;

            uint32_t pawnHandle = mem::Read<uint32_t>(process, controller + offsets::CONTROLLER_PAWN);
            if (!pawnHandle || pawnHandle == 0xFFFFFFFF) continue;

            int pawnIndex = pawnHandle & 0x7FFF;
            auto pawn = GetEntityByIndex(process, entityList, pawnIndex);
            if (!pawn) continue;

            auto pawnClass = GetClassName(process, pawn);

            // only actual player pawns
            if (pawnClass.find("PlayerPawn") == std::string::npos) continue;

            auto pos = GetEntityPosition(process, pawn);
            int health = mem::Read<int>(process, pawn + offsets::PAWN_HEALTH);
            int team = mem::Read<int>(process, pawn + offsets::TEAM_NUM);

            // check if valid team
            if (team < 2 || team > 3) continue;

            PlayerInfo p{};
            p.index = pawnIndex;
            p.address = pawn;
            p.className = pawnClass;
            p.position = pos;
            p.health = health;
            p.team = team;

            players.push_back(p);
        }

        return players;
    }

    PlayerInfo ReadLocalPlayer(HANDLE process, std::uintptr_t clientDll) {
        auto controller = mem::Read<std::uintptr_t>(process, clientDll + offsets::LOCAL_PLAYER);
        if (!controller) return {};

        auto className = GetClassName(process, controller);
        if (className.find("Controller") == std::string::npos) return {};

        uint32_t pawnHandle = mem::Read<uint32_t>(process, controller + offsets::CONTROLLER_PAWN);
        if (!pawnHandle || pawnHandle == 0xFFFFFFFF) return {};

        auto entityList = mem::Read<std::uintptr_t>(process, clientDll + offsets::ENTITY_LIST);
        int pawnIndex = pawnHandle & 0x7FFF;
        auto pawn = GetEntityByIndex(process, entityList, pawnIndex);
        if (!pawn) return {};

        PlayerInfo p{};
        p.index = pawnIndex;
        p.address = pawn;
        p.position = GetEntityPosition(process, pawn);
        p.health = mem::Read<int>(process, pawn + offsets::PAWN_HEALTH);
        p.team = mem::Read<int>(process, pawn + offsets::TEAM_NUM);

        return p;
    }

}
