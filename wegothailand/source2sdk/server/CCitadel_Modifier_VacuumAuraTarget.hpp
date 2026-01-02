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
        // Size: 0x188
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_VacuumAuraTarget : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            uint8_t _pad00d0[0x80]; // 0xd0
            float m_flMaxDist; // 0x150            
            Vector m_vecOffsetDir; // 0x154            
            Vector m_vecStartPosition; // 0x160            
            float m_flAOERadius; // 0x16c            
            uint8_t _pad0170[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAuraTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_VacuumAuraTarget) == 0x188);
    };
};
