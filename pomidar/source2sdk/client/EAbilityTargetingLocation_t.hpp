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
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x4
        enum class EAbilityTargetingLocation_t : std::uint32_t
        {
            CITADEL_ABILITY_TARGETING_LOCATION_NONE = 0x0,
            CITADEL_ABILITY_TARGETING_LOCATION_SELF = 0x1,
            CITADEL_ABILITY_TARGETING_LOCATION_UNIT = 0x2,
            CITADEL_ABILITY_TARGETING_LOCATION_GROUND = 0x3,
            CITADEL_ABILITY_TARGETING_LOCATION_FIXED_RANGE_GROUND = 0x4,
            CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_GROUND = 0x5,
            CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_UNIT = 0x6,
            CITADEL_ABILITY_TARGETING_LOCATION_CUSTOM = 0x7,
            // MPropertySuppressEnumerator
            CITADEL_ABILITY_TARGETING_LOCATION_COUNT = 0x8,
        };
    };
};
