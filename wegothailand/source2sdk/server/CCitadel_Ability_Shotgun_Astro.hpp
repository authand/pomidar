#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"

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
        // Size: 0xfb8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Shotgun_Astro : public source2sdk::server::CCitadel_Ability_PrimaryWeapon
        {
        public:
            uint8_t _pad0d78[0x240];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Shotgun_Astro) == 0xfb8);
    };
};
