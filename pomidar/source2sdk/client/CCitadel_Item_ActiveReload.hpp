#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"

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
        // Size: 0xd98
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_ActiveReload : public source2sdk::client::CCitadel_Item
        {
        public:
            bool m_bPlayedStartSound; // 0xd90            
            bool m_bActiveReloadFailed; // 0xd91            
            uint8_t _pad0d92[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ActiveReload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_ActiveReload) == 0xd98);
    };
};
