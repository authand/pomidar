#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xac8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkVarNames "int m_nHitIndex"
        #pragma pack(push, 1)
        class CCitadel_BreakableProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nHitIndex; // 0xab8            
            uint8_t _pad0abc[0x4]; // 0xabc
            float m_flOverrideInitialSpawnTime; // 0xac0            
            float m_flOverrideRespawnTime; // 0xac4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakableProp) == 0xac8);
    };
};
