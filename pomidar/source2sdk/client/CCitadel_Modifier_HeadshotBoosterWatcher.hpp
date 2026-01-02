#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_BaseBulletPreRollProc.hpp"

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
        // Size: 0x1d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HeadshotBoosterWatcher : public source2sdk::client::CCitadel_Modifier_BaseBulletPreRollProc
        {
        public:
            uint8_t _pad0198[0x40];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_HeadshotBoosterWatcher) == 0x1d8);
    };
};
