#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/WeakPointParams_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_Base_Buildup.hpp"

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
        // Size: 0x1880
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Boss_Tier2VData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            float m_flPlayerInitialSightRange; // 0x11d8            
            uint8_t _pad11dc[0x4]; // 0x11dc
            // metadata: MPropertyStartGroup "Visuals"
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x11e0            
            // metadata: MPropertyStartGroup "Weak Points"
            // metadata: MPropertyStartGroup "Electric Beam (Laser)"
            bool m_bBeamTurnToFire; // 0x12c0            
            uint8_t _pad12c1[0x7]; // 0x12c1
            // m_BeamChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamChargingEffect;
            char m_BeamChargingEffect[0xe0]; // 0x12c8            
            // m_BeamPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect;
            char m_BeamPreviewEffect[0xe0]; // 0x13a8            
            // m_BeamActiveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect;
            char m_BeamActiveEffect[0xe0]; // 0x1488            
            // metadata: MPropertyStartGroup "Stomp"
            // m_StompImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect;
            char m_StompImpactEffect[0xe0]; // 0x1568            
            // m_StompWarningEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompWarningEffect;
            char m_StompWarningEffect[0xe0]; // 0x1648            
            float m_flTossSpeed; // 0x1728            
            float m_flStompDamage; // 0x172c            
            float m_flStompDamageMaxHealthPercent; // 0x1730            
            float m_flStompDamageTrooperRate; // 0x1734            
            float m_flStompTossUpMagnitude; // 0x1738            
            float m_flStunDuration; // 0x173c            
            float m_flStompImpactRadius; // 0x1740            
            float m_flStompImpactHeight; // 0x1744            
            float m_flStompParryRadius; // 0x1748            
            float m_flStompParryImpulse; // 0x174c            
            float m_flStompParryImpulseInAir; // 0x1750            
            float m_flStompParryDamageMult; // 0x1754            
            float m_flSweepRadius; // 0x1758            
            float m_flSweepSpeed; // 0x175c            
            float m_flSweepZScale; // 0x1760            
            float m_flSweepMaxAngle; // 0x1764            
            float m_flSweepMaxRange; // 0x1768            
            float m_flSweepAdjustSpeed; // 0x176c            
            CSoundEventName m_StompParriedSound; // 0x1770            
            CSoundEventName m_StompImpactSound; // 0x1780            
            // metadata: MPropertyStartGroup "Gun"
            float m_flBurstDuration; // 0x1790            
            float m_flBurstCooldown; // 0x1794            
            // metadata: MPropertyStartGroup "Modifiers"
            // metadata: MPropertyDescription "Backdoor Protection Modifier"
            // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BackdoorProtectionModifier;
            char m_BackdoorProtectionModifier[0x10]; // 0x1798            
            float m_flBackDoorProtectionRange; // 0x17a8            
            uint8_t _pad17ac[0x4]; // 0x17ac
            // m_InvulModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_InvulModifier;
            char m_InvulModifier[0x10]; // 0x17b0            
            float m_flInvulModifierRange; // 0x17c0            
            uint8_t _pad17c4[0x4]; // 0x17c4
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x17c8            
            // m_FriendlyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_FriendlyAuraModifier;
            char m_FriendlyAuraModifier[0x10]; // 0x17d8            
            // m_NearbyEnemyResist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NearbyEnemyResist;
            char m_NearbyEnemyResist[0x10]; // 0x17e8            
            // m_StatTrackerAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_StatTrackerAuraModifier;
            char m_StatTrackerAuraModifier[0x10]; // 0x17f8            
            // metadata: MPropertyStartGroup "Weakpoint"
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::WeakPointParams_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x18]; // 0x1808            
            float m_flWeakPointCritMultiplier; // 0x1820            
            float m_flWeakenedCritMultiplier; // 0x1824            
            float m_flWeakpointAttentionThreshold; // 0x1828            
            float m_flWeakpointAttentionHoldDuration; // 0x182c            
            float m_flWeakpointAttentionDecayRate; // 0x1830            
            float m_flReducedBuildupAfterWeakenedDuration; // 0x1834            
            float m_flReducedBuildupAfterWeakenedFactor; // 0x1838            
            uint8_t _pad183c[0x4]; // 0x183c
            // m_WeakenedBuildupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadel_Modifier_Base_Buildup> m_WeakenedBuildupModifier;
            char m_WeakenedBuildupModifier[0x10]; // 0x1840            
            // m_WeakenedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_WeakenedModifier;
            char m_WeakenedModifier[0x10]; // 0x1850            
            // m_EmpoweredModifierLevel1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_EmpoweredModifierLevel1;
            char m_EmpoweredModifierLevel1[0x10]; // 0x1860            
            // m_EmpoweredModifierLevel2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_EmpoweredModifierLevel2;
            char m_EmpoweredModifierLevel2[0x10]; // 0x1870            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier2VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier2VData) == 0x1880);
    };
};
