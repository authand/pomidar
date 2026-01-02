#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelProjectile.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc28
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_FeatherBoomerang : public source2sdk::client::C_CitadelProjectile
        {
        public:
            uint8_t _pad0af8[0x130];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadel_Projectile_FeatherBoomerang) == 0xc28);
    };
};
