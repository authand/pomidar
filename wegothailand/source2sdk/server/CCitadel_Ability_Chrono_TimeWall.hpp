#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBulletTimeWarp;
    };
};

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
        // Size: 0xd90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAirCast"
        #pragma pack(push, 1)
        class CCitadel_Ability_Chrono_TimeWall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hWall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBulletTimeWarp> m_hWall;
            char m_hWall[0x4]; // 0xba0            
            Vector vecDir; // 0xba4            
            source2sdk::client::ParticleIndex_t m_hChargingParticle; // 0xbb0            
            Vector m_vSpawnPos; // 0xbb4            
            QAngle m_qAngles; // 0xbc0            
            // metadata: MNetworkEnable
            bool m_bAirCast; // 0xbcc            
            uint8_t _pad0bcd[0x1c3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Chrono_TimeWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Chrono_TimeWall) == 0xd90);
    };
};
