#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1c8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Backstabber_Aura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTickTime; // 0x100            
            uint8_t _pad0104[0xc4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Backstabber_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Backstabber_Aura) == 0x1c8);
    };
};
