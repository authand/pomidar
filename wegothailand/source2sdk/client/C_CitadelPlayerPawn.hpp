#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/CCitadelHeroComponent.hpp"
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/client/CCitadelRecentDamage.hpp"
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/client/HeroBuildID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1910
        // Has VTable
        // 
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
        // static metadata: MNetworkVarNames "int32 m_nLevel"
        // static metadata: MNetworkVarNames "int32 m_nCurrencies"
        // static metadata: MNetworkVarNames "int32 m_nSpentCurrencies"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastSpawnTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
        // static metadata: MNetworkVarNames "bool m_bInRegenerationZone"
        // static metadata: MNetworkVarNames "bool m_bInItemShopZone"
        // static metadata: MNetworkVarNames "bool m_bInHideoutZone"
        // static metadata: MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
        // static metadata: MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuyQueue"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecQuickbuySellQueue"
        // static metadata: MNetworkVarNames "AbilityID_t m_unQuickbuyAutoPurchaseRequest"
        // static metadata: MNetworkVarNames "bool m_bQuickbuyAutoPurchase"
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
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sInCombat"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageTaken"
        // static metadata: MNetworkVarNames "CCitadelRecentDamage m_sPlayerDamageDealt"
        // static metadata: MNetworkVarNames "int8 m_nSuccessiveDucks"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDuckTime"
        // static metadata: MNetworkVarNames "bool m_bDismissedReportCard"
        // static metadata: MNetworkVarNames "float m_flCurrentHealingAmount"
        // static metadata: MNetworkVarNames "QAngle m_angLockedEyeAngles"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
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
        class C_CitadelPlayerPawn : public source2sdk::client::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad1120[0xf0]; // 0x1120
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkChangeCallback "angEyeAnglesChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0x1210            
            uint8_t _pad121c[0x84]; // 0x121c
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkChangeCallback "angClientCameraChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angClientCamera; // 0x12a0            
            uint8_t _pad12ac[0x84]; // 0x12ac
            // metadata: MNetworkEnable
            source2sdk::client::CMsgLaneColor m_eZipLineLaneColor; // 0x1330            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "LevelChanged"
            std::int32_t m_nLevel; // 0x1334            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "CurrenciesChanged"
            std::int32_t m_nCurrencies[4]; // 0x1338            
            // metadata: MNetworkEnable
            std::int32_t m_nSpentCurrencies[4]; // 0x1348            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0x1358            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RespawnTimeChanged"
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x135c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InRegenZoneChanged"
            bool m_bInRegenerationZone; // 0x1360            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
            bool m_bInItemShopZone; // 0x1361            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "InHideoutZoneChanged"
            bool m_bInHideoutZone; // 0x1362            
            uint8_t _pad1363[0x1]; // 0x1363
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0x1364            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
            // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
            char m_vecFullSellPriceItems[0x18]; // 0x1368            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
            // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
            char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0x1380            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyChanged"
            // m_vecQuickbuyQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuyQueue;
            char m_vecQuickbuyQueue[0x18]; // 0x1398            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "QuickbuyChanged"
            // m_vecQuickbuySellQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlStringToken> m_vecQuickbuySellQueue;
            char m_vecQuickbuySellQueue[0x18]; // 0x13b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerAndObsersExclusive"
            // metadata: MNetworkChangeCallback "QuickbuyPurchaseRequestChanged"
            CUtlStringToken m_unQuickbuyAutoPurchaseRequest; // 0x13c8            
            // metadata: MNetworkEnable
            bool m_bQuickbuyAutoPurchase; // 0x13cc            
            // metadata: MNetworkEnable
            bool m_bQuickbuyAutoQueueBuild; // 0x13cd            
            // metadata: MNetworkEnable
            bool m_bHasQuickbuyBeenUsed; // 0x13ce            
            uint8_t _pad13cf[0x1]; // 0x13cf
            // metadata: MNetworkEnable
            source2sdk::client::HeroBuildID_t m_unHeroBuildID; // 0x13d0            
            uint8_t _pad13d4[0x4]; // 0x13d4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "HeroBuildChanged"
            CUtlString m_sHeroBuildSerialized; // 0x13d8            
            // metadata: MNetworkEnable
            bool m_bNetworkDisconnected; // 0x13e0            
            // metadata: MNetworkEnable
            bool m_bHasIncomingThreats; // 0x13e1            
            // metadata: MNetworkEnable
            bool m_bLearningAbility; // 0x13e2            
            uint8_t _pad13e3[0x1]; // 0x13e3
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashStartChanged"
            std::int32_t m_nFlashStartTick; // 0x13e4            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashMaxStartTick; // 0x13e8            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashFadeStartTick; // 0x13ec            
            // metadata: MNetworkEnable
            std::int32_t m_nFlashEndTick; // 0x13f0            
            // metadata: MNetworkEnable
            std::int8_t m_nFlashMaxAlpha; // 0x13f4            
            uint8_t _pad13f5[0x3]; // 0x13f5
            // metadata: MNetworkEnable
            std::int32_t m_nDeducedLane; // 0x13f8            
            // metadata: MNetworkEnable
            // m_hEnemyPlayerAimTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEnemyPlayerAimTarget;
            char m_hEnemyPlayerAimTarget[0x4]; // 0x13fc            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sInCombat; // 0x1400            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageTaken; // 0x1418            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelRecentDamage m_sPlayerDamageDealt; // 0x1430            
            // metadata: MNetworkEnable
            std::int8_t m_nSuccessiveDucks; // 0x1448            
            uint8_t _pad1449[0x3]; // 0x1449
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDuckTime; // 0x144c            
            // metadata: MNetworkEnable
            bool m_bDismissedReportCard; // 0x1450            
            uint8_t _pad1451[0x3]; // 0x1451
            // metadata: MNetworkEnable
            float m_flCurrentHealingAmount; // 0x1454            
            // metadata: MNetworkEnable
            QAngle m_angLockedEyeAngles; // 0x1458            
            uint8_t _pad1464[0x4]; // 0x1464
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1468            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelHeroComponent"
            // metadata: MNetworkAlias "CCitadelHeroComponent"
            // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
            source2sdk::client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1630            
            uint8_t _pad1670[0xa8]; // 0x1670
            float m_flRichPresenceUpdateInterval; // 0x1718            
            uint8_t _pad171c[0xf4]; // 0x171c
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementClipped; // 0x1810            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDisableGravity; // 0x1811            
            // metadata: MNetworkEnable
            bool m_bAnimGraphMovementDirectAirControl; // 0x1812            
            uint8_t _pad1813[0x1]; // 0x1813
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1814            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1818            
            // metadata: MNetworkEnable
            float m_flPredSlowSpeed; // 0x181c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x1820            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1830            
            // metadata: MNetworkEnable
            float m_flSlowSpeed[4]; // 0x1840            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flForceInCombatAnimsUntilTime; // 0x1850            
            std::int32_t m_iCurSlowSlot; // 0x1854            
            bool m_bLocoLeanTriggeredForDirection; // 0x1858            
            bool m_bLocoRunToStopCanTrigger; // 0x1859            
            uint8_t _pad185a[0x2]; // 0x185a
            float m_flCrouchFraction; // 0x185c            
            float m_flCrouchSpeed; // 0x1860            
            source2sdk::entity2::GameTime_t m_fidgetTime; // 0x1864            
            Vector m_vShootTestOffsetStanding; // 0x1868            
            Vector m_vShootTestOffsetCrouching; // 0x1874            
            source2sdk::entity2::GameTime_t m_leanStartTime; // 0x1880            
            uint8_t _pad1884[0x80]; // 0x1884
            // metadata: MNetworkEnable
            std::uint8_t m_nAudioEnclosure; // 0x1904            
            // metadata: MNetworkEnable
            bool m_bAudioHasSkyExposure; // 0x1905            
            uint8_t _pad1906[0xa];
            
            // Datamap fields:
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xf68
            // CCitadelPlayer_MovementServices m_pMovementServices; // 0xf70
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelPlayerPawn) == 0x1910);
    };
};
