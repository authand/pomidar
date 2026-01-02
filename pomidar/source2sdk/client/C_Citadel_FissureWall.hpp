#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xcc0
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_FissureWall : public source2sdk::client::CBaseAnimGraph
        {
        public:
            Vector m_vStartPos; // 0xc98            
            Vector m_vEndPos; // 0xca4            
            source2sdk::entity2::GameTime_t m_flStartEmitTime; // 0xcb0            
            source2sdk::entity2::GameTime_t m_flEndEmitTime; // 0xcb4            
            bool m_bSolid; // 0xcb8            
            uint8_t _pad0cb9[0x3]; // 0xcb9
            std::int32_t m_nTouchCount; // 0xcbc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_FissureWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_FissureWall) == 0xcc0);
    };
};
