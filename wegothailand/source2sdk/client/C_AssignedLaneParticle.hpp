#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0x9f8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkVarNames "int m_iLane"
        #pragma pack(push, 1)
        class C_AssignedLaneParticle : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09d0[0x20]; // 0x9d0
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x9f0            
            uint8_t _pad09f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_AssignedLaneParticle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_AssignedLaneParticle) == 0x9f8);
    };
};
