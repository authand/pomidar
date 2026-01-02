#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        struct CCitadelTrooperMinimap;
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
        // Size: 0x2840
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
        // static metadata: MNetworkVarNames "GameTime_t m_fLevelStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGameStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRoundStartTime"
        // static metadata: MNetworkVarNames "EGameState m_eGameState"
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerAmber"
        // static metadata: MNetworkVarNames "EHANDLE m_hTowerSapphire"
        // static metadata: MNetworkVarNames "bool m_bEnemyInAmberBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyInSapphireBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyPlayersInAmberBase"
        // static metadata: MNetworkVarNames "bool m_bEnemyPlayersInSapphireBase"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
        // static metadata: MNetworkVarNames "bool m_bMatchSafeToAbandon"
        // static metadata: MNetworkVarNames "bool m_bMatchNotScored"
        // static metadata: MNetworkVarNames "bool m_bNoDeathEnabled"
        // static metadata: MNetworkVarNames "bool m_bFastCooldownsEnabled"
        // static metadata: MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
        // static metadata: MNetworkVarNames "bool m_bUnlimitedAmmoEnabled"
        // static metadata: MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
        // static metadata: MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
        // static metadata: MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
        // static metadata: MNetworkVarNames "ECitadelGameMode m_eGameMode"
        // static metadata: MNetworkVarNames "uint32 m_unSpectatorCount"
        // static metadata: MNetworkVarNames "AccountID_t m_nHideoutOwner"
        // static metadata: MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
        // static metadata: MNetworkVarNames "int m_iAmberRejuvCount"
        // static metadata: MNetworkVarNames "int m_iSapphireRejuvCount"
        // static metadata: MNetworkVarNames "bool m_bServerPaused"
        // static metadata: MNetworkVarNames "int m_iPauseTeam"
        // static metadata: MNetworkVarNames "int m_nMatchClockUpdateTick"
        // static metadata: MNetworkVarNames "float m_flMatchClockAtLastUpdate"
        // static metadata: MNetworkVarNames "bool m_bRequiresReportCardDismissal"
        // static metadata: MNetworkVarNames "int m_eGGTeam"
        // static metadata: MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
        // static metadata: MNetworkVarNames "MatchID_t m_unMatchID"
        // static metadata: MNetworkVarNames "CUtlString m_sGameplayExperiment"
        // static metadata: MNetworkVarNames "uint32 m_ExperimentTokenHashCode"
        // static metadata: MNetworkVarNames "GameTime_t m_flHeroDiedTime"
        #pragma pack(push, 1)
        class CCitadelGameRules : public source2sdk::server::CTeamplayRules
        {
        public:
            uint8_t _pad00c0[0x10]; // 0xc0
            // metadata: MNetworkEnable
            bool m_bFreezePeriod; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLevelStartTime; // 0xd4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0xd8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRoundStartTime; // 0xdc            
            // metadata: MNetworkEnable
            source2sdk::client::EGameState m_eGameState; // 0xe0            
            // metadata: MNetworkEnable
            // m_hTowerAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTowerAmber;
            char m_hTowerAmber[0x4]; // 0xe4            
            // metadata: MNetworkEnable
            // m_hTowerSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTowerSapphire;
            char m_hTowerSapphire[0x4]; // 0xe8            
            // metadata: MNetworkEnable
            bool m_bEnemyInAmberBase; // 0xec            
            // metadata: MNetworkEnable
            bool m_bEnemyInSapphireBase; // 0xed            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInAmberBase; // 0xee            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInSapphireBase; // 0xef            
            // metadata: MNetworkEnable
            Vector m_vMinimapMins; // 0xf0            
            // metadata: MNetworkEnable
            Vector m_vMinimapMaxs; // 0xfc            
            // metadata: MNetworkEnable
            bool m_bMatchSafeToAbandon; // 0x108            
            // metadata: MNetworkEnable
            bool m_bMatchNotScored; // 0x109            
            // metadata: MNetworkEnable
            bool m_bNoDeathEnabled; // 0x10a            
            // metadata: MNetworkEnable
            bool m_bFastCooldownsEnabled; // 0x10b            
            // metadata: MNetworkEnable
            bool m_bStaminaCooldownsEnabled; // 0x10c            
            // metadata: MNetworkEnable
            bool m_bUnlimitedAmmoEnabled; // 0x10d            
            // metadata: MNetworkEnable
            bool m_bInfiniteResourcesEnabled; // 0x10e            
            // metadata: MNetworkEnable
            bool m_bFlexSlotsForcedUnlocked; // 0x10f            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelMatchMode m_eMatchMode; // 0x110            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelGameMode m_eGameMode; // 0x114            
            // metadata: MNetworkEnable
            std::uint32_t m_unSpectatorCount; // 0x118            
            // metadata: MNetworkEnable
            std::uint32_t m_nHideoutOwner; // 0x11c            
            // metadata: MNetworkEnable
            // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelTrooperMinimap> m_hTrooperMinimap;
            char m_hTrooperMinimap[0x4]; // 0x120            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterRebels;
            char m_hCurrentHeroDrafterRebels[0x4]; // 0x124            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentHeroDrafterCombine;
            char m_hCurrentHeroDrafterCombine[0x4]; // 0x128            
            bool m_bDontUploadStats; // 0x12c            
            uint8_t _pad012d[0x3]; // 0x12d
            std::int32_t m_iWinningTeam; // 0x130            
            uint8_t _pad0134[0x6c]; // 0x134
            bool m_bSpawnedBots; // 0x1a0            
            bool m_bGuideBotAssigned; // 0x1a1            
            uint8_t _pad01a2[0x2]; // 0x1a2
            float m_timeLastSpawnCrates; // 0x1a4            
            bool m_bNotifiedClientsOfNextCrateSpawn; // 0x1a8            
            bool m_bEarlyCratesSpawned; // 0x1a9            
            bool m_bIsEarlyCrateGamestate; // 0x1aa            
            uint8_t _pad01ab[0x26d]; // 0x1ab
            source2sdk::entity2::GameTime_t m_flGameTimeAllPlayersDisconnected; // 0x418            
            std::int32_t m_nNextHeroDraftPosition; // 0x41c            
            uint8_t _pad0420[0x1248]; // 0x420
            source2sdk::server::CountdownTimer m_CheckIdleTimer; // 0x1668            
            source2sdk::server::CountdownTimer m_CheckCheatersTimer; // 0x1680            
            uint8_t _pad1698[0x100]; // 0x1698
            // metadata: MNetworkEnable
            std::int32_t m_iAmberRejuvCount; // 0x1798            
            // metadata: MNetworkEnable
            std::int32_t m_iSapphireRejuvCount; // 0x179c            
            uint8_t _pad17a0[0xfc0]; // 0x17a0
            // metadata: MNetworkEnable
            bool m_bServerPaused; // 0x2760            
            uint8_t _pad2761[0x3]; // 0x2761
            // metadata: MNetworkEnable
            std::int32_t m_iPauseTeam; // 0x2764            
            // metadata: MNetworkEnable
            std::int32_t m_nMatchClockUpdateTick; // 0x2768            
            // metadata: MNetworkEnable
            float m_flMatchClockAtLastUpdate; // 0x276c            
            double m_flPauseTime; // 0x2770            
            CPlayerSlot m_pausingPlayerId; // 0x2778            
            CPlayerSlot m_unpausingPlayerId; // 0x277c            
            float m_fPauseRawTime; // 0x2780            
            float m_fPauseCurTime; // 0x2784            
            float m_fUnpauseRawTime; // 0x2788            
            float m_fUnpauseCurTime; // 0x278c            
            uint8_t _pad2790[0x50]; // 0x2790
            // metadata: MNetworkEnable
            bool m_bRequiresReportCardDismissal; // 0x27e0            
            uint8_t _pad27e1[0x3]; // 0x27e1
            source2sdk::entity2::GameTime_t m_flPreGameWaitEndTime; // 0x27e4            
            source2sdk::entity2::GameTime_t m_flReportCardDismissalWaitStart; // 0x27e8            
            std::int32_t m_nLastPreGameCount; // 0x27ec            
            // metadata: MNetworkEnable
            std::int32_t m_eGGTeam; // 0x27f0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x27f4            
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID; // 0x27f8            
            // metadata: MNetworkEnable
            CUtlString m_sGameplayExperiment; // 0x2800            
            // metadata: MNetworkEnable
            std::uint32_t m_ExperimentTokenHashCode; // 0x2808            
            std::int32_t m_nPlayerDeathEventID; // 0x280c            
            std::int32_t m_nReplayChangedEvent; // 0x2810            
            std::int32_t m_nGameOverEvent; // 0x2814            
            uint8_t _pad2818[0x20]; // 0x2818
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroDiedTime; // 0x2838            
            uint8_t _pad283c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelGameRules) == 0x2840);
    };
};
