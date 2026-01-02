#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"

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
        // Size: 0x1d0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Rutger_Pulse_Aura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            float m_flStartRadius; // 0x100            
            float m_flEndRadius; // 0x104            
            float m_flSpreadDuration; // 0x108            
            uint8_t _pad010c[0xc4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Rutger_Pulse_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Rutger_Pulse_Aura) == 0x1d0);
    };
};
