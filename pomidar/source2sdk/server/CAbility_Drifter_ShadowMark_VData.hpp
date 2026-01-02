#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
        // Size: 0x19a0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Drifter_ShadowMark_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x16f8            
            // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
            char m_TeleportTrailParticle[0xe0]; // 0x17d8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x18b8            
            // m_TargetTeleportModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TargetTeleportModifier;
            char m_TargetTeleportModifier[0x10]; // 0x18c8            
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x18d8            
            // m_PostTeleportModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PostTeleportModifier;
            char m_PostTeleportModifier[0x10]; // 0x18e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHitHeroSound; // 0x18f8            
            CSoundEventName m_strHitNPCSound; // 0x1908            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x1918            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Drifter_ShadowMark_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Drifter_ShadowMark_VData) == 0x19a0);
    };
};
