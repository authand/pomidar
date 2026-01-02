#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x1830
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityStormCloudVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
            char m_AoEPreviewParticle[0xe0]; // 0x16f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_StormCloudModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_StormCloudModifier;
            char m_StormCloudModifier[0x10]; // 0x17d8            
            // m_LightningStrikeAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LightningStrikeAOEModifier;
            char m_LightningStrikeAOEModifier[0x10]; // 0x17e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLightningStrikeCast; // 0x17f8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flOscillateFrequency; // 0x1808            
            float m_flOscillateSpeed; // 0x180c            
            float m_flOscillateSpeedStart; // 0x1810            
            float m_flOscillateStartOffset; // 0x1814            
            float m_flAirDrag; // 0x1818            
            float m_flFlightAirDrag; // 0x181c            
            float m_flFlightLateralMoveSpeed; // 0x1820            
            float m_flVerticalMoveSpeedPercent; // 0x1824            
            float m_flAirAcceleration; // 0x1828            
            uint8_t _pad182c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityStormCloudVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityStormCloudVData) == 0x1830);
    };
};
