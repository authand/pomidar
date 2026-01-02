#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelProjectile.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa70
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelBoomerangProjectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            uint8_t _pad08e8[0x180]; // 0x8e8
            bool m_bReturning; // 0xa68            
            uint8_t _pad0a69[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBoomerangProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBoomerangProjectile) == 0xa70);
    };
};
