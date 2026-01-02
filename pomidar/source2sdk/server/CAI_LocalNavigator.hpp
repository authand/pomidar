#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/server/CAI_LocalNavigatorBase.hpp"

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
        // Size: 0x108
        // Has VTable
        #pragma pack(push, 1)
        class CAI_LocalNavigator : public source2sdk::server::CAI_LocalNavigatorBase
        {
        public:
            bool m_bLastWasClear; // 0x50            
            uint8_t _pad0051[0x9f]; // 0x51
            source2sdk::client::CSimpleSimTimer m_FullDirectTimer; // 0xf0            
            uint8_t _pad00f8[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_LocalNavigator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_LocalNavigator) == 0x108);
    };
};
