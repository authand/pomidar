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
        // Size: 0x19f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityShivDashVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DashModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DashModifier;
            char m_DashModifier[0x10]; // 0x16f8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
            char m_DashImpactEffect[0xe0]; // 0x1708            
            // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
            char m_DashSwingEffect[0xe0]; // 0x17e8            
            // m_DashLineEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect;
            char m_DashLineEffect[0xe0]; // 0x18c8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDashStartWithTargets; // 0x19a8            
            CSoundEventName m_strDashStartEcho; // 0x19b8            
            CSoundEventName m_strDashStartMiss; // 0x19c8            
            CSoundEventName m_strDashHitEnemy; // 0x19d8            
            // metadata: MPropertyStartGroup "+Dash Properties"
            float m_flEchoDelay; // 0x19e8            
            uint8_t _pad19ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityShivDashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityShivDashVData) == 0x19f0);
    };
};
