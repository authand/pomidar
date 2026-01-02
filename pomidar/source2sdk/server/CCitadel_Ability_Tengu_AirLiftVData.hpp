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
        // Size: 0x1998
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_AirLiftVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_FlyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_FlyingModifier;
            char m_FlyingModifier[0x10]; // 0x16f8            
            // m_GrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GrabModifier;
            char m_GrabModifier[0x10]; // 0x1708            
            // m_HoldBombModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_HoldBombModifier;
            char m_HoldBombModifier[0x10]; // 0x1718            
            // m_DroppedBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DroppedBuffModifier;
            char m_DroppedBuffModifier[0x10]; // 0x1728            
            // m_ExplodingAllyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ExplodingAllyModifier;
            char m_ExplodingAllyModifier[0x10]; // 0x1738            
            // m_AoEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AoEModifier;
            char m_AoEModifier[0x10]; // 0x1748            
            // metadata: MPropertyGroupName "Visuals"
            // m_InitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle;
            char m_InitialExplodeParticle[0xe0]; // 0x1758            
            // m_HoldBombEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect;
            char m_HoldBombEffect[0xe0]; // 0x1838            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1918            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAirDrag; // 0x1928            
            float m_flMaxFallSpeed; // 0x192c            
            float m_flTargetAirSpeedFast; // 0x1930            
            float m_flTargetAirSpeedBase; // 0x1934            
            float m_flSprintMult; // 0x1938            
            float m_flAcceleration; // 0x193c            
            float m_flDecceleration; // 0x1940            
            float m_flAirSideSpeedPercent; // 0x1944            
            float m_flBoostEndVerticalSpeed; // 0x1948            
            float m_flBoostSpeedUp; // 0x194c            
            float m_flCrouchLaunchReduction; // 0x1950            
            float m_flMinFlyHeight; // 0x1954            
            float m_flMaxFlyHeight; // 0x1958            
            float m_flMaxPitchUp; // 0x195c            
            float m_flMaxPitchDown; // 0x1960            
            float m_flAllyDelayedBoostTime; // 0x1964            
            float m_flChannelingAirDrag; // 0x1968            
            float m_flChannelingMaxFallSpeed; // 0x196c            
            float m_flBombReleaseSpeed; // 0x1970            
            float m_flBombReleasePitch; // 0x1974            
            float m_flBombDropReleaseOffset; // 0x1978            
            float m_flHoldBombOffsetX; // 0x197c            
            float m_flHoldBombOffsetY; // 0x1980            
            float m_flHoldBombOffsetZ; // 0x1984            
            float m_flAnglePitchBias; // 0x1988            
            float m_flTrackAmount; // 0x198c            
            float m_flMoveCollideSpeed; // 0x1990            
            uint8_t _pad1994[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLiftVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tengu_AirLiftVData) == 0x1998);
    };
};
