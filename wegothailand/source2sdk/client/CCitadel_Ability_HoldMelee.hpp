#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_Melee_Base.hpp"
#include "source2sdk/client/EMeleeHold_AttackState.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
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
        // Size: 0xe88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStateStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
        // static metadata: MNetworkVarNames "EMeleeHold_AttackState m_eCurrentAttackState"
        // static metadata: MNetworkVarNames "EMeleeHold_AttackType m_eCurrentAttackType"
        // static metadata: MNetworkVarNames "Vector m_vAirDashDir"
        // static metadata: MNetworkVarNames "bool m_bAttackStartedWhileSliding"
        // static metadata: MNetworkVarNames "GameTime_t m_flLightChainEndTime"
        // static metadata: MNetworkVarNames "int m_nLightChainCount"
        #pragma pack(push, 1)
        class CCitadel_Ability_HoldMelee : public source2sdk::client::CCitadel_Ability_Melee_Base
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStateStartTime; // 0xe20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashStartTime; // 0xe24            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackState m_eCurrentAttackState; // 0xe28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EMeleeHold_AttackType m_eCurrentAttackType; // 0xe2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAirDashDir; // 0xe30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAttackStartedWhileSliding; // 0xe3c            
            uint8_t _pad0e3d[0x3]; // 0xe3d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLightChainEndTime; // 0xe40            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nLightChainCount; // 0xe44            
            bool m_bCreatedChargeEffects; // 0xe48            
            uint8_t _pad0e49[0x3]; // 0xe49
            QAngle m_angForced; // 0xe4c            
            Vector m_vGoalDir; // 0xe58            
            uint8_t _pad0e64[0x24];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HoldMelee because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_HoldMelee) == 0xe88);
    };
};
