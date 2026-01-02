#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xbc8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Teleport : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            bool m_bTeleportingToTarget; // 0xba0            
            uint8_t _pad0ba1[0x3]; // 0xba1
            Vector m_vTargetPosition; // 0xba4            
            QAngle m_vTargetAngles; // 0xbb0            
            uint8_t _pad0bbc[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Teleport) == 0xbc8);
    };
};
