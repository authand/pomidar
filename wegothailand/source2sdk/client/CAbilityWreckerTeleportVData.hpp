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
        // Size: 0x1ad0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityWreckerTeleportVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_SpectatingProjectileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpectatingProjectileParticle;
            char m_SpectatingProjectileParticle[0xe0]; // 0x16f8            
            // m_ExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle;
            char m_ExplosionParticle[0xe0]; // 0x17d8            
            // m_ChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle;
            char m_ChannelParticle[0xe0]; // 0x18b8            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x1998            
            float m_ArrowOffsetX; // 0x1a78            
            float m_ArrowCameraDistance; // 0x1a7c            
            float m_ArrowCameraHeightOffset; // 0x1a80            
            float m_ArrowInitialPitch; // 0x1a84            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GuidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GuidingModifier;
            char m_GuidingModifier[0x10]; // 0x1a88            
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1a98            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1aa8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flTrackAmount; // 0x1ab8            
            float m_flSpeedAccel; // 0x1abc            
            float m_flSpeedDeccel; // 0x1ac0            
            float m_flBaseProjectileSpeed; // 0x1ac4            
            float m_flMaxProjectileSpeed; // 0x1ac8            
            uint8_t _pad1acc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityWreckerTeleportVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityWreckerTeleportVData) == 0x1ad0);
    };
};
