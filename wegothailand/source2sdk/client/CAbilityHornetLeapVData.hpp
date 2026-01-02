#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x19c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityHornetLeapVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            float m_flChannelingAirDrag; // 0x16f8            
            float m_flChannelingMaxFallSpeed; // 0x16fc            
            float m_flVerticalMoveSpeedPercent; // 0x1700            
            float m_flAirDrag; // 0x1704            
            float m_flAirAcceleration; // 0x1708            
            float m_flLaunchAirDrag; // 0x170c            
            float m_flLaunchTime; // 0x1710            
            float m_flMoveSpeedAboveBaseScale; // 0x1714            
            // metadata: MPropertyGroupName "Modifiers"
            // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LeapModifier;
            char m_LeapModifier[0x10]; // 0x1718            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DustParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DustParticle;
            char m_DustParticle[0xe0]; // 0x1728            
            // m_TrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrailParticle;
            char m_TrailParticle[0xe0]; // 0x1808            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x18e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHornetLeapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityHornetLeapVData) == 0x19c8);
    };
};
