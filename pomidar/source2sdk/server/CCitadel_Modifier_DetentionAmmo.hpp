#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x2c8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_DetentionAmmo : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            float m_flBuildupPerBullet; // 0x180            
            uint8_t _pad0184[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_DetentionAmmo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_DetentionAmmo) == 0x2c8);
    };
};
