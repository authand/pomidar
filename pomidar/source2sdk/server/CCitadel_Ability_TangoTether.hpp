#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0xd48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecCastStartPos"
        // static metadata: MNetworkVarNames "Vector m_vecDashStartPos"
        // static metadata: MNetworkVarNames "Vector m_vecDashEndPos"
        // static metadata: MNetworkVarNames "QAngle m_angDashStartAng"
        // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
        // static metadata: MNetworkVarNames "Vector m_rgTargetPos"
        // static metadata: MNetworkVarNames "GameTime_t m_rgTargetPosTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_TangoTether : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            std::int32_t m_iTargetPosIndex; // 0xba0            
            // m_hLockOnTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLockOnTarget;
            char m_hLockOnTarget[0x4]; // 0xba4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecCastStartPos; // 0xba8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecDashStartPos; // 0xbb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecDashEndPos; // 0xbc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            QAngle m_angDashStartAng; // 0xbcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashStartTime; // 0xbd8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleStartTime; // 0xbdc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleArriveTime; // 0xbe0            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xbe4            
            float m_flVelSpring; // 0xbe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGrappleShotAttackTime; // 0xbec            
            std::int32_t m_nTicksNotMoving; // 0xbf0            
            Vector m_vecPrevPos; // 0xbf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_rgTargetPos[20]; // 0xc00            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_rgTargetPosTime[20]; // 0xcf0            
            source2sdk::client::ParticleIndex_t m_nGrappleTravelEffect; // 0xd40            
            uint8_t _pad0d44[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_TangoTether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_TangoTether) == 0xd48);
    };
};
