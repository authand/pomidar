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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe20
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "bool m_bUsingThisMelee"
        // static metadata: MNetworkVarNames "bool m_bUsingMeleeTagActive"
        // static metadata: MNetworkVarNames "bool m_bHitWithThisAttack"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastActivateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackAllowedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackTriggeredTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Melee_Base : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingThisMelee; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bUsingMeleeTagActive; // 0xd91            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitWithThisAttack; // 0xd92            
            uint8_t _pad0d93[0x1]; // 0xd93
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastActivateTime; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackAllowedTime; // 0xd98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackTriggeredTime; // 0xd9c            
            uint8_t _pad0da0[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Melee_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Melee_Base) == 0xe20);
    };
};
