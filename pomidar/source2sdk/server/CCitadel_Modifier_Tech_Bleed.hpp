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
        // Size: 0x150
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tech_Bleed : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bNoDeath; // 0xc8            
            bool m_bDamageInProgress; // 0xc9            
            uint8_t _pad00ca[0x2]; // 0xca
            float m_flDamage; // 0xcc            
            uint8_t _pad00d0[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tech_Bleed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Tech_Bleed) == 0x150);
    };
};
