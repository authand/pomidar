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
        // Size: 0x1a98
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatSwarmVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x16f8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_GainedBatParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GainedBatParticle;
            char m_GainedBatParticle[0xe0]; // 0x1708            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x17e8            
            // m_BatSwarmChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BatSwarmChannelParticle;
            char m_BatSwarmChannelParticle[0xe0]; // 0x18c8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strFireBatSound; // 0x19a8            
            CSoundEventName m_strGainedBatSound; // 0x19b8            
            CSoundEventName m_strChannelEndSound; // 0x19c8            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bAllowLockOn; // 0x19d8            
            bool m_bAllowSatVolume; // 0x19d9            
            bool m_bAllowRetarget; // 0x19da            
            uint8_t _pad19db[0x1]; // 0x19db
            float m_flBatTickRate; // 0x19dc            
            float m_flBatLifetime; // 0x19e0            
            float m_flTrackingAngularStrengthMin; // 0x19e4            
            float m_flTrackingAngularStrengthMax; // 0x19e8            
            float m_flBatRetargetRadius; // 0x19ec            
            float m_flCurlNoiseStrength; // 0x19f0            
            float m_flCurlNoiseMinFrequency; // 0x19f4            
            float m_flCurlNoiseMaxFrequency; // 0x19f8            
            uint8_t _pad19fc[0x4]; // 0x19fc
            CPiecewiseCurve m_DistanceToAccuracyCurve; // 0x1a00            
            CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // 0x1a40            
            Color aimColorDesat; // 0x1a80            
            Color aimColorSat; // 0x1a84            
            Color aimColorOutline; // 0x1a88            
            float m_flSatVolumePulsePerBat; // 0x1a8c            
            float m_flSatVolumeInnerConeSize; // 0x1a90            
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarmVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_VampireBat_BatSwarmVData) == 0x1a98);
    };
};
