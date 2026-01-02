#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Out_Of_Combat_Health_Regen.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x190
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Apex_Watcher : public source2sdk::client::CCitadel_Modifier_Out_Of_Combat_Health_Regen
        {
        public:
            bool m_bShouldEnableBuff; // 0x148            
            uint8_t _pad0149[0x47];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Apex_Watcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Apex_Watcher) == 0x190);
    };
};
