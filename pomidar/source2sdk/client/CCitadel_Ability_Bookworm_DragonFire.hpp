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
        // Size: 0xfb0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_DragonFire : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x200]; // 0xd90
            Vector m_vLaunchPosition; // 0xf90            
            QAngle m_qLaunchAngle; // 0xf9c            
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0xfa8            
            uint8_t _pad0fac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_DragonFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bookworm_DragonFire) == 0xfb0);
    };
};
