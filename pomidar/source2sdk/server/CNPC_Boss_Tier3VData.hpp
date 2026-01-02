#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CBaseModifier.hpp"

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
        // Size: 0x1b18
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Boss_Tier3VData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            std::int32_t m_nPhase2Health; // 0x11d8            
            float m_flEyeZOffset; // 0x11dc            
            float m_flDefaultMoveSpeed; // 0x11e0            
            float m_flNoShieldMoveSpeed; // 0x11e4            
            float m_flEnemyTrooperProtectionRange; // 0x11e8            
            uint8_t _pad11ec[0x4]; // 0x11ec
            // metadata: MPropertyStartGroup "Visuals"
            // m_DeathSmallExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle;
            char m_DeathSmallExplosionParticle[0xe0]; // 0x11f0            
            // m_DeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle;
            char m_DeathLargeExplosionParticle[0xe0]; // 0x12d0            
            // m_WeakpointBrokenExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle;
            char m_WeakpointBrokenExplosionParticle[0xe0]; // 0x13b0            
            // m_ChargeUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle;
            char m_ChargeUpExplosionParticle[0xe0]; // 0x1490            
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x1570            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_DyingSmallExplosion; // 0x1650            
            CSoundEventName m_PatronTransformStartSound; // 0x1660            
            CSoundEventName m_PatronTransformEndSound; // 0x1670            
            CSoundEventName m_PatronKilledSound; // 0x1680            
            CSoundEventName m_TransformingLoopSound; // 0x1690            
            CSoundEventName m_LaserSound; // 0x16a0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LaserBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_LaserBeamModifier;
            char m_LaserBeamModifier[0x10]; // 0x16b0            
            // m_DyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DyingModifier;
            char m_DyingModifier[0x10]; // 0x16c0            
            // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_VulnerableModifier;
            char m_VulnerableModifier[0x10]; // 0x16d0            
            // m_Phase1Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_Phase1Modifier;
            char m_Phase1Modifier[0x10]; // 0x16e0            
            // m_Phase2Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_Phase2Modifier;
            char m_Phase2Modifier[0x10]; // 0x16f0            
            // m_BackdoorProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_BackdoorProtection;
            char m_BackdoorProtection[0x10]; // 0x1700            
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x1710            
            // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ObjectiveRegen;
            char m_ObjectiveRegen[0x10]; // 0x1720            
            // m_ObjectiveHealthGrowthPhase1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ObjectiveHealthGrowthPhase1;
            char m_ObjectiveHealthGrowthPhase1[0x10]; // 0x1730            
            // m_ObjectiveHealthGrowthPhase2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ObjectiveHealthGrowthPhase2;
            char m_ObjectiveHealthGrowthPhase2[0x10]; // 0x1740            
            // m_EnemyTrooperDamageReduction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_EnemyTrooperDamageReduction;
            char m_EnemyTrooperDamageReduction[0x10]; // 0x1750            
            // metadata: MPropertyStartGroup "Laser"
            // m_LaserChargingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle;
            char m_LaserChargingParticle[0xe0]; // 0x1760            
            // m_LaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect;
            char m_LaserBeamEffect[0xe0]; // 0x1840            
            // m_LaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect;
            char m_LaserPreviewEffect[0xe0]; // 0x1920            
            // m_LaserDamageEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect;
            char m_LaserDamageEffect[0xe0]; // 0x1a00            
            float m_flLaserTargetingZOffset; // 0x1ae0            
            float m_flLaserTrackingSpeed; // 0x1ae4            
            float m_flLaserTrackingMaxSpeed; // 0x1ae8            
            float m_flLaserCastingTrackSpeed; // 0x1aec            
            float m_flLaserCastingTrackMaxSpeed; // 0x1af0            
            float m_flLaserDPSToPlayers; // 0x1af4            
            float m_flLaserDPSToNPCs; // 0x1af8            
            float m_flLaserDPSMaxHealth; // 0x1afc            
            float m_flNoShieldLaserTrackingSpeed; // 0x1b00            
            float m_flNoShieldLaserTrackingMaxSpeed; // 0x1b04            
            float m_flNoShieldLaserCastingTrackSpeed; // 0x1b08            
            float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x1b0c            
            float m_flNoShieldLaserDPSToPlayers; // 0x1b10            
            float m_flNoShieldLaserDPSToNPCs; // 0x1b14            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier3VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier3VData) == 0x1b18);
    };
};
