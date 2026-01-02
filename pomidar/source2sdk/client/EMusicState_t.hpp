#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 63
        // Alignment: 4
        // Size: 0x4
        enum class EMusicState_t : std::uint32_t
        {
            EMusicState_Invalid = 0xffffffff,
            EMusicState_None = 0x0,
            EMusicState_Zipline = 0x1,
            EMusicState_TutorialCombat = 0x2,
            EMusicState_Shop = 0x3,
            EMusicState_Idol_Carry = 0x4,
            EStinger_PlayerKillStreak_FirstBlood = 0x5,
            EStinger_Idol_PickedUp = 0x6,
            EStinger_Idol_Returned = 0x7,
            EStinger_HeroDeath = 0x8,
            EStinger_BossKilled_T1_Friendly = 0x9,
            EStinger_BossKilled_T1_Enemy = 0xa,
            EStinger_BossKilled_T2_Friendly = 0xb,
            EStinger_BossKilled_T2_Enemy = 0xc,
            EMusicState_BaseUnderAttack = 0xd,
            EStinger_KillStreak_01 = 0xe,
            EStinger_KillStreak_02 = 0xf,
            EStinger_KillStreak_03 = 0x10,
            EStinger_KillStreak_04 = 0x11,
            EStinger_KillStreak_05 = 0x12,
            EStinger_KillStreak_06 = 0x13,
            EStinger_KillStreak_07 = 0x14,
            EStinger_KillStreak_08 = 0x15,
            EStinger_KillStreak_09 = 0x16,
            EStinger_KillStreak_10 = 0x17,
            EStinger_MidBoss_Arrived = 0x18,
            EStinger_RejuvinatorDescent = 0x19,
            EStinger_RejuvinatorClaimed_Friendly = 0x1a,
            EStinger_RejuvinatorClaimed_Enemy = 0x1b,
            EStinger_RejuvinatorExpired = 0x1c,
            EStinger_BossKilled_TitanShield1_Enemy = 0x1d,
            EStinger_BossKilled_TitanShield2_Enemy = 0x1e,
            EStinger_BossKilled_Titan_Enemy = 0x1f,
            EStinger_BossKilled_TitanShield1_Friendly = 0x20,
            EStinger_BossKilled_TitanShield2_Friendly = 0x21,
            EStinger_BossKilled_Titan_Friendly = 0x22,
            EStinger_RespawnCountdown = 0x23,
            EStinger_Respawn = 0x24,
            EStinger_Respawn_Rejuvinator = 0x25,
            EStinger_CheaterVote = 0x26,
            EMusicState_Won = 0x27,
            EMusicState_Lost = 0x28,
            EMusicState_MainMenu = 0x29,
            EMusicState_HideoutBuild = 0x2a,
            EMusicState_Hideout = 0x2b,
            EMusicState_HideoutSearch = 0x2c,
            EMusicState_HideoutWait = 0x2d,
            EMusicState_Title = 0x2e,
            EStinger_RevealRank_01 = 0x2f,
            EStinger_RevealRank_02 = 0x30,
            EStinger_RevealRank_03 = 0x31,
            EStinger_RevealRank_04 = 0x32,
            EStinger_RevealRank_05 = 0x33,
            EStinger_RevealRank_06 = 0x34,
            EStinger_RevealRank_07 = 0x35,
            EStinger_RevealRank_08 = 0x36,
            EStinger_RevealRank_09 = 0x37,
            EStinger_RevealRank_10 = 0x38,
            EStinger_RevealRank_11 = 0x39,
            EStinger_RevealVote = 0x3a,
            EMusicState_AssignedGameLobby = 0x3b,
            EMusicState_PreMatchCountdown = 0x3c,
            EMusicState_Count = 0x3d,
        };
    };
};
