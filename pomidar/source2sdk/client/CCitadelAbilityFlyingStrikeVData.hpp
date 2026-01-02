#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1d90
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityFlyingStrikeVData : public source2sdk::client::CCitadelYamatoBaseVData
        {
        public:
            // metadata: MPropertyStartGroup "+Cast Properties"
            float m_flJumpFallSpeedMax; // 0x1700            
            float m_flJumpAirDrag; // 0x1704            
            float m_flJumpAirSpeedMax; // 0x1708            
            // metadata: MPropertyStartGroup "+Flying to Target Properties"
            // metadata: MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
            float m_flOnCancelVerticalSpeedBonus; // 0x170c            
            float m_flFlyingCloseEnoughToTarget; // 0x1710            
            uint8_t _pad1714[0x4]; // 0x1714
            CPiecewiseCurve m_curveSpeedScale; // 0x1718            
            // metadata: MPropertyStartGroup "+Attack Properties"
            float m_flAnimToStrikePointTime; // 0x1758            
            float m_flAnimToStrikeArrivalBias; // 0x175c            
            // metadata: MPropertyStartGroup "+Grapple Properties"
            float m_flGrappleShotFloatTime; // 0x1760            
            float m_flGrappleShotDelayToFlyOnHit; // 0x1764            
            float m_flGrappleSpeed; // 0x1768            
            uint8_t _pad176c[0x4]; // 0x176c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1770            
            // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_GrappleTargetModifier;
            char m_GrappleTargetModifier[0x10]; // 0x1780            
            // m_WeaponBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_WeaponBuffModifier;
            char m_WeaponBuffModifier[0x10]; // 0x1790            
            // metadata: MPropertyStartGroup "Visuals"
            // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
            char m_LeapParticle[0xe0]; // 0x17a0            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x1880            
            // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
            char m_SlashParticle[0xe0]; // 0x1960            
            // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
            char m_BulletGrappleTracerParticle[0xe0]; // 0x1a40            
            // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
            char m_EnemyGrappleParticle[0xe0]; // 0x1b20            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDamageTarget; // 0x1c00            
            CSoundEventName m_strStartFlyingToTarget; // 0x1c10            
            CSoundEventName m_strStartAttack; // 0x1c20            
            CSoundEventName m_strGrappleHitTarget; // 0x1c30            
            CSoundEventName m_strGrappleHitWorld; // 0x1c40            
            CSoundEventName m_strGrappleHitNothing; // 0x1c50            
            CSoundEventName m_strGrappleLoop; // 0x1c60            
            CSoundEventName m_strFlyingLoop; // 0x1c70            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1c80            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1d08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityFlyingStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelAbilityFlyingStrikeVData) == 0x1d90);
    };
};
