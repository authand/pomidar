#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"

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
        // Size: 0x1a80
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        #pragma pack(push, 1)
        class CNPC_FlyingDrone : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1a08[0x78];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CNPC_FlyingDrone) == 0x1a80);
    };
};
