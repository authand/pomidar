#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"

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
        // Size: 0xca8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flProgress"
        // static metadata: MNetworkVarNames "int m_nNumPushers"
        #pragma pack(push, 1)
        class C_CitadelPayload : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flProgress; // 0xca0            
            // metadata: MNetworkEnable
            std::int32_t m_nNumPushers; // 0xca4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelPayload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelPayload) == 0xca8);
    };
};
