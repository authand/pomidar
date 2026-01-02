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
        // Size: 0x168
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_VacuumAuraTarget : public source2sdk::client::CCitadel_Modifier_Stunned
        {
        public:
            uint8_t _pad00c8[0x80]; // 0xc8
            float m_flMaxDist; // 0x148            
            Vector m_vecOffsetDir; // 0x14c            
            Vector m_vecStartPosition; // 0x158            
            float m_flAOERadius; // 0x164            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAuraTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_VacuumAuraTarget) == 0x168);
    };
};
