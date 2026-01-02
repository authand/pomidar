#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x1840
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_CatFormPounceVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_AttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackParticle;
            char m_AttackParticle[0xe0]; // 0x16f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCatFormMeleeSwing; // 0x17d8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAttackTime; // 0x17e8            
            float m_flAttackRange; // 0x17ec            
            float m_flAttackHalfAngle; // 0x17f0            
            float m_flAttackConeHalfWidth; // 0x17f4            
            float m_flMinAttackTime; // 0x17f8            
            float m_flStopTargetRange; // 0x17fc            
            CPiecewiseCurve m_MovementSpeedCurve; // 0x1800            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_CatFormPounceVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Nano_CatFormPounceVData) == 0x1840);
    };
};
