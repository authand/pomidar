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
        // Size: 0x1bb8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_Pounce_InstantVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_LeapModifier;
            char m_LeapModifier[0x10]; // 0x16f8            
            // m_ActiveBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ActiveBuff;
            char m_ActiveBuff[0x10]; // 0x1708            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1718            
            // metadata: MPropertyStartGroup "Visuals"
            // m_AttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackParticle;
            char m_AttackParticle[0xe0]; // 0x1728            
            // m_FlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlashParticle;
            char m_FlashParticle[0xe0]; // 0x1808            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x18e8            
            // m_ExplodeSlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeSlowParticle;
            char m_ExplodeSlowParticle[0xe0]; // 0x19c8            
            // m_PrimaryHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PrimaryHitParticle;
            char m_PrimaryHitParticle[0xe0]; // 0x1aa8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_AttackSound; // 0x1b88            
            CSoundEventName m_strExplodeSound; // 0x1b98            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAttackTimePhase01; // 0x1ba8            
            float m_flAttackTimePhase02; // 0x1bac            
            float m_flAllyMinTargetRange; // 0x1bb0            
            float m_flTargetVerticalOffset; // 0x1bb4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_InstantVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Nano_Pounce_InstantVData) == 0x1bb8);
    };
};
