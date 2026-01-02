#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_BreakablePropPickupVData.hpp"

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
        // Size: 0x978
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_BreakablePropGoldPickupVData : public source2sdk::server::CCitadel_BreakablePropPickupVData
        {
        public:
            float m_flGoldAmount; // 0x970            
            float m_flGoldPerMinuteAmount; // 0x974            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropGoldPickupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakablePropGoldPickupVData) == 0x978);
    };
};
