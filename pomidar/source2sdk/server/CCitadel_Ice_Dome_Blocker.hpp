#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xac0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTurnSolidTime"
        #pragma pack(push, 1)
        class CCitadel_Ice_Dome_Blocker : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTurnSolidTime; // 0xab8            
            uint8_t _pad0abc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ice_Dome_Blocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ice_Dome_Blocker) == 0xac0);
    };
};
