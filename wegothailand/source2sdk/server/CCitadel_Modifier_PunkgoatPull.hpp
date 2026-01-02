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
        // Size: 0x1e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatPull : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flDamageToDealAtEnd; // 0xc8            
            float m_flDamageLeftToDealOverPull; // 0xcc            
            float m_flDamageOverPullAccumulator; // 0xd0            
            Vector m_vPullToLocation; // 0xd4            
            bool m_bAllowTrackTarget; // 0xe0            
            uint8_t _pad00e1[0x3]; // 0xe1
            float m_flCurrentVerticalSpeed; // 0xe4            
            uint8_t _pad00e8[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatPull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PunkgoatPull) == 0x1e8);
    };
};
