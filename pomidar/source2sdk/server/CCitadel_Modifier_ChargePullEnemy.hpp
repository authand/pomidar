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
        // Size: 0x1e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChargePullEnemy : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c8[0x100]; // 0xc8
            Vector m_vecOffsetDir; // 0x1c8            
            float m_flTackleRadius; // 0x1d4            
            float m_flPullTargetSpeed; // 0x1d8            
            uint8_t _pad01dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChargePullEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ChargePullEnemy) == 0x1e0);
    };
};
