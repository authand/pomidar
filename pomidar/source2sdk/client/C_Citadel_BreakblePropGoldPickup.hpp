#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Citadel_BreakablePropPickup.hpp"

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
        // Size: 0xdf0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iGoldReward"
        #pragma pack(push, 1)
        class C_Citadel_BreakblePropGoldPickup : public source2sdk::client::C_Citadel_BreakablePropPickup
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iGoldReward; // 0xde8            
            uint8_t _pad0dec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_BreakblePropGoldPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_BreakblePropGoldPickup) == 0xdf0);
    };
};
