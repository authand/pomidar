#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/ELOSCheck.hpp"
#include "source2sdk/client/TimeScalingValue_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_BreakablePropPickupVData.hpp"

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
        // Size: 0xae0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_BreakablePropHealthPickupVData : public source2sdk::server::CCitadel_BreakablePropPickupVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // metadata: MPropertyFriendlyName "AOE Heal Particle"
            // m_ParticleAOEHeal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParticleAOEHeal;
            char m_ParticleAOEHeal[0xe0]; // 0x970            
            // metadata: MPropertyFriendlyName "Instant max health heal percent"
            // metadata: MPropertyDescription "Between 0 and 100, what percent of max health should a pickup heal instantly on pickup."
            source2sdk::client::TimeScalingValue_t m_flHealMaxHealthPercent; // 0xa50            
            // metadata: MPropertyFriendlyName "Instant heal"
            // metadata: MPropertyDescription "Fixed amount to heal instantly on pickup"
            source2sdk::client::TimeScalingValue_t m_flHealFixed; // 0xa60            
            // metadata: MPropertyFriendlyName "Instant Percent Missing Heal"
            // metadata: MPropertyDescription "Between 0 and 100, what percent of missing health to heal instantly"
            source2sdk::client::TimeScalingValue_t m_flMissingPctHeal; // 0xa70            
            // metadata: MPropertyFriendlyName "Max health regen percent"
            // metadata: MPropertyDescription "Between 0 and 100, what percent of max health should a pickup regen over time"
            source2sdk::client::TimeScalingValue_t m_flRegenMaxHealthPercent; // 0xa80            
            // metadata: MPropertyFriendlyName "Regen"
            // metadata: MPropertyDescription "Amount of health to regen over time"
            source2sdk::client::TimeScalingValue_t m_flRegenFixed; // 0xa90            
            // metadata: MPropertyFriendlyName "Percent Missing Regen"
            // metadata: MPropertyDescription "Between 0 and 100, what percent of missing health to regen"
            source2sdk::client::TimeScalingValue_t m_flMissingPctRegen; // 0xaa0            
            // metadata: MPropertyStartGroup "Regen Modifier Settings"
            bool m_bUseFixedDuration; // 0xab0            
            uint8_t _pad0ab1[0x3]; // 0xab1
            // metadata: MPropertyDescription "How long to apply total regen (HPS dynamically calculated)"
            float m_flRegenDuration; // 0xab4            
            // metadata: MPropertyDescription "How much HPS to provide (duration dynamically calculated)"
            float m_flRegenHPS; // 0xab8            
            uint8_t _pad0abc[0x4]; // 0xabc
            // m_RegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RegenModifier;
            char m_RegenModifier[0x10]; // 0xac0            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Heal AOE Radius"
            // metadata: MPropertyDescription "When > 0, applies the heal to units within the radius"
            float m_flAOERadius; // 0xad0            
            // metadata: MPropertyStartGroup "AOE Heal Settings"
            // metadata: MPropertySuppressExpr "m_flAOERadius == 0"
            // metadata: MPropertyFriendlyName "Target Types"
            source2sdk::client::CITADEL_UNIT_TARGET_TYPE m_AOETargetTypes; // 0xad4            
            // metadata: MPropertySuppressExpr "m_flAOERadius == 0"
            // metadata: MPropertyFriendlyName "Targeting Flags"
            source2sdk::client::CITADEL_UNIT_TARGET_FLAGS m_AOETargetFlags; // 0xad8            
            // metadata: MPropertySuppressExpr "m_flAOERadius == 0"
            // metadata: MPropertyFriendlyName "LOS Method"
            source2sdk::client::ELOSCheck m_AOELOSCheckType; // 0xadc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropHealthPickupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakablePropHealthPickupVData) == 0xae0);
    };
};
