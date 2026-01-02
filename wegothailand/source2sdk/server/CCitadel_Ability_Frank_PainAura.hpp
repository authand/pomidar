#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xcb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_ToggleOnTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_PainAura : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x4]; // 0xba0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_ToggleOnTime; // 0xba4            
            uint8_t _pad0ba8[0x108];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_PainAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Frank_PainAura) == 0xcb0);
    };
};
