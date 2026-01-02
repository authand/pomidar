#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseYamatoAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1088
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
        class CCitadel_Ability_FlyingStrike : public source2sdk::client::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0d98[0x28]; // 0xd98
            source2sdk::client::SatVolumeIndex_t m_desatVolIdx; // 0xdc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShadowFormCast; // 0xdc4            
            uint8_t _pad0dc5[0x3]; // 0xdc5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vYamatoCastPos; // 0xdc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            Vector m_vTargetCastPos; // 0xdd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xde0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flEndAttackTime; // 0xde4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleStartTime; // 0xde8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrappleArriveTime; // 0xdec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackLatchTime; // 0xdf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vAttackLatchPos; // 0xdf4            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xe00            
            // metadata: MNetworkEnable
            bool m_bIsTargetAlly; // 0xe04            
            uint8_t _pad0e05[0x3]; // 0xe05
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGrappleShotAttackTime; // 0xe08            
            uint8_t _pad0e0c[0x4]; // 0xe0c
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnPathChanged"
            Vector m_rgPath[20]; // 0xe10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathIdx; // 0xf00            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPathSize; // 0xf04            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flPathLength; // 0xf08            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vFlyingInitialOffsetToPath; // 0xf0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float flDistFlown; // 0xf18            
            Vector m_vLastSafePos; // 0xf1c            
            uint8_t _pad0f28[0x100]; // 0xf28
            source2sdk::client::ParticleIndex_t m_nGrappleTravelEffect; // 0x1028            
            uint8_t _pad102c[0x54]; // 0x102c
            bool m_bPathDirty; // 0x1080            
            uint8_t _pad1081[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_FlyingStrike) == 0x1088);
    };
};
