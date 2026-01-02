#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd0
        // Has VTable
        #pragma pack(push, 1)
        class CGameModifier_SetModelScale : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flOldModelScale; // 0xc8            
            uint8_t _pad00cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameModifier_SetModelScale because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameModifier_SetModelScale) == 0xd0);
    };
};
