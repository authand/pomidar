#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_LinkVData.hpp"
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
        // Size: 0x9c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_HookTargetVData : public source2sdk::client::CCitadel_Modifier_LinkVData
        {
        public:
            // metadata: MPropertyStartGroup "GamePlay"
            // metadata: MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
            float m_flApproachingWhooshAnticipationTime; // 0x840            
            float m_flCloseEnoughDistance; // 0x844            
            float m_flTossUpSpeed; // 0x848            
            uint8_t _pad084c[0x4]; // 0x84c
            CPiecewiseCurve m_PullSpeedScaleCurve; // 0x850            
            float m_flReturnSpeed; // 0x890            
            float m_flReturnPositionForwardOffset; // 0x894            
            float m_flReturnSpeedFail; // 0x898            
            float m_flReturnStuckTime; // 0x89c            
            float m_flFailSafeMinTime; // 0x8a0            
            float m_flFailSafeDurationMult; // 0x8a4            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_RestrictionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_RestrictionModifier;
            char m_RestrictionModifier[0x10]; // 0x8a8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
            char m_HookRetrieveParticle[0xe0]; // 0x8b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strRetractSound; // 0x998            
            CSoundEventName m_strRetractSoundEnd; // 0x9a8            
            CSoundEventName m_strApproachingWhooshSound; // 0x9b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HookTargetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_HookTargetVData) == 0x9c8);
    };
};
