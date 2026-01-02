#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_AdditionalMovementSettings.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CFootstepTableHandle.hpp"
#include "source2sdk/client/CSkillFloat.hpp"
#include "source2sdk/client/CSkillInt.hpp"
#include "source2sdk/client/NPCAttachmentDesc_t.hpp"
#include "source2sdk/client/NPCStatusEffectMap_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x3a8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_BaseNPCVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // metadata: MPropertyProvidesEditContextString
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x28            
            // metadata: MPropertyGroupName "Sounds"
            source2sdk::client::CFootstepTableHandle m_hFootstepSounds; // 0x108            
            // metadata: MPropertyFriendlyName "Nav Link Movements"
            // metadata: MPropertyDescription "List of the kind of nav links movement this unit is capable of."
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/navlinks.vdata"
            // m_vecNavLinkMovementNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_vecNavLinkMovementNames;
            char m_vecNavLinkMovementNames[0x18]; // 0x110            
            std::int32_t m_nMaxHealth; // 0x128            
            uint8_t _pad012c[0x4]; // 0x12c
            // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEmbeddedSubclass<source2sdk::server::CCitadelModifier>> m_vecIntrinsicModifiers;
            char m_vecIntrinsicModifiers[0x18]; // 0x130            
            // metadata: MPropertyFriendlyName "Status Effects"
            // metadata: MPropertyDescription "List of the status effects this NPC cares about"
            source2sdk::client::NPCStatusEffectMap_t m_statusEffectMap; // 0x148            
            uint8_t _pad0149[0x7]; // 0x149
            // m_vecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::NPCAttachmentDesc_t> m_vecAttachments;
            char m_vecAttachments[0x18]; // 0x150            
            // metadata: MPropertyStartGroup "Damage"
            source2sdk::client::CSkillFloat m_flHeadDamageMultiplier; // 0x168            
            source2sdk::client::CSkillFloat m_flChestDamageMultiplier; // 0x178            
            source2sdk::client::CSkillFloat m_flStomachDamageMultiplier; // 0x188            
            source2sdk::client::CSkillFloat m_flArmDamageMultiplier; // 0x198            
            source2sdk::client::CSkillFloat m_flLegDamageMultiplier; // 0x1a8            
            source2sdk::client::CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x1b8            
            bool m_bTakesDamage; // 0x1c8            
            uint8_t _pad01c9[0x7]; // 0x1c9
            // metadata: MPropertyDescription "Damaged Effect"
            // m_strDamagedEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strDamagedEffect;
            char m_strDamagedEffect[0xe0]; // 0x1d0            
            // metadata: MPropertyDescription "Amount of health to grant to a ragdoll before the ragdoll is destroyed."
            std::int32_t m_nRagdollHealth; // 0x2b0            
            // metadata: MPropertyDescription "If we take at least this much damage from a vehicle, we'll go into a temp ragdoll state if we're not dead."
            std::int32_t m_nMinVehicleDamageToTempRagdoll; // 0x2b4            
            // metadata: MPropertyDescription "Scale on the energy used to look up into the damage tables for physics impacts (including vehicle impacts)."
            float m_flImpactEnergyScale; // 0x2b8            
            // metadata: MPropertyStartGroup "Navigation"
            bool m_bAllowNonZUpMovement; // 0x2bc            
            // metadata: MPropertyDescription "If true, this NPC will use a dynamic collision hull that allows it to be pushed by heavy things and affected by constraints."
            bool m_bUseDynamicCollisionHull; // 0x2bd            
            // metadata: MPropertyDescription "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
            bool m_bRequestCapsuleCollision; // 0x2be            
            uint8_t _pad02bf[0x1]; // 0x2bf
            // metadata: MPropertyDescription "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
            float m_flCapsuleRadiusOverride; // 0x2c0            
            // metadata: MPropertyDescription "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
            float m_flCapsuleHeightOverride; // 0x2c4            
            // metadata: MPropertyStartGroup "Animation"
            // metadata: MPropertyFriendlyName "Enabled Shared Actions"
            // metadata: MPropertyDescription "List of the shared BaseNPC actions this NPC supports"
            // metadata: MPropertyAttributeEditor "AnimGraphParamEnumValue()"
            // metadata: MPropertyEditContextOverrideValue
            // m_vecActionDesiredShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CGlobalSymbol> m_vecActionDesiredShared;
            char m_vecActionDesiredShared[0x18]; // 0x2c8            
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Player Killed NPC Sound"
            CSoundEventName m_sPlayerKilledNpcSound; // 0x2e0            
            // metadata: MPropertyStartGroup "Death"
            CGlobalSymbol m_sCustomDeathHandshake; // 0x2f0            
            // metadata: MPropertyStartGroup "Movement"
            // metadata: MPropertyDescription "If true, this NPC will use code driven animgraph movement actions such as starts and stops"
            bool m_bEnableCodeDrivenAnimgraphMovement; // 0x2f8            
            // metadata: MPropertyDescription "If true, the NPC will request strafing if it is supported by the animgraph. Can still be overriden by schedules."
            bool m_bEnableAnimgraphTagDrivenStrafing; // 0x2f9            
            uint8_t _pad02fa[0x2]; // 0x2fa
            float m_flMassOverride; // 0x2fc            
            source2sdk::client::AI_AdditionalMovementSettings m_defaultAdditionalMovementSettings; // 0x300            
            float m_flThreatTemperature; // 0x3a0            
            float m_flFlashpoint; // 0x3a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPCVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_BaseNPCVData) == 0x3a8);
    };
};
