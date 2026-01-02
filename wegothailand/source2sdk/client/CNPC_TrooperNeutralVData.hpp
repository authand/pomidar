#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ENeutralFlyingWeakPointType.hpp"
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/MoveType_t.hpp"
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
        // Size: 0x1550
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperNeutralVData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            source2sdk::client::ENeutralTrooperType m_eTrooperType; // 0x11d8            
            float m_flGoldReward; // 0x11dc            
            float m_flGoldRewardBonusPercentPerMinute; // 0x11e0            
            bool m_bCapSimultanousAttackers; // 0x11e4            
            uint8_t _pad11e5[0x3]; // 0x11e5
            float m_flShieldReactivateDelay; // 0x11e8            
            float m_flDyingDuration; // 0x11ec            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyFriendlyName "Damaged by Bullets?"
            bool m_bDamagedByBullets; // 0x11f0            
            // metadata: MPropertyFriendlyName "Damaged by Melee?"
            bool m_bDamagedByMelee; // 0x11f1            
            // metadata: MPropertyFriendlyName "Damaged by Abilities?"
            bool m_bDamagedByAbilities; // 0x11f2            
            uint8_t _pad11f3[0x5]; // 0x11f3
            // metadata: MPropertyStartGroup "Shield FX"
            // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
            char m_ShieldParticle[0xe0]; // 0x11f8            
            // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
            // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
            char m_retaliateParticle[0xe0]; // 0x12d8            
            // metadata: MPropertyStartGroup "AOE Attack"
            bool m_bHasAOEAttack; // 0x13b8            
            uint8_t _pad13b9[0x3]; // 0x13b9
            float m_flAOERadius; // 0x13bc            
            float m_flAOEDamage; // 0x13c0            
            float m_flAOEAttackCooldown; // 0x13c4            
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x13c8            
            // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AOEDebuffToApply;
            char m_AOEDebuffToApply[0x10]; // 0x14a8            
            CSoundEventName m_AOEInitiateSound; // 0x14b8            
            CSoundEventName m_AOESound; // 0x14c8            
            float m_AOEDebuffDuration; // 0x14d8            
            uint8_t _pad14dc[0x4]; // 0x14dc
            // metadata: MPropertyStartGroup "Body"
            // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomBodyGroup;
            char m_vecRandomBodyGroup[0x18]; // 0x14e0            
            // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomSkin;
            char m_vecRandomSkin[0x18]; // 0x14f8            
            // metadata: MPropertyStartGroup "Visuals"
            float m_flHullCapsuleRadius; // 0x1510            
            float m_flHullCapsuleHeight; // 0x1514            
            // metadata: MPropertyStartGroup "Idles"
            bool m_bFaceEnemyWhileIdle; // 0x1518            
            uint8_t _pad1519[0x7]; // 0x1519
            CSoundEventName m_IdleLoopSound; // 0x1520            
            // metadata: MPropertyStartGroup "Movement"
            source2sdk::client::MoveType_t m_MoveType; // 0x1530            
            uint8_t _pad1531[0x3]; // 0x1531
            // metadata: MPropertyStartGroup "WeakPoints"
            std::int32_t m_iWeakPointCount; // 0x1534            
            source2sdk::client::ENeutralFlyingWeakPointType m_iWeakPointType; // 0x1538            
            uint8_t _pad1539[0x3]; // 0x1539
            float m_flWeakPointRespawnAtHealthPct; // 0x153c            
            // m_NeutralDamageGrowth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NeutralDamageGrowth;
            char m_NeutralDamageGrowth[0x10]; // 0x1540            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_TrooperNeutralVData) == 0x1550);
    };
};
