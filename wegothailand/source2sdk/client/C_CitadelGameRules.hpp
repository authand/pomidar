#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_TeamplayRules.hpp"
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelTrooperMinimap;
    };
};
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9ef8
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
        class C_CitadelGameRules : public source2sdk::client::C_TeamplayRules
        {
        public:
            uint8_t _pad0040[0x18]; // 0x40
            // metadata: MNetworkEnable
            bool m_bFreezePeriod; // 0x58            
            uint8_t _pad0059[0x3]; // 0x59
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLevelStartTime; // 0x5c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0x60            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRoundStartTime; // 0x64            
            // metadata: MNetworkEnable
            source2sdk::client::EGameState m_eGameState; // 0x68            
            // metadata: MNetworkEnable
            // m_hTowerAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerAmber;
            char m_hTowerAmber[0x4]; // 0x6c            
            // metadata: MNetworkEnable
            // m_hTowerSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTowerSapphire;
            char m_hTowerSapphire[0x4]; // 0x70            
            // metadata: MNetworkEnable
            bool m_bEnemyInAmberBase; // 0x74            
            // metadata: MNetworkEnable
            bool m_bEnemyInSapphireBase; // 0x75            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInAmberBase; // 0x76            
            // metadata: MNetworkEnable
            bool m_bEnemyPlayersInSapphireBase; // 0x77            
            // metadata: MNetworkEnable
            Vector m_vMinimapMins; // 0x78            
            // metadata: MNetworkEnable
            Vector m_vMinimapMaxs; // 0x84            
            // metadata: MNetworkEnable
            bool m_bMatchSafeToAbandon; // 0x90            
            // metadata: MNetworkEnable
            bool m_bMatchNotScored; // 0x91            
            // metadata: MNetworkEnable
            bool m_bNoDeathEnabled; // 0x92            
            // metadata: MNetworkEnable
            bool m_bFastCooldownsEnabled; // 0x93            
            // metadata: MNetworkEnable
            bool m_bStaminaCooldownsEnabled; // 0x94            
            // metadata: MNetworkEnable
            bool m_bUnlimitedAmmoEnabled; // 0x95            
            // metadata: MNetworkEnable
            bool m_bInfiniteResourcesEnabled; // 0x96            
            // metadata: MNetworkEnable
            bool m_bFlexSlotsForcedUnlocked; // 0x97            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelMatchMode m_eMatchMode; // 0x98            
            // metadata: MNetworkEnable
            source2sdk::client::ECitadelGameMode m_eGameMode; // 0x9c            
            // metadata: MNetworkEnable
            std::uint32_t m_unSpectatorCount; // 0xa0            
            // metadata: MNetworkEnable
            std::uint32_t m_nHideoutOwner; // 0xa4            
            // metadata: MNetworkEnable
            // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadelTrooperMinimap> m_hTrooperMinimap;
            char m_hTrooperMinimap[0x4]; // 0xa8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "playerDraftingChanged"
            // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentHeroDrafterRebels;
            char m_hCurrentHeroDrafterRebels[0x4]; // 0xac            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "playerDraftingChanged"
            // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentHeroDrafterCombine;
            char m_hCurrentHeroDrafterCombine[0x4]; // 0xb0            
            bool m_bDontUploadStats; // 0xb4            
            uint8_t _pad00b5[0x3]; // 0xb5
            // metadata: MNetworkEnable
            std::int32_t m_iAmberRejuvCount; // 0xb8            
            // metadata: MNetworkEnable
            std::int32_t m_iSapphireRejuvCount; // 0xbc            
            uint8_t _pad00c0[0x9d58]; // 0xc0
            // metadata: MNetworkEnable
            bool m_bServerPaused; // 0x9e18            
            uint8_t _pad9e19[0x3]; // 0x9e19
            // metadata: MNetworkEnable
            std::int32_t m_iPauseTeam; // 0x9e1c            
            // metadata: MNetworkEnable
            std::int32_t m_nMatchClockUpdateTick; // 0x9e20            
            // metadata: MNetworkEnable
            float m_flMatchClockAtLastUpdate; // 0x9e24            
            double m_flPauseTime; // 0x9e28            
            CPlayerSlot m_pausingPlayerId; // 0x9e30            
            CPlayerSlot m_unpausingPlayerId; // 0x9e34            
            float m_fPauseRawTime; // 0x9e38            
            float m_fPauseCurTime; // 0x9e3c            
            float m_fUnpauseRawTime; // 0x9e40            
            float m_fUnpauseCurTime; // 0x9e44            
            uint8_t _pad9e48[0x50]; // 0x9e48
            // metadata: MNetworkEnable
            bool m_bRequiresReportCardDismissal; // 0x9e98            
            uint8_t _pad9e99[0x3]; // 0x9e99
            source2sdk::entity2::GameTime_t m_flPreGameWaitEndTime; // 0x9e9c            
            source2sdk::entity2::GameTime_t m_flReportCardDismissalWaitStart; // 0x9ea0            
            std::int32_t m_nLastPreGameCount; // 0x9ea4            
            // metadata: MNetworkEnable
            std::int32_t m_eGGTeam; // 0x9ea8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x9eac            
            // metadata: MNetworkEnable
            source2sdk::client::MatchID_t m_unMatchID; // 0x9eb0            
            // metadata: MNetworkEnable
            CUtlString m_sGameplayExperiment; // 0x9eb8            
            // metadata: MNetworkEnable
            std::uint32_t m_ExperimentTokenHashCode; // 0x9ec0            
            std::int32_t m_nPlayerDeathEventID; // 0x9ec4            
            std::int32_t m_nReplayChangedEvent; // 0x9ec8            
            std::int32_t m_nGameOverEvent; // 0x9ecc            
            uint8_t _pad9ed0[0x20]; // 0x9ed0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHeroDiedTime; // 0x9ef0            
            uint8_t _pad9ef4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelGameRules) == 0x9ef8);
    };
};
