#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0xe50
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_WreckerScrapBlast : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0xc0];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_WreckerScrapBlast) == 0xe50);
    };
};
