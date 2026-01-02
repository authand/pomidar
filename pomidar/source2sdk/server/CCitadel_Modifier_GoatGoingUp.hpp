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
        // Size: 0x1a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_GoatGoingUp : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bAtTargetElevation; // 0xc8            
            uint8_t _pad00c9[0x3]; // 0xc9
            Vector m_vKnockAwayVector; // 0xcc            
            uint8_t _pad00d8[0xc0]; // 0xd8
            float m_flTargetElevation; // 0x198            
            uint8_t _pad019c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_GoatGoingUp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_GoatGoingUp) == 0x1a0);
    };
};
