#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0xf70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAirCast"
        #pragma pack(push, 1)
        class CCitadel_Ability_Chrono_TimeWall : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_hChargingParticle; // 0xd90            
            Vector m_vSpawnPos; // 0xd94            
            QAngle m_qAngles; // 0xda0            
            // metadata: MNetworkEnable
            bool m_bAirCast; // 0xdac            
            uint8_t _pad0dad[0x1c3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Chrono_TimeWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Chrono_TimeWall) == 0xf70);
    };
};
