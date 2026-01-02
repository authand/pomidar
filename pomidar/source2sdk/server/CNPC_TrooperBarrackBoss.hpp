#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_TrooperBoss.hpp"

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
        // Size: 0x1d78
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_TrooperBarrackBoss : public source2sdk::server::CNPC_TrooperBoss
        {
        public:
            uint8_t _pad1d68[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperBarrackBoss) == 0x1d78);
    };
};
