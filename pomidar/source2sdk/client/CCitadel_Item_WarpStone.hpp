#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0xdd8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_WarpStone : public source2sdk::client::CCitadel_Item
        {
        public:
            source2sdk::client::ParticleIndex_t m_nCastDelayParticleIndex; // 0xd90            
            uint8_t _pad0d94[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_WarpStone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_WarpStone) == 0xdd8);
    };
};
