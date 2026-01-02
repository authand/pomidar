#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_InvisVData.hpp"
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
        // Size: 0xc10
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierShadowStepVData : public source2sdk::client::CCitadel_Modifier_InvisVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0xa28            
            // m_ArmorDebuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ArmorDebuff;
            char m_ArmorDebuff[0x10]; // 0xa38            
            // metadata: MPropertyStartGroup "Visuals"
            // m_InvisChangedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisChangedEffect;
            char m_InvisChangedEffect[0xe0]; // 0xa48            
            // m_ShadowRevealedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShadowRevealedEffect;
            char m_ShadowRevealedEffect[0xe0]; // 0xb28            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMinInvisDuration; // 0xc08            
            uint8_t _pad0c0c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierShadowStepVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifierShadowStepVData) == 0xc10);
    };
};
