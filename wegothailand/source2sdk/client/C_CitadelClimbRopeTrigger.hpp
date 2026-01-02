#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xb20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAlignCameraOnAutoDismount"
        #pragma pack(push, 1)
        class C_CitadelClimbRopeTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            bool m_bAlignCameraOnAutoDismount; // 0xb10            
            uint8_t _pad0b11[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelClimbRopeTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelClimbRopeTrigger) == 0xb20);
    };
};
