#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
        // Size: 0xa28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_InvisVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_InvisLoopParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisLoopParticle;
            char m_InvisLoopParticle[0xe0]; // 0x760            
            // m_InvisDetectRadiusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisDetectRadiusParticle;
            char m_InvisDetectRadiusParticle[0xe0]; // 0x840            
            // m_InvisRevealedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisRevealedParticle;
            char m_InvisRevealedParticle[0xe0]; // 0x920            
            float m_flDesatFactor; // 0xa00            
            uint8_t _pad0a04[0x4]; // 0xa04
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strInvisRevealedSound; // 0xa08            
            // metadata: MPropertyStartGroup "Behavior"
            bool m_bFadeInsteadOfRemoveOnBulletFire; // 0xa18            
            bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0xa19            
            bool m_bBreakOnItemUse; // 0xa1a            
            // metadata: MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
            bool m_bFadeToVisibleAtEndOfDuration; // 0xa1b            
            float m_flMinCloak; // 0xa1c            
            float m_flMaxCloak; // 0xa20            
            uint8_t _pad0a24[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_InvisVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_InvisVData) == 0xa28);
    };
};
