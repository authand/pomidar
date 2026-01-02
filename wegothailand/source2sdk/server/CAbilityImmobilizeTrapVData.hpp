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
        // Size: 0x1ae8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityImmobilizeTrapVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x16f8            
            // m_PreviewRingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle;
            char m_PreviewRingParticle[0xe0]; // 0x17d8            
            // m_TrapHighlightParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrapHighlightParticle;
            char m_TrapHighlightParticle[0xe0]; // 0x18b8            
            // m_ArmedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ArmedParticle;
            char m_ArmedParticle[0xe0]; // 0x1998            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strTripSound; // 0x1a78            
            CSoundEventName m_strExplodeSound; // 0x1a88            
            CSoundEventName m_strExpiredSound; // 0x1a98            
            CSoundEventName m_strImmobilizeTargetSound; // 0x1aa8            
            CSoundEventName m_strArmingSound; // 0x1ab8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GlitchModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GlitchModifier;
            char m_GlitchModifier[0x10]; // 0x1ac8            
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1ad8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityImmobilizeTrapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityImmobilizeTrapVData) == 0x1ae8);
    };
};
