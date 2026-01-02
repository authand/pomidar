#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/TrooperType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x18c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_NPC_TrooperVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            source2sdk::client::TrooperType_t m_TrooperType; // 0x11d8            
            float m_flTrooperDamageResistPct; // 0x11dc            
            float m_flPlayerDamageResistPct; // 0x11e0            
            float m_flT1BossDamageResistPct; // 0x11e4            
            float m_flT2BossDamageResistPct; // 0x11e8            
            float m_flT3BossDamageResistPct; // 0x11ec            
            float m_flBarrackGuardianDamageResistPct; // 0x11f0            
            float m_flNearDeathDuration; // 0x11f4            
            float m_flFlySpeed; // 0x11f8            
            float m_flFlyHeight; // 0x11fc            
            float m_flMeleeDamage; // 0x1200            
            float m_flMeleeDuration; // 0x1204            
            float m_flMeleeChargeRange; // 0x1208            
            float m_flAttackT1BossMaxRange; // 0x120c            
            float m_flAttackT3BossMaxRange; // 0x1210            
            float m_flAttackT3BossPhase2MaxRange; // 0x1214            
            float m_flAttackTrooperMaxRange; // 0x1218            
            float m_flHealthBarOffsetDucking; // 0x121c            
            // metadata: MPropertyStartGroup "Trooper DPS"
            // metadata: MPropertyDescription "Trooper vs Trooper DPS"
            float m_flTrooperDPS; // 0x1220            
            // metadata: MPropertyDescription "Trooper vs Player DPS"
            float m_flPlayerDPS; // 0x1224            
            // metadata: MPropertyDescription "Trooper vs T1 Guardian Base DPS "
            float m_flT1BossDPS; // 0x1228            
            float m_flT1BossDPSBaseResist; // 0x122c            
            float m_flT1BossDPSMaxResist; // 0x1230            
            float m_flT1BossDPSMaxResistTimeInSeconds; // 0x1234            
            // metadata: MPropertyDescription "Trooper vs T2 Guardian Base DPS "
            float m_flT2BossDPS; // 0x1238            
            float m_flT2BossDPSBaseResist; // 0x123c            
            float m_flT2BossDPSMaxResist; // 0x1240            
            float m_flT2BossDPSMaxResistTimeInSeconds; // 0x1244            
            // metadata: MPropertyDescription "Trooper vs T3 Guardian DPS"
            float m_flT3BossDPS; // 0x1248            
            // metadata: MPropertyDescription "Trooper vs Barrack Guardian DPS"
            float m_flBarrackBossDPS; // 0x124c            
            // metadata: MPropertyDescription "Trooper vs Generator DPS"
            float m_flGeneratorBossDPS; // 0x1250            
            uint8_t _pad1254[0x4]; // 0x1254
            // metadata: MPropertyStartGroup "Visuals"
            // m_BossAttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BossAttackParticle;
            char m_BossAttackParticle[0xe0]; // 0x1258            
            // m_LastHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LastHitParticle;
            char m_LastHitParticle[0xe0]; // 0x1338            
            // m_TargetingLaserParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingLaserParticle;
            char m_TargetingLaserParticle[0xe0]; // 0x1418            
            // m_TargetingEyeFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingEyeFlashParticle;
            char m_TargetingEyeFlashParticle[0xe0]; // 0x14f8            
            // m_sZiplineContainerBreakFromDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromDamageParticle;
            char m_sZiplineContainerBreakFromDamageParticle[0xe0]; // 0x15d8            
            // m_sZiplineContainerBreakFromLandingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sZiplineContainerBreakFromLandingParticle;
            char m_sZiplineContainerBreakFromLandingParticle[0xe0]; // 0x16b8            
            // m_MedicHealActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MedicHealActiveParticle;
            char m_MedicHealActiveParticle[0xe0]; // 0x1798            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sPlayerLastHitSound; // 0x1878            
            CSoundEventName m_sCelebrationSound; // 0x1888            
            CSoundEventName m_sZiplineContainerBreakSound; // 0x1898            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_NearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NearDeathModifier;
            char m_NearDeathModifier[0x10]; // 0x18a8            
            // m_TrooperBossInvulnModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TrooperBossInvulnModifier;
            char m_TrooperBossInvulnModifier[0x10]; // 0x18b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_NPC_TrooperVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_NPC_TrooperVData) == 0x18c8);
    };
};
