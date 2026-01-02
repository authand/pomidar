#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1060
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flBonusDamage"
        // static metadata: MNetworkVarNames "GameTime_t m_NextBonusDamageDecayTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_ShockTarget : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x2c0]; // 0xd90
            // metadata: MNetworkEnable
            float m_flBonusDamage; // 0x1050            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_NextBonusDamageDecayTime; // 0x1054            
            uint8_t _pad1058[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_ShockTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Frank_ShockTarget) == 0x1060);
    };
};
