#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x2b8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SilenceProcWatcher : public source2sdk::client::CCitadel_Modifier_BaseEventProc
        {
        public:
            uint8_t _pad0178[0x140];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_SilenceProcWatcher) == 0x2b8);
    };
};
