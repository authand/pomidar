#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0xc28
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_AOE_Tech_Shield : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba8[0x80];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_AOE_Tech_Shield) == 0xc28);
    };
};
