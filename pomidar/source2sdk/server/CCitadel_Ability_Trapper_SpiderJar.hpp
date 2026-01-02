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
        // Size: 0xec0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Trapper_SpiderJar : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vLaunchPosition; // 0xba0            
            QAngle m_qLaunchAngle; // 0xbac            
            bool m_bHasMadeSpiders; // 0xbb8            
            uint8_t _pad0bb9[0x307];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Trapper_SpiderJar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Trapper_SpiderJar) == 0xec0);
    };
};
