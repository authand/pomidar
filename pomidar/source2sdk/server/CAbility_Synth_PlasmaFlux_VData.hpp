#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
        // Size: 0x1990
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Synth_PlasmaFlux_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_WeaponDamageBonusModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_WeaponDamageBonusModifier;
            char m_WeaponDamageBonusModifier[0x10]; // 0x16f8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
            char m_TeleportTrailParticle[0xe0]; // 0x1708            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x17e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCasterLoopingSound; // 0x18c8            
            CSoundEventName m_strProjectileExpireSound; // 0x18d8            
            CSoundEventName m_strImpactSound; // 0x18e8            
            CSoundEventName m_strTimerSound; // 0x18f8            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x1908            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Synth_PlasmaFlux_VData) == 0x1990);
    };
};
