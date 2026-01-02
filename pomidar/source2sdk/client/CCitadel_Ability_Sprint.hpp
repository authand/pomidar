#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xda0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSprinting"
        // static metadata: MNetworkVarNames "GameTime_t m_flSprintStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Sprint : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nSprintParticle; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSprintingChanged"
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSprinting; // 0xd94            
            uint8_t _pad0d95[0x3]; // 0xd95
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSprintStartTime; // 0xd98            
            bool m_bInCombat; // 0xd9c            
            uint8_t _pad0d9d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Sprint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Sprint) == 0xda0);
    };
};
