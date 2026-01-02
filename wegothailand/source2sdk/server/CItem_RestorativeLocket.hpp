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
        // Size: 0xcb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nNumStacks"
        #pragma pack(push, 1)
        class CItem_RestorativeLocket : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba8[0x100]; // 0xba8
            // metadata: MNetworkEnable
            std::int32_t m_nNumStacks; // 0xca8            
            uint8_t _pad0cac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem_RestorativeLocket because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem_RestorativeLocket) == 0xcb0);
    };
};
