#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x20b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_ZipLine_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
            float m_flZiplineAirDrag; // 0x16f8            
            float m_flMinButtonHoldTimeToActivate; // 0x16fc            
            float m_flCrouchDropSpeedFraction; // 0x1700            
            float m_flCrouchDropAirDragSuppressDuration; // 0x1704            
            float m_flDetachDisallowedTime; // 0x1708            
            float m_flCameraWobbleIntensity; // 0x170c            
            float m_flDismountSpeedMax; // 0x1710            
            float m_flZiplineKnockdownUpImpulse; // 0x1714            
            // metadata: MPropertyDescription "The DOF settings to apply while riding the zipline."
            source2sdk::client::DOFDesc_t m_DOFWhileZiplining; // 0x1718            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ZipLinePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle;
            char m_ZipLinePreviewParticle[0xe0]; // 0x1728            
            // m_ZipLineSpeedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle;
            char m_ZipLineSpeedParticle[0xe0]; // 0x1808            
            // m_ZipLineTetherParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle;
            char m_ZipLineTetherParticle[0xe0]; // 0x18e8            
            // m_ZipLineTetherAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle;
            char m_ZipLineTetherAttachParticle[0xe0]; // 0x19c8            
            // m_ZipLineTetherStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherStartParticle;
            char m_ZipLineTetherStartParticle[0xe0]; // 0x1aa8            
            // m_ZipLineEnemyKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle;
            char m_ZipLineEnemyKnockdownProtectionParticle[0xe0]; // 0x1b88            
            // m_ZipLineSelfKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle;
            char m_ZipLineSelfKnockdownProtectionParticle[0xe0]; // 0x1c68            
            // m_ZipLineKnockdownProtectionStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle;
            char m_ZipLineKnockdownProtectionStatusParticle[0xe0]; // 0x1d48            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strZipLineSummonSound; // 0x1e28            
            CSoundEventName m_strZipLineStartSound; // 0x1e38            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_RidingZipLineModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RidingZipLineModifier;
            char m_RidingZipLineModifier[0x10]; // 0x1e48            
            // m_KnockedOffSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_KnockedOffSlowModifier;
            char m_KnockedOffSlowModifier[0x10]; // 0x1e58            
            // m_ZipLineIntroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ZipLineIntroModifier;
            char m_ZipLineIntroModifier[0x10]; // 0x1e68            
            // m_ZipLineKnockdownImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ZipLineKnockdownImmuneModifier;
            char m_ZipLineKnockdownImmuneModifier[0x10]; // 0x1e78            
            // m_ZipLineSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ZipLineSlowModifier;
            char m_ZipLineSlowModifier[0x10]; // 0x1e88            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1e98            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1f20            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1fa8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x2030            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ZipLine_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ZipLine_VData) == 0x20b8);
    };
};
