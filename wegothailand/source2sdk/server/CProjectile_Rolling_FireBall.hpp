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
        // Size: 0x8f8
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Rolling_FireBall : public source2sdk::server::CCitadelProjectile
        {
        public:
            bool m_bHitWorld; // 0x8e8            
            uint8_t _pad08e9[0x3]; // 0x8e9
            Vector m_vInitialDirection; // 0x8ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Rolling_FireBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Rolling_FireBall) == 0x8f8);
    };
};
