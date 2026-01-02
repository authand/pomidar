#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelStatsDisplay_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/client/EHeroType.hpp"
#include "source2sdk/client/EItemSlotTypes_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/HeroAnimGraphDefaultValueOverride_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroLevel_t.hpp"
#include "source2sdk/client/HeroPurchaseBonus_t.hpp"
#include "source2sdk/client/HeroScalingStat_t.hpp"
#include "source2sdk/client/HeroStatsDisplay_t.hpp"
#include "source2sdk/client/HeroStatsUI_t.hpp"
#include "source2sdk/client/ItemSlotInfo_t.hpp"
#include "source2sdk/client/ModCostBonuses_t.hpp"
#include "source2sdk/client/RecommendedUpgradeHints_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCVSoundEventScriptList.hpp"
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
        // Standard-layout class: true
        // Size: 0xf30
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataAssociatedFile
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        struct CitadelHeroData_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_vecAnimGraphDefaultValueOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroAnimGraphDefaultValueOverride_t> m_vecAnimGraphDefaultValueOverrides;
            char m_vecAnimGraphDefaultValueOverrides[0x18]; // 0x8            
            uint8_t _pad0020[0x8]; // 0x20
            source2sdk::client::HeroID_t m_HeroID; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            CUtlString m_strHeroSortName; // 0x30            
            // metadata: MPropertyStartGroup "Screen Space Particle FX"
            // m_hDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDamageTakenParticle;
            char m_hDamageTakenParticle[0xe0]; // 0x38            
            // m_hGroundDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hGroundDamageTakenParticle;
            char m_hGroundDamageTakenParticle[0xe0]; // 0x118            
            // m_hDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDeathParticle;
            char m_hDeathParticle[0xe0]; // 0x1f8            
            // m_hLowHealthParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hLowHealthParticle;
            char m_hLowHealthParticle[0xe0]; // 0x2d8            
            // metadata: MPropertyStartGroup "Visuals"
            CPanoramaImageName m_strSelectionImage; // 0x3b8            
            CPanoramaImageName m_strIconImageSmall; // 0x3c8            
            CPanoramaImageName m_strIconHeroCard; // 0x3d8            
            CPanoramaImageName m_strMinimapImage; // 0x3e8            
            CPanoramaImageName m_strTopBarImage; // 0x3f8            
            CPanoramaImageName m_strTopBarVertical; // 0x408            
            // m_hRespawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hRespawnParticle;
            char m_hRespawnParticle[0xe0]; // 0x418            
            Color m_colorUI; // 0x4f8            
            Color m_colorGlowFriendly; // 0x4fc            
            Color m_colorGlowEnemy; // 0x500            
            Color m_colorGlowTeam1; // 0x504            
            Color m_colorGlowTeam2; // 0x508            
            uint8_t _pad050c[0x4]; // 0x50c
            // m_strModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strModelName;
            char m_strModelName[0xe0]; // 0x510            
            std::int32_t m_nModelSkin; // 0x5f0            
            uint8_t _pad05f4[0x4]; // 0x5f4
            // metadata: MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x5f8            
            // metadata: MPropertyDescription "If specified, this model will be used in main instead of 'Model Name'."
            // m_strMainOnlyModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strMainOnlyModelName;
            char m_strMainOnlyModelName[0xe0]; // 0x6d8            
            // metadata: MPropertyStartGroup "UI"
            std::uint64_t m_iAddedTime; // 0x7b8            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUIPortraitMap; // 0x7c0            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUIShoppingMap; // 0x7c8            
            source2sdk::client::HeroStatsUI_t m_heroStatsUI; // 0x7d0            
            source2sdk::client::HeroStatsDisplay_t m_heroStatsDisplay; // 0x800            
            source2sdk::client::CitadelStatsDisplay_t m_ShopStatDisplay; // 0x890            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDeathSound; // 0x938            
            CSoundEventName m_strLastHitSound; // 0x948            
            CSoundEventName m_strRosterSelectedSound; // 0x958            
            CSoundEventName m_strRosterRemovedSound; // 0x968            
            CSoundEventName m_strVoteRevealSound; // 0x978            
            CSoundEventName m_strLowHealthSound; // 0x988            
            CSoundEventName m_strHeroSpecificLowHealthSound; // 0x998            
            CSoundEventName m_strMovementLoop; // 0x9a8            
            CSoundEventName m_strPostGameVictorySound; // 0x9b8            
            CSoundEventName m_strPostGameDefeatSound; // 0x9c8            
            // metadata: MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
            // m_hGameSoundEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGameSoundEventScript;
            char m_hGameSoundEventScript[0xe0]; // 0x9d8            
            // m_hGeneratedVOEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGeneratedVOEventScript;
            char m_hGeneratedVOEventScript[0xe0]; // 0xab8            
            float m_flStealthSpeedMetersPerSecond; // 0xb98            
            // metadata: MPropertyStartGroup
            float m_flCollisionRadius; // 0xb9c            
            float m_flCollisionHeight; // 0xba0            
            float m_flStepHeight; // 0xba4            
            bool m_bInDevelopment; // 0xba8            
            bool m_bAssignedPlayersOnly; // 0xba9            
            bool m_bNewPlayerRecommended; // 0xbaa            
            bool m_bLaneTestingRecommended; // 0xbab            
            bool m_bNeedsTesting; // 0xbac            
            bool m_bLimitedTesting; // 0xbad            
            bool m_bDisabled; // 0xbae            
            bool m_bPlayerSelectable; // 0xbaf            
            bool m_bPrereleaseOnly; // 0xbb0            
            uint8_t _pad0bb1[0x3]; // 0xbb1
            std::int32_t m_nComplexity; // 0xbb4            
            // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an ally bot. -1 = never."
            // metadata: MPropertyAttributeRange "-1 4"
            std::int32_t m_nAllyBotDifficulty; // 0xbb8            
            // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an enemy bot. -1 = never."
            // metadata: MPropertyAttributeRange "-1 4"
            std::int32_t m_nEnemyBotDifficulty; // 0xbbc            
            // metadata: MPropertyStartGroup "Low Health Settings"
            // metadata: MPropertyDescription "Percentage of health to be considered low health"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMinLowHealthPercentage; // 0xbc0            
            // metadata: MPropertyDescription "Percentage of health to be considered low health when you have high max health."
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMaxLowHealthPercentage; // 0xbc4            
            // metadata: MPropertyDescription "Percentage of health to be considered mid health"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMinMidHealthPercentage; // 0xbc8            
            // metadata: MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMaxMidHealthPercentage; // 0xbcc            
            // metadata: MPropertyDescription "Min Max Health for Remapped Value"
            float m_flMinHealthForThreshold; // 0xbd0            
            // metadata: MPropertyDescription "Max Max Health for remapped value"
            float m_flMaxHealthForThreshold; // 0xbd4            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a player"
            float m_flInCombatWithHeroDuration; // 0xbd8            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a non-player"
            float m_flInCombatWithNonHeroDuration; // 0xbdc            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a neutral trooper"
            float m_flInCombatWithNeutralDuration; // 0xbe0            
            uint8_t _pad0be4[0x4]; // 0xbe4
            // metadata: MPropertyStartGroup
            // m_mapStartingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,float> m_mapStartingStats;
            char m_mapStartingStats[0x28]; // 0xbe8            
            // m_mapScalingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,source2sdk::client::HeroScalingStat_t> m_mapScalingStats;
            char m_mapScalingStats[0x28]; // 0xc10            
            CPiecewiseCurve m_groundDashPositionCurve; // 0xc38            
            // m_mapModCostBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,CUtlVector<source2sdk::client::ModCostBonuses_t>> m_mapModCostBonuses;
            char m_mapModCostBonuses[0x28]; // 0xc78            
            uint8_t _pad0ca0[0x18]; // 0xca0
            // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
            char m_mapBoundAbilities[0x28]; // 0xcb8            
            // m_mapWIPAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapWIPAbilities;
            char m_mapWIPAbilities[0x28]; // 0xce0            
            // m_mapItemSlotInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,source2sdk::client::ItemSlotInfo_t> m_mapItemSlotInfo;
            char m_mapItemSlotInfo[0x28]; // 0xd08            
            // m_mapRecommendedUpgradeHints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::RecommendedUpgradeHints_t> m_mapRecommendedUpgradeHints;
            char m_mapRecommendedUpgradeHints[0x28]; // 0xd30            
            uint8_t _pad0d58[0x28]; // 0xd58
            // m_RecommendedUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_RecommendedUpgrades;
            char m_RecommendedUpgrades[0x18]; // 0xd80            
            uint8_t _pad0d98[0x18]; // 0xd98
            // m_RecommendedUpgradeTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_RecommendedUpgradeTags;
            char m_RecommendedUpgradeTags[0x18]; // 0xdb0            
            uint8_t _pad0dc8[0x68]; // 0xdc8
            // m_RecommendedAbilityOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_RecommendedAbilityOrder;
            char m_RecommendedAbilityOrder[0x18]; // 0xe30            
            uint8_t _pad0e48[0x18]; // 0xe48
            source2sdk::client::EAbilityResourceType m_eAbilityResourceType; // 0xe60            
            uint8_t _pad0e64[0x4]; // 0xe64
            CUtlString m_strGunTag; // 0xe68            
            // m_vecHeroTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecHeroTags;
            char m_vecHeroTags[0x18]; // 0xe70            
            source2sdk::client::EHeroType m_eHeroType; // 0xe88            
            uint8_t _pad0e8c[0x4]; // 0xe8c
            CUtlString m_strRosterBackgroundLayout; // 0xe90            
            CUtlString m_strHideoutRichPresence; // 0xe98            
            uint8_t _pad0ea0[0x18]; // 0xea0
            // m_mapStandardLevelUpUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EModifierValue,float> m_mapStandardLevelUpUpgrades;
            char m_mapStandardLevelUpUpgrades[0x28]; // 0xeb8            
            // m_mapLevelInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<std::int32_t,source2sdk::client::HeroLevel_t> m_mapLevelInfo;
            char m_mapLevelInfo[0x28]; // 0xee0            
            // m_mapPurchaseBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,CUtlVector<source2sdk::client::HeroPurchaseBonus_t>> m_mapPurchaseBonuses;
            char m_mapPurchaseBonuses[0x28]; // 0xf08            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_vecAnimGraphDefaultValueOverrides) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_HeroID) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHeroSortName) == 0x30);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hDamageTakenParticle) == 0x38);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGroundDamageTakenParticle) == 0x118);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hDeathParticle) == 0x1f8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hLowHealthParticle) == 0x2d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strSelectionImage) == 0x3b8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconImageSmall) == 0x3c8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconHeroCard) == 0x3d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMinimapImage) == 0x3e8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strTopBarImage) == 0x3f8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strTopBarVertical) == 0x408);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hRespawnParticle) == 0x418);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorUI) == 0x4f8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowFriendly) == 0x4fc);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowEnemy) == 0x500);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowTeam1) == 0x504);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorGlowTeam2) == 0x508);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strModelName) == 0x510);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nModelSkin) == 0x5f0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strWIPModelName) == 0x5f8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMainOnlyModelName) == 0x6d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_iAddedTime) == 0x7b8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUIPortraitMap) == 0x7c0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUIShoppingMap) == 0x7c8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_heroStatsUI) == 0x7d0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_heroStatsDisplay) == 0x800);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_ShopStatDisplay) == 0x890);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strDeathSound) == 0x938);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLastHitSound) == 0x948);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterSelectedSound) == 0x958);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterRemovedSound) == 0x968);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strVoteRevealSound) == 0x978);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLowHealthSound) == 0x988);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHeroSpecificLowHealthSound) == 0x998);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMovementLoop) == 0x9a8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strPostGameVictorySound) == 0x9b8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strPostGameDefeatSound) == 0x9c8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGameSoundEventScript) == 0x9d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGeneratedVOEventScript) == 0xab8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flStealthSpeedMetersPerSecond) == 0xb98);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flCollisionRadius) == 0xb9c);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flCollisionHeight) == 0xba0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flStepHeight) == 0xba4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bInDevelopment) == 0xba8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bAssignedPlayersOnly) == 0xba9);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bNewPlayerRecommended) == 0xbaa);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bLaneTestingRecommended) == 0xbab);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bNeedsTesting) == 0xbac);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bLimitedTesting) == 0xbad);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bDisabled) == 0xbae);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bPlayerSelectable) == 0xbaf);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bPrereleaseOnly) == 0xbb0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nComplexity) == 0xbb4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nAllyBotDifficulty) == 0xbb8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nEnemyBotDifficulty) == 0xbbc);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinLowHealthPercentage) == 0xbc0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxLowHealthPercentage) == 0xbc4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinMidHealthPercentage) == 0xbc8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxMidHealthPercentage) == 0xbcc);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinHealthForThreshold) == 0xbd0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxHealthForThreshold) == 0xbd4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithHeroDuration) == 0xbd8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithNonHeroDuration) == 0xbdc);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithNeutralDuration) == 0xbe0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapStartingStats) == 0xbe8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapScalingStats) == 0xc10);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_groundDashPositionCurve) == 0xc38);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapModCostBonuses) == 0xc78);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapBoundAbilities) == 0xcb8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapWIPAbilities) == 0xce0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapItemSlotInfo) == 0xd08);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapRecommendedUpgradeHints) == 0xd30);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_RecommendedUpgrades) == 0xd80);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_RecommendedUpgradeTags) == 0xdb0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_RecommendedAbilityOrder) == 0xe30);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_eAbilityResourceType) == 0xe60);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strGunTag) == 0xe68);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_vecHeroTags) == 0xe70);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_eHeroType) == 0xe88);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterBackgroundLayout) == 0xe90);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHideoutRichPresence) == 0xe98);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapStandardLevelUpUpgrades) == 0xeb8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapLevelInfo) == 0xee0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapPurchaseBonuses) == 0xf08);
        
        static_assert(sizeof(source2sdk::client::CitadelHeroData_t) == 0xf30);
    };
};
