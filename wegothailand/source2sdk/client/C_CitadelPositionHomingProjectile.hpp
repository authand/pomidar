#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelTrackedProjectile.hpp"

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
        // Size: 0xb08
        // Has VTable
        #pragma pack(push, 1)
        class C_CitadelPositionHomingProjectile : public source2sdk::client::C_CitadelTrackedProjectile
        {
        public:
            Vector m_vecHomingPosition; // 0xaf8            
            uint8_t _pad0b04[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelPositionHomingProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelPositionHomingProjectile) == 0xb08);
    };
};
