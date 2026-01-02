#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"
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
        // Size: 0xe98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bShadowFormCast"
        // static metadata: MNetworkVarNames "Vector m_vYamatoCastPos"
        // static metadata: MNetworkVarNames "Vector m_vTargetCastPos"
        // static metadata: MNetworkVarNames "GameTime_t m_flFlyingToTargetStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackLatchTime"
        // static metadata: MNetworkVarNames "Vector m_vAttackLatchPos"
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "bool m_bIsTargetAlly"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
        // static metadata: MNetworkVarNames "Vector m_rgPath"
        // static metadata: MNetworkVarNames "int m_nPathIdx"
        // static metadata: MNetworkVarNames "int m_nPathSize"
        // static metadata: MNetworkVarNames "float m_flPathLength"
        // static metadata: MNetworkVarNames "Vector m_vFlyingInitialOffsetToPath"
        // static metadata: MNetworkVarNames "float flDistFlown"
        #pragma pack(push, 1)
        class CCitadel_Ability_FlyingStrike : public source2sdk::server::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0ba8[0x28]; // 0xba8
            std::int32_t m_iTargetPosIndex; // 0xbd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShadowFormCast; // 0xbd4            
            uint8_t _pad0bd5[0x3]; // 0xbd5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vYamatoCastPos; // 0xbd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vTargetCastPos; // 0xbe4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xbf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flEndAttackTime; // 0xbf4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleStartTime; // 0xbf8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleArriveTime; // 0xbfc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackLatchTime; // 0xc00            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttackLatchPos; // 0xc04            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xc10            
            // metadata: MNetworkEnable
            bool m_bIsTargetAlly; // 0xc14            
            uint8_t _pad0c15[0x3]; // 0xc15
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGrappleShotAttackTime; // 0xc18            
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0xc1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnPathChanged"
            Vector m_rgPath[20]; // 0xc20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathIdx; // 0xd10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathSize; // 0xd14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flPathLength; // 0xd18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vFlyingInitialOffsetToPath; // 0xd1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float flDistFlown; // 0xd28            
            Vector m_vLastSafePos; // 0xd2c            
            uint8_t _pad0d38[0x100]; // 0xd38
            source2sdk::client::ParticleIndex_t m_nGrappleTravelEffect; // 0xe38            
            uint8_t _pad0e3c[0x54]; // 0xe3c
            bool m_bPathDirty; // 0xe90            
            uint8_t _pad0e91[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_FlyingStrike) == 0xe98);
    };
};
