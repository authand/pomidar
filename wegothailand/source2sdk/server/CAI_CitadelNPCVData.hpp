#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_BaseNPCVData.hpp"

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
        // Size: 0x11d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CAI_CitadelNPCVData : public source2sdk::server::CAI_BaseNPCVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_sAG2VariationName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition>> m_sAG2VariationName;
            char m_sAG2VariationName[0xe0]; // 0x3a8            
            // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
            char m_mapBoundAbilities[0x28]; // 0x488            
            float m_flSightRangePlayers; // 0x4b0            
            float m_flSightRangeNPCs; // 0x4b4            
            CGlobalSymbol m_MeleeAnimName; // 0x4b8            
            float m_flMeleeAttemptRange; // 0x4c0            
            float m_flMeleeHitRange; // 0x4c4            
            // m_MeleeAttackPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_MeleeAttackPoints;
            char m_MeleeAttackPoints[0x18]; // 0x4c8            
            float m_flMaxHealthBarDrawDistance; // 0x4e0            
            // metadata: MPropertyStartGroup "Movement"
            float m_flWalkSpeed; // 0x4e4            
            float m_flRunSpeed; // 0x4e8            
            float m_flTurnRate; // 0x4ec            
            float m_flAcceleration; // 0x4f0            
            float m_flStepHeight; // 0x4f4            
            std::int8_t m_navHull; // 0x4f8            
            uint8_t _pad04f9[0x7]; // 0x4f9
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_BeamStartSound; // 0x500            
            CSoundEventName m_BeamStopSound; // 0x510            
            CSoundEventName m_BeamPointStartLoopSound; // 0x520            
            CSoundEventName m_BeamPointEndLoopSound; // 0x530            
            CSoundEventName m_BeamPointClosestLoopSound; // 0x540            
            CSoundEventName m_strAmbientLoopSound; // 0x550            
            CSoundEventName m_DeathSound; // 0x560            
            CSoundEventName m_strLastHitSound; // 0x570            
            bool m_bPlayLastHitSound; // 0x580            
            uint8_t _pad0581[0x7]; // 0x581
            CSoundEventName m_MeleeHitSound; // 0x588            
            CSoundEventName m_MeleeHitPlayerSound; // 0x598            
            // metadata: MPropertyStartGroup "Visuals"
            CModelMaterialGroupName m_sDefaultMaterialGroupName; // 0x5a8            
            CModelMaterialGroupName m_sEnemyMaterialGroupName; // 0x5b0            
            CModelMaterialGroupName m_sTeam1MaterialGroupName; // 0x5b8            
            CModelMaterialGroupName m_sTeam2MaterialGroupName; // 0x5c0            
            // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
            char m_MeleeSwingParticle[0xe0]; // 0x5c8            
            // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
            char m_MeleeActivateParticle[0xe0]; // 0x6a8            
            float m_flModelScale; // 0x788            
            uint8_t _pad078c[0x4]; // 0x78c
            // metadata: MPropertyDescription "Particle to play instead of doing a ragdoll"
            // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
            char m_DeathParticle[0xe0]; // 0x790            
            Color m_GlowColorFriend; // 0x870            
            Color m_GlowColorEnemy; // 0x874            
            Color m_GlowColorTeam1; // 0x878            
            Color m_GlowColorTeam2; // 0x87c            
            Color m_GlowColorTeamNeutral; // 0x880            
            uint8_t _pad0884[0x4]; // 0x884
            // metadata: MPropertyStartGroup "Health Bar"
            // m_HealthBarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle;
            char m_HealthBarParticle[0xe0]; // 0x888            
            CUtlString m_sHealthBarAttachment; // 0x968            
            Color m_HealthBarColorFriend; // 0x970            
            Color m_HealthBarColorEnemy; // 0x974            
            Color m_HealthBarColorTeam1; // 0x978            
            Color m_HealthBarColorTeam2; // 0x97c            
            Color m_HealthBarColorTeamNeutral; // 0x980            
            // metadata: MPropertyStartGroup "Misc"
            float m_flHealthBarOffset; // 0x984            
            // metadata: MPropertyDescription "When true, spawns breakables defined in the model"
            bool m_bSpawnBreakablesOnDeath; // 0x988            
            uint8_t _pad0989[0x3]; // 0x989
            // metadata: MPropertySuppressExpr "m_bSpawnBreakablesOnDeath == false"
            float m_flBreakableForceScale; // 0x98c            
            // metadata: MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
            float m_flPhysicsImpulseMultiplier; // 0x990            
            // metadata: MPropertyStartGroup "Beam Weapon"
            float m_flBeamWeaponWidth; // 0x994            
            float m_flBeamTurnRate; // 0x998            
            uint8_t _pad099c[0x4]; // 0x99c
            // m_BeamWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle;
            char m_BeamWeaponParticle[0xe0]; // 0x9a0            
            source2sdk::client::CCitadelWeaponInfo m_WeaponInfo; // 0xa80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelNPCVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelNPCVData) == 0x11d8);
    };
};
