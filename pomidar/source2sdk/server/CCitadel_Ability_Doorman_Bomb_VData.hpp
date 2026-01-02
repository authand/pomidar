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
        // Size: 0x1a38
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Bomb_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x16f8            
            // m_MiniExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MiniExplodeParticle;
            char m_MiniExplodeParticle[0xe0]; // 0x17d8            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_ExplosionSound; // 0x1998            
            CSoundEventName m_ImpactSound; // 0x19a8            
            CSoundEventName m_HitConfirmSound; // 0x19b8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_InaccuracyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_InaccuracyModifier;
            char m_InaccuracyModifier[0x10]; // 0x19c8            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x19d8            
            // metadata: MPropertyStartGroup "GamePlay"
            CPiecewiseCurve m_ProjectileDragCurve; // 0x19e8            
            float m_flShakeAmp; // 0x1a28            
            float m_flShakeFreq; // 0x1a2c            
            float m_flShakeDuration; // 0x1a30            
            uint8_t _pad1a34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Bomb_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Doorman_Bomb_VData) == 0x1a38);
    };
};
