#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModifier.hpp"

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
        // Size: 0xc8
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadelModifier : public source2sdk::server::CBaseModifier
        {
        public:
            uint8_t _pad0090[0x38];
            // Datamap fields:
            // void m_pVecAbilityValues; // 0xa0
            // float m_flEffectiveness; // 0xa8
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadelModifier) == 0xc8);
    };
};
