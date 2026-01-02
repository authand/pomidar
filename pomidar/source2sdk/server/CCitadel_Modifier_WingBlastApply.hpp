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
        class CCitadel_Modifier_WingBlastApply : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c8[0xc0]; // 0xc8
            Vector m_vStart; // 0x188            
            Vector m_vEnd; // 0x194            
            Vector m_vPush; // 0x1a0            
            uint8_t _pad01ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_WingBlastApply because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_WingBlastApply) == 0x1b0);
    };
};
