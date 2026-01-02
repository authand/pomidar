#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x4
        enum class AI_StrafingRequestSource_t : std::uint32_t
        {
            eMotor = 0x0,
            eNPCLocomotion = 0x1,
            eLevelScript = 0x2,
            eSmartGoal = 0x3,
            eSchedule = 0x4,
            eDefault = 0x5,
            eCount = 0x6,
            eNone = 0x6,
        };
    };
};
