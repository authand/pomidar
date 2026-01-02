#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Stunned.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x158
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PsychicLift : public source2sdk::client::CCitadel_Modifier_Stunned
        {
        public:
            uint8_t _pad00c8[0x80]; // 0xc8
            Vector m_vecFloatDest; // 0x148            
            bool m_bImpacted; // 0x154            
            uint8_t _pad0155[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PsychicLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_PsychicLift) == 0x158);
    };
};
