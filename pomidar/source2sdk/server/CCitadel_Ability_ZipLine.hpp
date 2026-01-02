#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/EAttachState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Size: 0x1108
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeStartZipping"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeStopZipping"
        // static metadata: MNetworkVarNames "float m_flCasterSpeed"
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
        // static metadata: MNetworkVarNames "Vector m_vecAttachPoint"
        // static metadata: MNetworkVarNames "EHANDLE m_pPrevNode"
        // static metadata: MNetworkVarNames "EHANDLE m_pNextNode"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeEnterState"
        // static metadata: MNetworkVarNames "GameTime_t m_flLatchTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDamagedTime"
        // static metadata: MNetworkVarNames "EAttachState_t m_eAttachState"
        // static metadata: MNetworkVarNames "int m_iAttachedZipLineLane"
        // static metadata: MNetworkVarNames "bool m_bDroppedFromZipline"
        // static metadata: MNetworkVarNames "Vector m_vAttachZipLineOffset"
        // static metadata: MNetworkVarNames "float m_flZiplineAirDrag"
        // static metadata: MNetworkVarNames "Vector m_vPendulumVelocity"
        // static metadata: MNetworkVarNames "Vector m_vPendulumPosition"
        // static metadata: MNetworkVarNames "Vector m_vVelocityHistory1"
        // static metadata: MNetworkVarNames "Vector m_vVelocityHistory2"
        #pragma pack(push, 1)
        class CCitadel_Ability_ZipLine : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x480]; // 0xba0
            source2sdk::entity2::GameTime_t m_flActivatePressTime; // 0x1020            
            bool m_bThinking; // 0x1024            
            bool m_bMoveCollidedPushUp; // 0x1025            
            uint8_t _pad1026[0x2]; // 0x1026
            source2sdk::client::EAttachState_t m_eCommittedAttachState; // 0x1028            
            uint8_t _pad102c[0x2c]; // 0x102c
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeStartZipping; // 0x1058            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeForKnockdownProtection; // 0x105c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flTimeStopZipping; // 0x1060            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flCasterSpeed; // 0x1064            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CNetworkVelocityVector m_vecInitialVel; // 0x1068            
            uint8_t _pad1090[0x8]; // 0x1090
            // metadata: MNetworkEnable
            Vector m_vecAttachPoint; // 0x1098            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_pPrevNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pPrevNode;
            char m_pPrevNode[0x4]; // 0x10a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_pNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pNextNode;
            char m_pNextNode[0x4]; // 0x10a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flTimeEnterState; // 0x10ac            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLatchTime; // 0x10b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDamagedTime; // 0x10b4            
            // metadata: MNetworkEnable
            source2sdk::client::EAttachState_t m_eAttachState; // 0x10b8            
            // metadata: MNetworkEnable
            std::int32_t m_iAttachedZipLineLane; // 0x10bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bDroppedFromZipline; // 0x10c0            
            source2sdk::modellib::AttachmentHandle_t m_hAttachZipLine; // 0x10c1            
            uint8_t _pad10c2[0x2]; // 0x10c2
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttachZipLineOffset; // 0x10c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flZiplineAirDrag; // 0x10d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vPendulumVelocity; // 0x10d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vPendulumPosition; // 0x10e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vVelocityHistory1; // 0x10ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vVelocityHistory2; // 0x10f8            
            uint8_t _pad1104[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ZipLine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ZipLine) == 0x1108);
    };
};
