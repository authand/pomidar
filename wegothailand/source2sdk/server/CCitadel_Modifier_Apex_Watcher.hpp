#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Out_Of_Combat_Health_Regen.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x198
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Apex_Watcher : public source2sdk::server::CCitadel_Modifier_Out_Of_Combat_Health_Regen
        {
        public:
            bool m_bShouldEnableBuff; // 0x150            
            uint8_t _pad0151[0x47];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Apex_Watcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Apex_Watcher) == 0x198);
    };
};
