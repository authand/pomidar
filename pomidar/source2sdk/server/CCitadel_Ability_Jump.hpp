#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelAbilityOrders.hpp"
#include "source2sdk/client/EJumpType_t.hpp"
#include "source2sdk/client/EWallJumpFacing.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0xda0
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
        class CCitadel_Ability_Jump : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTimeOnZipLine; // 0xba0            
            source2sdk::entity2::GameTime_t m_flLastOnGroundTime; // 0xba4            
            source2sdk::entity2::GameTime_t m_flPhaseStartTime; // 0xba8            
            source2sdk::entity2::GameTime_t m_flJumpTime; // 0xbac            
            source2sdk::entity2::GameTime_t m_flWallJumpFatigueStartTime; // 0xbb0            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0xbb4            
            Vector m_vCurrentWallNormal; // 0xbb8            
            Vector m_vLastWallCollidedWithNormal; // 0xbc4            
            Vector m_vLastValidWallJumpNormal; // 0xbd0            
            Vector m_vLastValidWallJumpNormal_PlayerPosition; // 0xbdc            
            source2sdk::entity2::GameTime_t m_flLastWallJumpTime; // 0xbe8            
            Vector m_vWallJumpFacingDir; // 0xbec            
            source2sdk::client::EWallJumpFacing m_eWallJumpFacing; // 0xbf8            
            uint8_t _pad0bfa[0x2]; // 0xbfa
            float m_flLastWallJumpFatigueStrength; // 0xbfc            
            source2sdk::client::EJumpType_t m_LastJumpType; // 0xc00            
            bool m_bShouldCreateAirJumpEffects; // 0xc01            
            uint8_t _pad0c02[0x2]; // 0xc02
            source2sdk::entity2::GameTime_t m_flDoubleJumpFailTime; // 0xc04            
            source2sdk::client::ECitadelAbilityOrders m_eDoubleJumpFailReason; // 0xc08            
            Vector m_vWallJumpNormalUsed; // 0xc0c            
            uint8_t _pad0c18[0x140]; // 0xc18
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpStartTime; // 0xd58            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashJumpEndTime; // 0xd70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bJumped; // 0xd88            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanDashJump; // 0xd89            
            uint8_t _pad0d8a[0x2]; // 0xd8a
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nDesiredAirJumpCount; // 0xd8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nExecutedAirJumpCount; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInSlideJump; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirJumps; // 0xd95            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveWallJumps; // 0xd96            
            uint8_t _pad0d97[0x1]; // 0xd97
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLateralInputSuppressEndTime; // 0xd98            
            uint8_t _pad0d9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Jump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Jump) == 0xda0);
    };
};
