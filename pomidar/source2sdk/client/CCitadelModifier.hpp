#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"

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
        // Size: 0xc0
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadelModifier : public source2sdk::client::CBaseModifier
        {
        public:
            uint8_t _pad0090[0x30];
            // Datamap fields:
            // void m_pVecAbilityValues; // 0x98
            // float m_flEffectiveness; // 0xa0
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadelModifier) == 0xc0);
    };
};
