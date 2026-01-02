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
        // Size: 0xc00
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_ProjectileTest : public source2sdk::server::CCitadel_Item
        {
        public:
            Vector m_vLaunchPosition; // 0xba8            
            QAngle m_qLaunchAngle; // 0xbb4            
            uint8_t _pad0bc0[0x40];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ProjectileTest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_ProjectileTest) == 0xc00);
    };
};
