#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x1b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Rutger_ForceField_PushOut : public source2sdk::server::CCitadelModifier
        {
        public:
            Vector m_vStart; // 0xc8            
            Vector m_vDest; // 0xd4            
            Vector m_vCenter; // 0xe0            
            uint8_t _pad00ec[0xc4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Rutger_ForceField_PushOut because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Rutger_ForceField_PushOut) == 0x1b0);
    };
};
