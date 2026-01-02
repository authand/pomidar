#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1c40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_LeapVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x16f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ActiveModifier;
            char m_ActiveModifier[0x10]; // 0x1738            
            // m_BoostModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BoostModifier;
            char m_BoostModifier[0x10]; // 0x1748            
            // m_CrashModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_CrashModifier;
            char m_CrashModifier[0x10]; // 0x1758            
            // m_ImmunityModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ImmunityModifier;
            char m_ImmunityModifier[0x10]; // 0x1768            
            // m_LandingBonusesModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_LandingBonusesModifier;
            char m_LandingBonusesModifier[0x10]; // 0x1778            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TakeOffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TakeOffParticle;
            char m_TakeOffParticle[0xe0]; // 0x1788            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x1868            
            // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
            char m_AoEPreviewParticle[0xe0]; // 0x1948            
            // m_HoverParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoverParticle;
            char m_HoverParticle[0xe0]; // 0x1a28            
            // m_DivingPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DivingPreviewParticle;
            char m_DivingPreviewParticle[0xe0]; // 0x1b08            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCrashingSound; // 0x1be8            
            CSoundEventName m_strImpactSound; // 0x1bf8            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flStartupTime; // 0x1c08            
            float m_flForwardBoostSpeed; // 0x1c0c            
            float m_flUpBoostSpeed; // 0x1c10            
            float m_flBoostTurnRate; // 0x1c14            
            float m_flHoverTime; // 0x1c18            
            float m_flMinAimAngle; // 0x1c1c            
            float m_flBoostGain; // 0x1c20            
            float m_flBoostTime; // 0x1c24            
            float m_flLandingTime; // 0x1c28            
            float m_flCrashSpeed; // 0x1c2c            
            float m_flCrashBraceAnimTime; // 0x1c30            
            float m_flHoverInputSpeedMax; // 0x1c34            
            float m_flHoverInputAcceleration; // 0x1c38            
            float m_flHoverSpeedDecay; // 0x1c3c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_LeapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bull_LeapVData) == 0x1c40);
    };
};
