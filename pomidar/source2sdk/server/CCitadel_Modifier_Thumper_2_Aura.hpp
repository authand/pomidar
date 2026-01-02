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
        // Size: 0x1a8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Thumper_2_Aura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            Vector m_vecOrigin; // 0x100            
            Vector m_vecWorldSpaceMins; // 0x10c            
            Vector m_vecWorldSpaceMaxs; // 0x118            
            float m_flBarbedWireAuraRadius; // 0x124            
            uint8_t _pad0128[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Thumper_2_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Thumper_2_Aura) == 0x1a8);
    };
};
