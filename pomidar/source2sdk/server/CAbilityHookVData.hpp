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
        // Size: 0x1b00
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityHookVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SelfModifier;
            char m_SelfModifier[0x10]; // 0x16f8            
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x1708            
            // m_BulletAmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BulletAmpModifier;
            char m_BulletAmpModifier[0x10]; // 0x1718            
            // metadata: MPropertyStartGroup "Visuals"
            // m_HookOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle;
            char m_HookOutParticle[0xe0]; // 0x1728            
            // m_PrecastHookParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PrecastHookParticle;
            char m_PrecastHookParticle[0xe0]; // 0x1808            
            // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
            char m_HookRetrieveParticle[0xe0]; // 0x18e8            
            // m_HookServerImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookServerImpactParticle;
            char m_HookServerImpactParticle[0xe0]; // 0x19c8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHookSuccessSound; // 0x1aa8            
            CSoundEventName m_strHookAllySound; // 0x1ab8            
            CSoundEventName m_strHookMissSound; // 0x1ac8            
            CSoundEventName m_strHookImpactGeoSound; // 0x1ad8            
            CSoundEventName m_SelfBuffCastSound; // 0x1ae8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flTrooperHitRadius; // 0x1af8            
            float m_flFriendlyHookIgnoreRange; // 0x1afc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityHookVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityHookVData) == 0x1b00);
    };
};
