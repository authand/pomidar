#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0x180
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Mirage_Tornado_Aura_Apply : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0xc0];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CModifier_Mirage_Tornado_Aura_Apply) == 0x180);
    };
};
