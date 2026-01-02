#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
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
        // Size: 0xf90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpStartTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashJumpEndTime"
        // static metadata: MNetworkVarNames "bool m_bJumped"
        // static metadata: MNetworkVarNames "bool m_bCanDashJump"
        // static metadata: MNetworkVarNames "int m_nDesiredAirJumpCount"
        // static metadata: MNetworkVarNames "int m_nExecutedAirJumpCount"
        // static metadata: MNetworkVarNames "bool m_bInSlideJump"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveAirJumps"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveWallJumps"
        // static metadata: MNetworkVarNames "GameTime_t m_flLateralInputSuppressEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Jump : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xd90            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xd94            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xd98            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xd9c            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xda0            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0xda4            
            Vector m_vCurrentWallNormal; // 0xda8            
            Vector m_vLastWallCollidedWithNormal; // 0xdb4            
            Vector m_vLastValidWallJumpNormal; // 0xdc0            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0xdcc            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0xdd8            
            Vector m_vWallJumpFacingDir; // 0xddc            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0xde8            
            uint8_t _pad0dea[0x2]; // 0xdea
            float m_flLastWallJumpFatigueStrength; // 0xdec            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xdf0            
            bool m_bShouldCreateAirJumpEffects; // 0xdf1            
            uint8_t _pad0df2[0x2]; // 0xdf2
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xdf4            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xdf8            
            Vector m_vWallJumpNormalUsed; // 0xdfc            
            uint8_t _pad0e08[0x140]; // 0xe08
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xf48            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xf60            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0xf78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0xf79            
            uint8_t _pad0f7a[0x2]; // 0xf7a
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0xf7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0xf80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0xf84            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0xf85            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0xf86            
            uint8_t _pad0f87[0x1]; // 0xf87
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0xf88            
            uint8_t _pad0f8c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Jump) == 0xf90);
    };
};
