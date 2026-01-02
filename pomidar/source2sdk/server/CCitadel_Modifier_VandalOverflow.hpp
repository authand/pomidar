#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x168
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_VandalOverflow : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            uint8_t _pad00d0[0x80]; // 0xd0
            Vector m_vecFloatDest; // 0x150            
            Vector m_vecStartingPos; // 0x15c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VandalOverflow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_VandalOverflow) == 0x168);
    };
};
