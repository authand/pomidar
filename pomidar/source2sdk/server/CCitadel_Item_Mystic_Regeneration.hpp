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
        // Size: 0xc60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iRegenStacks"
        #pragma pack(push, 1)
        class CCitadel_Item_Mystic_Regeneration : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba8[0x2c]; // 0xba8
            bool m_bForceModUpdate; // 0xbd4            
            uint8_t _pad0bd5[0x3]; // 0xbd5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_iRegenStacks; // 0xbd8            
            uint8_t _pad0bdc[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_Mystic_Regeneration because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_Mystic_Regeneration) == 0xc60);
    };
};
