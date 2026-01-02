#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1ae0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_DragonFireVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DragonSpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DragonSpawnParticle;
            char m_DragonSpawnParticle[0xe0]; // 0x16f8            
            // m_DragonCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DragonCastParticle;
            char m_DragonCastParticle[0xe0]; // 0x17d8            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x18b8            
            // m_ProjectileModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_ProjectileModel;
            char m_ProjectileModel[0xe0]; // 0x1998            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GroundAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GroundAuraModifier;
            char m_GroundAuraModifier[0x10]; // 0x1a78            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExpiredSound; // 0x1a88            
            // metadata: MPropertyStartGroup "Gameplay"
            float flSpawnVerticalOffset; // 0x1a98            
            // metadata: MPropertyDescription "The distance that the dragon appears away from surfaces"
            float flIdealSpringLength; // 0x1a9c            
            // metadata: MPropertyDescription "How strong the spring effect is. Higher values will bounce around more as it tries to reach its ideal position."
            float flSpringConstant; // 0x1aa0            
            // metadata: MPropertyDescription "How strong the damper effect is. Higher values will smooth out the approach and prevent overshooting."
            float flDamperConstant; // 0x1aa4            
            // metadata: MPropertyDescription "How much the dragon will look in the direction its traveling. Higher values will mean the velocity controls more of the orientation."
            float flVelocityImpactOnAngle; // 0x1aa8            
            // metadata: MPropertyDescription "How many degrees to offset our final pitch. Can be used to aim the dragon downwards."
            float flPitchOffset; // 0x1aac            
            // metadata: MPropertyDescription "Changes which way is forward for the dragon based on the surface it hits. Otherwise, it will go forward based on the direction."
            float flDotToChangeForwardDirectionBasedOnImpactNormal; // 0x1ab0            
            // metadata: MPropertyDescription "Shows debug properties."
            bool bDebug; // 0x1ab4            
            uint8_t _pad1ab5[0x3]; // 0x1ab5
            // metadata: MPropertyDescription "The distance of the trace when a book hits a surface."
            float flForwardTraceDistance; // 0x1ab8            
            // metadata: MPropertyDescription "The forward offset of our ground spring behavior. Allows the dragon to start rising before having to be directly on top of something."
            float m_flFloorRaycastForward; // 0x1abc            
            float m_flTraceRadius; // 0x1ac0            
            float m_flDistanceAboveGround; // 0x1ac4            
            float m_flFloatDownRate; // 0x1ac8            
            float m_flClimbHeight; // 0x1acc            
            float m_flStepDownHeight; // 0x1ad0            
            float m_flQAngleSmoothRate; // 0x1ad4            
            bool m_bShouldReflectAgainstWall; // 0x1ad8            
            uint8_t _pad1ad9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_DragonFireVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bookworm_DragonFireVData) == 0x1ae0);
    };
};
