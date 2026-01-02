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
        // Size: 0x148
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_StasisBomb_Aura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            float m_AuraRadius; // 0x100            
            uint8_t _pad0104[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_StasisBomb_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_StasisBomb_Aura) == 0x148);
    };
};
