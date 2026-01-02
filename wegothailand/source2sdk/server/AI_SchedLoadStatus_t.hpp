#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct AI_SchedLoadStatus_t
        {
        public:
            bool bValid; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            std::int32_t nSignature; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AI_SchedLoadStatus_t, bValid) == 0x0);
        static_assert(offsetof(source2sdk::server::AI_SchedLoadStatus_t, nSignature) == 0x4);
        
        static_assert(sizeof(source2sdk::server::AI_SchedLoadStatus_t) == 0x8);
    };
};
