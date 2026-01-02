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
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x1
        enum class LaneSide_t : std::uint8_t
        {
            Center = 0x0,
            Left = 0x1,
            Right = 0x2,
        };
    };
};
