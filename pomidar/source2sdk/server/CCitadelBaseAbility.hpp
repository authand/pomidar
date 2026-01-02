#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EAbilityBucketType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelStolenAbilitySlot_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xba0
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkIncludeByName "m_flTimeScale"
        // static metadata: MNetworkExcludeByName "m_angRotation"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByName "m_cellX"
        // static metadata: MNetworkExcludeByName "m_cellY"
        // static metadata: MNetworkExcludeByName "m_cellZ"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_nForceBone"
        // static metadata: MNetworkExcludeByName "m_nHitboxSet"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_vecForce"
        // static metadata: MNetworkExcludeByName "m_vecMaxs"
        // static metadata: MNetworkExcludeByName "m_vecMins"
        // static metadata: MNetworkExcludeByName "m_vecOrigin"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
        // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
        // static metadata: MNetworkExcludeByName "m_MoveCollide"
        // static metadata: MNetworkExcludeByName "m_MoveType"
        // static metadata: MNetworkExcludeByName "m_Gender"
        // static metadata: MNetworkExcludeByName "m_flElasticity"
        // static metadata: MNetworkExcludeByName "m_nMinCPULevel"
        // static metadata: MNetworkExcludeByName "m_nMinGPULevel"
        // static metadata: MNetworkExcludeByName "m_nMaxCPULevel"
        // static metadata: MNetworkExcludeByName "m_nMaxGPULevel"
        // static metadata: MNetworkExcludeByName "m_flNavIgnoreUntilTime"
        // static metadata: MNetworkExcludeByName "m_ubInterpolationFrame"
        // static metadata: MNetworkExcludeByName "m_flScale"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkUserGroupProxy "CCitadelBaseAbility"
        // static metadata: MNetworkUserGroupProxy "CCitadelBaseAbility"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkVarNames "bool m_bChanneling"
        // static metadata: MNetworkVarNames "bool m_bInCastDelay"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
        // static metadata: MNetworkVarNames "bool m_bCanBeUpgraded"
        // static metadata: MNetworkVarNames "CitadelStolenAbilitySlot_t m_eStolenInSlot"
        // static metadata: MNetworkVarNames "int m_nUpgradeBits"
        // static metadata: MNetworkVarNames "EAbilityBucketType m_iBucketID"
        // static metadata: MNetworkVarNames "bool m_bToggleState"
        // static metadata: MNetworkVarNames "GameTime_t m_flCooldownStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flCooldownEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_flCastCompletedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flChannelStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
        // static metadata: MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
        // static metadata: MNetworkVarNames "GameTime_t m_flPostCastDelayEndTime"
        // static metadata: MNetworkVarNames "int m_iRemainingCharges"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAltCastDoubleTapStartTime"
        // static metadata: MNetworkVarNames "bool m_bCanBeImbued"
        // static metadata: MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
        // static metadata: MNetworkVarNames "bool m_bSelectionModeIsAltMode"
        #pragma pack(push, 1)
        class CCitadelBaseAbility : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04f0[0xd8]; // 0x4f0
            // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CModifierHandleTyped<source2sdk::server::CCitadelModifier>> m_vecIntrinsicModifiers;
            char m_vecIntrinsicModifiers[0x18]; // 0x5c8            
            // m_pCastDelayAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_pCastDelayAutoModifier;
            char m_pCastDelayAutoModifier[0x18]; // 0x5e0            
            // m_pChannelAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_pChannelAutoModifier;
            char m_pChannelAutoModifier[0x18]; // 0x5f8            
            CGlobalSymbol m_strUsedCastGraphParam; // 0x610            
            std::int32_t m_nCastParamNeedsResetTick; // 0x618            
            uint8_t _pad061c[0x4]; // 0x61c
            bool m_bIsCoolingDownInternal; // 0x620            
            uint8_t _pad0621[0x3]; // 0x621
            source2sdk::entity2::GameTime_t m_flCancelMashProtectionEndTime; // 0x624            
            source2sdk::entity2::GameTime_t m_flCancelLockoutEndTime; // 0x628            
            uint8_t _pad062c[0x1c]; // 0x62c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChannelingChanged"
            bool m_bChanneling; // 0x648            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnInCastDelayChanged"
            bool m_bInCastDelay; // 0x649            
            uint8_t _pad064a[0x6]; // 0x64a
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilityImbuedChanged"
            // m_vecImbuedByAbilitiyIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecImbuedByAbilitiyIDs;
            char m_vecImbuedByAbilitiyIDs[0x18]; // 0x650            
            // m_hSupportedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hSupportedAbility;
            char m_hSupportedAbility[0x4]; // 0x668            
            // metadata: MNetworkEnable
            bool m_bCanBeUpgraded; // 0x66c            
            uint8_t _pad066d[0x3]; // 0x66d
            // metadata: MNetworkEnable
            source2sdk::server::CitadelStolenAbilitySlot_t m_eStolenInSlot; // 0x670            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnUpgradeBitsChanged"
            // metadata: MNetworkPriority "32"
            std::int32_t m_nUpgradeBits; // 0x680            
            // metadata: MNetworkEnable
            source2sdk::client::EAbilityBucketType m_iBucketID; // 0x684            
            // metadata: MNetworkEnable
            bool m_bToggleState; // 0x688            
            uint8_t _pad0689[0x3]; // 0x689
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flCooldownStart; // 0x68c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "OnAbilityCooldownEndChanged"
            source2sdk::entity2::GameTime_t m_flCooldownEnd; // 0x690            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastCompletedTime; // 0x694            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flChannelStartTime; // 0x698            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCastDelayStartTime; // 0x69c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnAbilitySlotChanged"
            source2sdk::client::EAbilitySlots_t m_eAbilitySlot; // 0x6a0            
            uint8_t _pad06a2[0x2]; // 0x6a2
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flPostCastDelayEndTime; // 0x6a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iRemainingCharges; // 0x6a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flChargeRechargeStart; // 0x6ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flChargeRechargeEnd; // 0x6b0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flMovementControlActiveTime; // 0x6b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSelectedChangedTime; // 0x6b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAltCastHoldStartTime; // 0x6bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAltCastDoubleTapStartTime; // 0x6c0            
            // metadata: MNetworkEnable
            bool m_bCanBeImbued; // 0x6c4            
            uint8_t _pad06c5[0x3]; // 0x6c5
            // metadata: MNetworkEnable
            CUtlStringToken m_nImbuedAbilityID; // 0x6c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSelectionModeIsAltMode; // 0x6cc            
            uint8_t _pad06cd[0x3]; // 0x6cd
            // m_vecEnemyHeroesDamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEnemyHeroesDamaged;
            char m_vecEnemyHeroesDamaged[0x18]; // 0x6d0            
            float m_flPreviousEffectiveCooldown; // 0x6e8            
            uint8_t _pad06ec[0x4b4];
            
            // Datamap fields:
            // int32_t slot; // 0x7fffffff
            // int32_t bucket_id; // 0x7fffffff
            // float time_scale; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBaseAbility) == 0xba0);
    };
};
