#include "entity.h"
#include "mem/memory.h"
#include "core/offsets.h"

namespace game {

    std::uintptr_t GetEntityByIndex(HANDLE process, std::uintptr_t entityList, int index) {
        if (index < 0 || index >= 8192) return 0;

        std::uintptr_t chunkIndex = (index & 0x7FFF) >> 9;
        std::uintptr_t chunkAddr = entityList + 0x10 + chunkIndex * 0x8;

        std::uintptr_t chunk = mem::Read<std::uintptr_t>(process, chunkAddr);
        if (!chunk) return 0;

        int slot = index & 0x1FF;
        return mem::Read<std::uintptr_t>(process, chunk + slot * 120);
    }

    std::string GetClassName(HANDLE process, std::uintptr_t entity) {
        if (!entity) return {};

        auto identity = mem::Read<std::uintptr_t>(process, entity + offsets::ENTITY_IDENTITY);
        if (!identity) return {};

        auto classInfo = mem::Read<std::uintptr_t>(process, identity + 0x8);
        if (!classInfo) return {};

        auto schemaInfo = mem::Read<std::uintptr_t>(process, classInfo + 0x30);
        if (!schemaInfo) return {};

        auto namePtr = mem::Read<std::uintptr_t>(process, schemaInfo + 0x8);
        if (!namePtr) return {};

        return mem::ReadString(process, namePtr);
    }

    Vector3 GetEntityPosition(HANDLE process, std::uintptr_t entity) {
        Vector3 pos{};
        if (!entity) return pos;

        auto node = mem::Read<std::uintptr_t>(process, entity + offsets::GAME_SCENE_NODE);
        if (!node) return pos;

        pos.x = mem::Read<float>(process, node + offsets::VEC_ABS_ORIGIN);
        pos.y = mem::Read<float>(process, node + offsets::VEC_ABS_ORIGIN + 0x4);
        pos.z = mem::Read<float>(process, node + offsets::VEC_ABS_ORIGIN + 0x8);
        return pos;
    }

}
