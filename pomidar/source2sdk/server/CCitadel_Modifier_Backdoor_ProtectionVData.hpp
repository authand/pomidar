#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x948
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Backdoor_ProtectionVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyDescription "How long this modifier must be alive before backdoor protection is activated"
            float m_flActivationTime; // 0x760            
            // metadata: MPropertyDescription "How much should damage be reduced from players when backdoor protection is up? 0 is no reduction, 100 is complete reduction"
            // metadata: MPropertyAttributeRange "0 100"
            float m_flBackdoorProtectionDamageMitigationFromPlayers; // 0x764            
            // metadata: MPropertyDescription "How health per second does backdoor protection regen?"
            float m_flHealthPerSecondRegen; // 0x768            
            // metadata: MPropertyDescription "How health per second when out of combat?"
            float m_flOutOfCombatHealthRegen; // 0x76c            
            // metadata: MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
            float m_flOutOfCombatRegenDelay; // 0x770            
            // metadata: MPropertyDescription "How long the shield effect lingers after having taken damage"
            float m_flEffectsLingerTime; // 0x774            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ShieldImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldImpactParticle;
            char m_ShieldImpactParticle[0xe0]; // 0x778            
            // m_ShieldActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldActiveParticle;
            char m_ShieldActiveParticle[0xe0]; // 0x858            
            CUtlString m_strActiveEffectConfigName; // 0x938            
            float flShieldImpactDirectionOffset; // 0x940            
            uint8_t _pad0944[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Backdoor_ProtectionVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Backdoor_ProtectionVData) == 0x948);
    };
};
