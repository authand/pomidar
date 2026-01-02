#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xdb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strDefaultSkin"
        // static metadata: MNetworkVarNames "CUtlString m_strFriendlySkin"
        // static metadata: MNetworkVarNames "CUtlString m_strEnemySkin"
        // static metadata: MNetworkVarNames "bool m_bIsWorld"
        #pragma pack(push, 1)
        class CCitadel_DynamicProp : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0d80[0x10]; // 0xd80
            // metadata: MNetworkEnable
            CUtlString m_strDefaultSkin; // 0xd90            
            // metadata: MNetworkEnable
            CUtlString m_strFriendlySkin; // 0xd98            
            // metadata: MNetworkEnable
            CUtlString m_strEnemySkin; // 0xda0            
            // metadata: MNetworkEnable
            bool m_bIsWorld; // 0xda8            
            uint8_t _pad0da9[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge SetFriendlySkin; // 0x0
            // CUtlSymbolLarge SetEnemySkin; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_DynamicProp) == 0xdb0);
    };
};
