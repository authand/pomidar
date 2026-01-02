#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
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
        // Size: 0xa50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierPsychicLiftVData : public source2sdk::client::CCitadel_Modifier_StunnedVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0x840            
            // m_DisarmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DisarmModifier;
            char m_DisarmModifier[0x10]; // 0x850            
            // metadata: MPropertyStartGroup "Visuals"
            // m_LiftParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LiftParticle;
            char m_LiftParticle[0xe0]; // 0x860            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x940            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strImpactSound; // 0xa20            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flRiseTime; // 0xa30            
            float m_flRiseAcc; // 0xa34            
            float m_flRiseMaxSpeed; // 0xa38            
            float m_flRiseDecayFracStart; // 0xa3c            
            float m_flRiseDecayFracEnd; // 0xa40            
            float m_flSlamAcc; // 0xa44            
            float m_flSlamMaxSpeed; // 0xa48            
            float m_flSlamImpactRadius; // 0xa4c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierPsychicLiftVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierPsychicLiftVData) == 0xa50);
    };
};
