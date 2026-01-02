#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_BreakablePropPickup.hpp"

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
        // Size: 0xb50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iGoldReward"
        #pragma pack(push, 1)
        class CCitadel_BreakablePropGoldPickup : public source2sdk::server::CCitadel_BreakablePropPickup
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iGoldReward; // 0xb48            
            uint8_t _pad0b4c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropGoldPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakablePropGoldPickup) == 0xb50);
    };
};
