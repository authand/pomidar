#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"

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
        // Size: 0xdd8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_TechUpgrade_SuperAcolyteGloves : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad0d90[0x40]; // 0xd90
            float fl_StoredDamage; // 0xdd0            
            uint8_t _pad0dd4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_TechUpgrade_SuperAcolyteGloves because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_TechUpgrade_SuperAcolyteGloves) == 0xdd8);
    };
};
