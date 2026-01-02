#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xfa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strDefaultSkin"
        // static metadata: MNetworkVarNames "CUtlString m_strFriendlySkin"
        // static metadata: MNetworkVarNames "CUtlString m_strEnemySkin"
        // static metadata: MNetworkVarNames "bool m_bIsWorld"
        #pragma pack(push, 1)
        class C_Citadel_DynamicProp : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0f60[0x10]; // 0xf60
            std::int32_t m_nPlayerTeamEvent; // 0xf70            
            uint8_t _pad0f74[0x4]; // 0xf74
            // metadata: MNetworkEnable
            CUtlString m_strDefaultSkin; // 0xf78            
            // metadata: MNetworkEnable
            CUtlString m_strFriendlySkin; // 0xf80            
            // metadata: MNetworkEnable
            CUtlString m_strEnemySkin; // 0xf88            
            // metadata: MNetworkEnable
            bool m_bIsWorld; // 0xf90            
            uint8_t _pad0f91[0xf];
            
            // Datamap fields:
            // CUtlSymbolLarge SetFriendlySkin; // 0x0
            // CUtlSymbolLarge SetEnemySkin; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_DynamicProp) == 0xfa0);
    };
};
