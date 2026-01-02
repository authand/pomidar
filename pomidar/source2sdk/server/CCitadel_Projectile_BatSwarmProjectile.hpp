#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x990
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_BatSwarmProjectile : public source2sdk::server::CCitadelTrackedProjectile
        {
        public:
            uint8_t _pad0918[0x4c]; // 0x918
            Vector m_vecTargetVelocity; // 0x964            
            Vector m_vecLastVelocity; // 0x970            
            source2sdk::entity2::GameTime_t m_SpawnTime; // 0x97c            
            uint8_t _pad0980[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_BatSwarmProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_BatSwarmProjectile) == 0x990);
    };
};
