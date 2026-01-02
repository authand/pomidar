#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Intrinsic_Base.hpp"

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
        // Size: 0x190
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_CounterspellWatcher : public source2sdk::server::CCitadel_Modifier_Intrinsic_Base
        {
        public:
            bool m_bSpellBlockActivated; // 0xc8            
            bool m_bSpellBlocked; // 0xc9            
            uint8_t _pad00ca[0xc6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CounterspellWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_CounterspellWatcher) == 0x190);
    };
};
