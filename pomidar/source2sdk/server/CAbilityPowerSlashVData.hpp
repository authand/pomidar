#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"

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
        // Size: 0x1c18
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPowerSlashVData : public source2sdk::server::CCitadelYamatoBaseVData
        {
        public:
            float m_flAirDrag; // 0x1700            
            float m_flMaxPowerPadding; // 0x1704            
            float m_flEffectGroundTrace; // 0x1708            
            float m_flWhizbyMaxRange; // 0x170c            
            float m_flStartPosTestCapsuleLength; // 0x1710            
            float m_flCoverLOSBackDist; // 0x1714            
            // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
            Vector m_vecLongEffectOffset; // 0x1718            
            uint8_t _pad1724[0x4]; // 0x1724
            // metadata: MPropertyStartGroup "Visuals"
            // m_PowerSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle;
            char m_PowerSlashParticle[0xe0]; // 0x1728            
            // m_PowerSlashFullParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle;
            char m_PowerSlashFullParticle[0xe0]; // 0x1808            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x18e8            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x19c8            
            // m_PowerUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle;
            char m_PowerUpParticle[0xe0]; // 0x1aa8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strStartSound; // 0x1b88            
            CSoundEventName m_strHitConfirmSound; // 0x1b98            
            CSoundEventName m_strPowerUp1Sounds; // 0x1ba8            
            CSoundEventName m_strPowerUp2Sounds; // 0x1bb8            
            CSoundEventName m_strPowerUp3Sounds; // 0x1bc8            
            CSoundEventName m_strWhizbySound; // 0x1bd8            
            CSoundEventName m_strSlashSound; // 0x1be8            
            CSoundEventName m_strSlashFullSound; // 0x1bf8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1c08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPowerSlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityPowerSlashVData) == 0x1c18);
    };
};
