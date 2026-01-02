#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EViscousBowlingBallState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelViscousBall;
    };
};

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
        // Size: 0x1098
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsRolling"
        // static metadata: MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
        // static metadata: MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextWallCheck"
        // static metadata: MNetworkVarNames "GameTime_t m_flRollStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flWallExitTime"
        // static metadata: MNetworkVarNames "Vector m_vecWallExitVelocity"
        #pragma pack(push, 1)
        class CCitadel_Ability_GooBowlingBall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x380]; // 0xba0
            std::int32_t m_nAirJumpsLeft; // 0xf20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkChangeCallback "OnIsRollingChanged"
            bool m_bIsRolling; // 0xf24            
            uint8_t _pad0f25[0x3]; // 0xf25
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hBall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelViscousBall> m_hBall;
            char m_hBall[0x4]; // 0xf28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EViscousBowlingBallState_t m_eRollingState; // 0xf2c            
            uint8_t _pad0f2d[0x3]; // 0xf2d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0xf30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextWallCheck; // 0xf34            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flRollStartTime; // 0xf38            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flWallExitTime; // 0xf3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecWallExitVelocity; // 0xf40            
            uint8_t _pad0f4c[0x14c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GooBowlingBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GooBowlingBall) == 0x1098);
    };
};
