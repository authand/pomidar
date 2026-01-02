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
        // Size: 0xcf8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Hornet_Chain : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vLaunchPosition; // 0xba0            
            QAngle m_qLaunchAngle; // 0xbac            
            uint8_t _pad0bb8[0x140];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Hornet_Chain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Hornet_Chain) == 0xcf8);
    };
};
