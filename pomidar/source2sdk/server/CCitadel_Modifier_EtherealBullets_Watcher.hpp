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
        // Size: 0x250
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_EtherealBullets_Watcher : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            uint8_t _pad0180[0xc4]; // 0x180
            bool m_bProcNextHit; // 0x244            
            uint8_t _pad0245[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_EtherealBullets_Watcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_EtherealBullets_Watcher) == 0x250);
    };
};
