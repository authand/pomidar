#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/ECitadelPingLocation_t.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/client/HeroBuildID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelHeroComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/server/CCitadelRecentDamage.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerBot;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2068
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkUserGroupProxy "CCitadelPlayerPawn"
        // static metadata: MNetworkUserGroupProxy "CCitadelPlayerPawn"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarNames "QAngle m_angClientCamera"
        // static metadata: MNetworkVarNames "QAngle m_angEyeAngles"
        // static metadata: MNetworkVarNames "QAngle m_angLockedEyeAngles"
        // static metadata: MNetworkVarNames "int32 m_nLevel"
        // static metadata: MNetworkVarNames "int32 m_nCurrencies"
        // static metadata: MNetworkVarNames "int32 m_nSpentCurrencies"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastSpawnTime"
        // static metadata: MNetworkVarNames "bool m_bInRegenerationZone"
        // static metadata: MNetworkVarNames "bool m_bInItemShopZone"
        // static metadata: MNetworkVarNames "bool m_bInHideoutZone"
        // static metadata: MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
        // static metadata: MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuyQueue"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuySellQueue"
        // static metadata: MNetworkVarNames "bool m_bQuickbuyAutoPurchase"
        // static metadata: MNetworkVarNames "AbilityID_t m_unQuickbuyAutoPurchaseRequest"
        // static metadata: MNetworkVarNames "bool m_bQuickbuyAutoQueueBuild"
        // static metadata: MNetworkVarNames "bool m_bHasQuickbuyBeenUsed"
        // static metadata: MNetworkVarNames "HeroBuildID_t m_unHeroBuildID"
        // static metadata: MNetworkVarNames "CUtlString m_sHeroBuildSerialized"
        // static metadata: MNetworkVarNames "bool m_bNetworkDisconnected"
        // static metadata: MNetworkVarNames "bool m_bHasIncomingThreats"
        // static metadata: MNetworkVarNames "bool m_bLearningAbility"
        // static metadata: MNetworkVarNames "int m_nFlashStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashMaxStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashFadeStartTick"
        // static metadata: MNetworkVarNames "int m_nFlashEndTick"
        // static metadata: MNetworkVarNames "int8 m_nFlashMaxAlpha"
        // static metadata: MNetworkVarNames "int32 m_nDeducedLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hEnemyPlayerAimTarget"
        // static metadata: MNetworkVarNames "bool m_bDismissedReportCard"
        // static metadata: MNetworkVarNames "float m_flCurrentHealingAmount"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
        // static metadata: MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sInCombat"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageTaken"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageDealt"
        // static metadata: MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
        // static metadata: MNetworkVarNames "int8 m_nSuccessiveDucks"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDuckTime"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementClipped"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
        // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
        // static metadata: MNetworkVarNames "float32 m_flPredSlowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
        // static metadata: MNetworkVarNames "float32 m_flSlowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flForceInCombatAnimsUntilTime"
        // static metadata: MNetworkVarNames "uint8 m_nAudioEnclosure"
        // static metadata: MNetworkVarNames "bool m_bAudioHasSkyExposure"
        #pragma pack(push, 1)
        class CCitadelPlayerPawn : public source2sdk::server::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad0dd8[0x78]; // 0xdd8
            std::int32_t m_arrGoldSources[41]; // 0xe50            
            uint8_t _pad0ef4[0x2c]; // 0xef4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "SourceTVExclusive"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angClientCamera; // 0xf20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0xf2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            QAngle m_angLockedEyeAngles; // 0xf38            
            // metadata: MNetworkEnable
            std::int32_t m_nLevel; // 0xf44            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrencies[4]; // 0xf48            
            // metadata: MNetworkEnable
            std::int32_t m_nSpentCurrencies[4]; // 0xf58            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0xf68            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0xf6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            bool m_bInRegenerationZone; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInItemShopZone; // 0xf71            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInHideoutZone; // 0xf72            
            uint8_t _pad0f73[0x1]; // 0xf73
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xf74            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0xf78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x60]; // 0xf90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            // m_vecQuickbuyQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuyQueue;
            char m_vecQuickbuyQueue[0x18]; // 0xff0            
            uint8_t _pad1008[0x18]; // 0x1008
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            // m_vecQuickbuySellQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuySellQueue;
            char m_vecQuickbuySellQueue[0x18]; // 0x1020            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            bool m_bQuickbuyAutoPurchase; // 0x1038            
            uint8_t _pad1039[0x3]; // 0x1039
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // 0x103c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            bool m_bQuickbuyAutoQueueBuild; // 0x1040            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bHasQuickbuyBeenUsed; // 0x1041            
            uint8_t _pad1042[0x2e]; // 0x1042
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            source2sdk::client::HeroBuildID_t m_unHeroBuildID; // 0x1070            
            uint8_t _pad1074[0x4]; // 0x1074
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            CUtlString m_sHeroBuildSerialized; // 0x1078            
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0x1080            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bHasIncomingThreats; // 0x1081            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bLearningAbility; // 0x1082            
            uint8_t _pad1083[0x1]; // 0x1083
            // metadata: MNetworkEnable
            std::int32_t m_nFlashStartTick; // 0x1084            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0x1088            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0x108c            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0x1090            
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0x1094            
            uint8_t _pad1095[0x3]; // 0x1095
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0x1098            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            // metadata: MNetworkPriority "32"
            // m_hEnemyPlayerAimTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemyPlayerAimTarget;
            char m_hEnemyPlayerAimTarget[0x4]; // 0x109c            
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0x10a0            
            uint8_t _pad10a1[0x3]; // 0x10a1
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0x10a4            
            // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
            char m_hAbilityRequiresDebounce[0x4]; // 0x10a8            
            uint8_t _pad10ac[0x4]; // 0x10ac
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            // metadata: MNetworkPriority "32"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x10b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x12f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelRegenComponent"
            // metadata: MNetworkAlias "CCitadelRegenComponent"
            // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
            source2sdk::server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1330            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1490            
            bool m_bHasShopOpen; // 0x14a8            
            uint8_t _pad14a9[0x3]; // 0x14a9
            source2sdk::client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x14ac            
            uint8_t _pad14b0[0x6c0]; // 0x14b0
            float m_flLastRegenThinkTime; // 0x1b70            
            float m_flCitadelDamageAccumulator; // 0x1b74            
            uint8_t _pad1b78[0x38]; // 0x1b78
            std::int32_t m_nBulletsFiredAtUs; // 0x1bb0            
            std::int32_t m_nBulletsHitOnUs; // 0x1bb4            
            std::int32_t m_nHeadshotsOnUs; // 0x1bb8            
            source2sdk::entity2::GameTime_t m_flLastGameStatsRecorded; // 0x1bbc            
            float m_flUnusedGoldRemainder; // 0x1bc0            
            float m_flUnusedAbilityRemainder; // 0x1bc4            
            std::int32_t m_nBulletsFiredAtEnemyHeroes; // 0x1bc8            
            std::int32_t m_nBulletsHitOnEnemyHeroes; // 0x1bcc            
            std::int32_t m_nHeadshotsOnEnemyHeroes; // 0x1bd0            
            std::int32_t m_nLuckyShotsOnEnemyHeroes; // 0x1bd4            
            std::int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x1bd8            
            std::int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x1bdc            
            // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
            char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1be0            
            bool m_bHasOverrideSpawnPos; // 0x1be4            
            uint8_t _pad1be5[0x3]; // 0x1be5
            Vector m_vecOverrideSpawnPos; // 0x1be8            
            std::int32_t m_iKillStreak; // 0x1bf4            
            std::int32_t m_iTrooperWaveEventCount; // 0x1bf8            
            std::int32_t m_iTrooperWaveNumber; // 0x1bfc            
            std::int32_t m_iPrevTrooperWaveEventCount; // 0x1c00            
            std::int32_t m_iPrevTrooperWaveNumber; // 0x1c04            
            bool m_bHasStartedPlaying; // 0x1c08            
            uint8_t _pad1c09[0x3]; // 0x1c09
            // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRevengeTarget;
            char m_hRevengeTarget[0x4]; // 0x1c0c            
            uint8_t _pad1c10[0xc]; // 0x1c10
            source2sdk::entity2::GameTime_t m_flLastHurtTimeByEnemyHero; // 0x1c1c            
            source2sdk::entity2::GameTime_t m_flLastHurtByNeutral; // 0x1c20            
            source2sdk::entity2::GameTime_t m_flLastHurtByEnemyNPC; // 0x1c24            
            source2sdk::entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1c28            
            uint8_t _pad1c2c[0x4]; // 0x1c2c
            source2sdk::client::CTakeDamageResult m_ragdollDamage; // 0x1c30            
            // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecThreats;
            char m_vecThreats[0x18]; // 0x1c50            
            uint8_t _pad1c68[0xa0]; // 0x1c68
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sInCombat; // 0x1d08            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sPlayerDamageTaken; // 0x1d20            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelRecentDamage m_sPlayerDamageDealt; // 0x1d38            
            uint8_t _pad1d50[0xbc]; // 0x1d50
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::CMsgLaneColor m_eZipLineLaneColor; // 0x1e0c            
            bool m_bCanBecomeRagdoll; // 0x1e10            
            uint8_t _pad1e11[0x3]; // 0x1e11
            float m_blindUntilTime; // 0x1e14            
            float m_blindStartTime; // 0x1e18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int8_t m_nSuccessiveDucks; // 0x1e1c            
            uint8_t _pad1e1d[0x3]; // 0x1e1d
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x1e20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementClipped; // 0x1e24            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementDisableGravity; // 0x1e25            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bAnimGraphMovementDirectAirControl; // 0x1e26            
            uint8_t _pad1e27[0x1]; // 0x1e27
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1e28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1e2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flPredSlowSpeed; // 0x1e30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x1e34            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1e44            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flSlowSpeed[4]; // 0x1e54            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flForceInCombatAnimsUntilTime; // 0x1e64            
            bool m_bPreventAbilityLearning; // 0x1e68            
            uint8_t _pad1e69[0x3]; // 0x1e69
            std::int32_t m_iCurSlowSlot; // 0x1e6c            
            uint8_t _pad1e70[0x4]; // 0x1e70
            source2sdk::client::ParticleIndex_t m_nRespawnParticleIndex; // 0x1e74            
            source2sdk::client::ParticleIndex_t m_nShoppingParticle; // 0x1e78            
            uint8_t _pad1e7c[0x2c]; // 0x1e7c
            source2sdk::server::CCitadelPlayerBot* m_pBot; // 0x1ea8            
            uint8_t _pad1eb0[0x140]; // 0x1eb0
            bool m_bLocoLeanTriggeredForDirection; // 0x1ff0            
            bool m_bLocoRunToStopCanTrigger; // 0x1ff1            
            uint8_t _pad1ff2[0x2]; // 0x1ff2
            float m_flCrouchFraction; // 0x1ff4            
            float m_flCrouchSpeed; // 0x1ff8            
            source2sdk::entity2::GameTime_t m_fidgetTime; // 0x1ffc            
            Vector m_vShootTestOffsetStanding; // 0x2000            
            Vector m_vShootTestOffsetCrouching; // 0x200c            
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x2018            
            source2sdk::entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x201c            
            uint8_t _pad2020[0x40]; // 0x2020
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            std::uint8_t m_nAudioEnclosure; // 0x2060            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "RemotePlayersOnly"
            bool m_bAudioHasSkyExposure; // 0x2061            
            uint8_t _pad2062[0x6];
            
            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xc48
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xc50
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerPawn) == 0x2068);
    };
};
