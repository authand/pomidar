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
        // Enumerator count: 18
        // Alignment: 4
        // Size: 0x4
        enum class EChooseHeroRosterContext : std::uint32_t
        {
            None = 0x0,
            Matchmake = 0x1,
            BotMatchEasy = 0x2,
            BotMatchHard = 0x3,
            PartyReadyUp = 0x4,
            HeroTesting = 0x5,
            BotMatchGuided = 0x6,
            EditRoster = 0x7,
            SandboxTutorial = 0x8,
            CoopBotMatchmake = 0x9,
            ChangeHero = 0xa,
            Testing1v1 = 0xb,
            ChangeSelectedBot = 0xc,
            BotMatchMedium = 0xd,
            PrivateLobby = 0xe,
            RankedMatchmake = 0xf,
            DashboardBuilds = 0x10,
            CalibrationMatch = 0x11,
        };
    };
};
