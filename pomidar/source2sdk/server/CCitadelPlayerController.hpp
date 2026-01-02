#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelLobbyPlayerSlot_t.hpp"
#include "source2sdk/client/EGuidedBotMatchObjective.hpp"
#include "source2sdk/client/EPlayerPlayState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/PlayerDataGlobal_t.hpp"
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
        struct CCitadelPlayerPawn;
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
        // Size: 0xce8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EPlayerPlayState m_ePlayState"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchLastHits"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
        // static metadata: MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
        // static metadata: MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
        // static metadata: MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
        // static metadata: MNetworkVarNames "int m_nCurrentRank"
        // static metadata: MNetworkVarNames "int8 m_nAssignedLane"
        // static metadata: MNetworkVarNames "int8 m_nOriginalLaneAssignment"
        // static metadata: MNetworkVarNames "bool m_bIsKingPanda"
        // static metadata: MNetworkVarNames "bool m_bBotDisconnectTakeover"
        // static metadata: MNetworkVarNames "bool m_bInTeamChat"
        // static metadata: MNetworkVarNames "bool m_bInPartyChat"
        // static metadata: MNetworkVarNames "bool m_bLaneSwapLocked"
        // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRequests"
        // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRejects"
        // static metadata: MNetworkVarNames "int32 m_vecMutedPlayers"
        // static metadata: MNetworkVarNames "bool m_bCommsRestricted"
        // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
        // static metadata: MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
        // static metadata: MNetworkVarNames "int8 m_nDeathReplayAvailable"
        // static metadata: MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
        #pragma pack(push, 1)
        class CCitadelPlayerController : public source2sdk::server::CBasePlayerController
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::EPlayerPlayState m_ePlayState; // 0x800            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchLastHits; // 0x804            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchOrbsSecured; // 0x808            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchOrbsDenied; // 0x80c            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchDamageToGuardians; // 0x810            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchDamageToPlayers; // 0x814            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchDamageTaken; // 0x818            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchNetWorth; // 0x81c            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchModsPurchased; // 0x820            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x824            
            // metadata: MNetworkEnable
            float m_flGuideBotMatchLastTaskNagVO; // 0x828            
            // metadata: MNetworkEnable
            float m_flGuideBotLastTimeTaskCompleted; // 0x82c            
            // metadata: MNetworkEnable
            source2sdk::client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x830            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrentRank; // 0x834            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AssignedLaneChanged"
            std::int8_t m_nAssignedLane; // 0x838            
            // metadata: MNetworkEnable
            std::int8_t m_nOriginalLaneAssignment; // 0x839            
            // metadata: MNetworkEnable
            bool m_bIsKingPanda; // 0x83a            
            // metadata: MNetworkEnable
            bool m_bBotDisconnectTakeover; // 0x83b            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ChatGroupsChanged"
            bool m_bInTeamChat; // 0x83c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ChatGroupsChanged"
            bool m_bInPartyChat; // 0x83d            
            // metadata: MNetworkEnable
            bool m_bLaneSwapLocked; // 0x83e            
            uint8_t _pad083f[0x1]; // 0x83f
            // metadata: MNetworkEnable
            // m_vecLaneSwapRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecLaneSwapRequests;
            char m_vecLaneSwapRequests[0x18]; // 0x840            
            // metadata: MNetworkEnable
            // m_vecLaneSwapRejects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecLaneSwapRejects;
            char m_vecLaneSwapRejects[0x18]; // 0x858            
            // metadata: MNetworkEnable
            // m_vecMutedPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_vecMutedPlayers;
            char m_vecMutedPlayers[0x18]; // 0x870            
            // metadata: MNetworkEnable
            bool m_bCommsRestricted; // 0x888            
            uint8_t _pad0889[0x12b]; // 0x889
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeroPawnChanged"
            // m_hHeroPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPlayerPawn> m_hHeroPawn;
            char m_hHeroPawn[0x4]; // 0x9b4            
            uint8_t _pad09b8[0x40]; // 0x9b8
            // metadata: MNetworkEnable
            source2sdk::server::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x9f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nDeathReplayAvailable; // 0xcb8            
            // metadata: MNetworkEnable
            source2sdk::client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xcb9            
            uint8_t _pad0cba[0x2]; // 0xcba
            source2sdk::entity2::GameTime_t m_flLastCommsTime; // 0xcbc            
            source2sdk::entity2::GameTime_t m_flNextAllowedCommsTime; // 0xcc0            
            source2sdk::entity2::GameTime_t m_flLastFailedCommsTime; // 0xcc4            
            // m_vecRecentCommAttempts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_vecRecentCommAttempts;
            char m_vecRecentCommAttempts[0x18]; // 0xcc8            
            std::int32_t m_nTotalCommsAttempted; // 0xce0            
            std::int32_t m_nGuideBotNumTasksComplete; // 0xce4            
            
            // Datamap fields:
            // void CCitadelPlayerControllerResourceDataThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerController) == 0xce8);
    };
};
