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
        // Size: 0xde8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_ProjectileTest : public source2sdk::client::CCitadel_Item
        {
        public:
            Vector m_vLaunchPosition; // 0xd90            
            QAngle m_qLaunchAngle; // 0xd9c            
            uint8_t _pad0da8[0x40];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ProjectileTest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_ProjectileTest) == 0xde8);
    };
};
