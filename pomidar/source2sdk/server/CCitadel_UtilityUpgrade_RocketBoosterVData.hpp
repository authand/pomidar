#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_UtilityUpgrade_RocketBootsVData.hpp"

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
        // Size: 0x1b68
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_UtilityUpgrade_RocketBoosterVData : public source2sdk::server::CCitadel_UtilityUpgrade_RocketBootsVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_LandingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LandingParticle;
            char m_LandingParticle[0xe0]; // 0x1880            
            // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
            char m_AoEPreviewParticle[0xe0]; // 0x1960            
            // m_DropDownStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DropDownStartParticle;
            char m_DropDownStartParticle[0xe0]; // 0x1a40            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_DropDownStartSound; // 0x1b20            
            CSoundEventName m_LandingSound; // 0x1b30            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1b40            
            // m_BarrierModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BarrierModifier;
            char m_BarrierModifier[0x10]; // 0x1b50            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flSlamEnabledTime; // 0x1b60            
            uint8_t _pad1b64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_UtilityUpgrade_RocketBoosterVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_UtilityUpgrade_RocketBoosterVData) == 0x1b68);
    };
};
