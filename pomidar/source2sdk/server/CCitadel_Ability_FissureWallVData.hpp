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
        // Size: 0x18e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_FissureWallVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_FriendlyWallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FriendlyWallParticle;
            char m_FriendlyWallParticle[0xe0]; // 0x16f8            
            // m_EnemyWallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyWallParticle;
            char m_EnemyWallParticle[0xe0]; // 0x17d8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_WallTravelSoundLoop; // 0x18b8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_WallModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_WallModifier;
            char m_WallModifier[0x10]; // 0x18c8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flWallPreviewDropdownRate; // 0x18d8            
            float m_flWallStepHeight; // 0x18dc            
            float m_flWallTraceRadius; // 0x18e0            
            uint8_t _pad18e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FissureWallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_FissureWallVData) == 0x18e8);
    };
};
