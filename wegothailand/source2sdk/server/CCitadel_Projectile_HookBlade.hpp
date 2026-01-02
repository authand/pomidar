#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelTrackedProjectile.hpp"

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
        // Size: 0x920
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_HookBlade : public source2sdk::server::CCitadelTrackedProjectile
        {
        public:
            bool bIsReturning; // 0x918            
            uint8_t _pad0919[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_HookBlade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_HookBlade) == 0x920);
    };
};
