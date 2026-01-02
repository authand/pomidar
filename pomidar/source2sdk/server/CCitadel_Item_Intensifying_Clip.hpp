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
        // Size: 0xbf0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_Intensifying_Clip : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba8[0x40]; // 0xba8
            float m_flSpinUpTime; // 0xbe8            
            uint8_t _pad0bec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_Intensifying_Clip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_Intensifying_Clip) == 0xbf0);
    };
};
