#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x2a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Invis : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c8[0x1c0]; // 0xc8
            bool m_bInvis; // 0x288            
            uint8_t _pad0289[0x3]; // 0x289
            source2sdk::entity2::GameTime_t m_flStartInvisTime; // 0x28c            
            bool m_bFullyInvis; // 0x290            
            uint8_t _pad0291[0x3]; // 0x291
            source2sdk::entity2::GameTime_t m_flLastDamageTaken; // 0x294            
            source2sdk::entity2::GameTime_t m_flLastSpotted; // 0x298            
            uint8_t _pad029c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Invis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Invis) == 0x2a0);
    };
};
