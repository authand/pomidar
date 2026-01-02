#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

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
        // Size: 0xcd0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkVarNames "int m_nHitIndex"
        #pragma pack(push, 1)
        class C_Citadel_BreakableProp : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nHitIndex; // 0xc98            
            uint8_t _pad0c9c[0x34];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_BreakableProp) == 0xcd0);
    };
};
