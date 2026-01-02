#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0xd40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iTrophyCount"
        #pragma pack(push, 1)
        class CCitadel_Item_TrophyCollector : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba8[0x180]; // 0xba8
            // metadata: MNetworkEnable
            std::int32_t m_iTrophyCount; // 0xd28            
            std::int32_t m_iInitialKills; // 0xd2c            
            std::int32_t m_iInitialAssists; // 0xd30            
            std::int32_t m_iPrevCount; // 0xd34            
            bool m_bMaxStacksReached; // 0xd38            
            uint8_t _pad0d39[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_TrophyCollector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_TrophyCollector) == 0xd40);
    };
};
