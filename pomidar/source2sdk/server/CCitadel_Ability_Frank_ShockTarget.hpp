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
        // Size: 0xe70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flBonusDamage"
        // static metadata: MNetworkVarNames "GameTime_t m_NextBonusDamageDecayTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_ShockTarget : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x2c0]; // 0xba0
            // metadata: MNetworkEnable
            float m_flBonusDamage; // 0xe60            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_NextBonusDamageDecayTime; // 0xe64            
            uint8_t _pad0e68[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_ShockTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Frank_ShockTarget) == 0xe70);
    };
};
