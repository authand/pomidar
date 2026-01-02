#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_FlyingDrone.hpp"

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
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_SurveillanceDrone : public source2sdk::server::CNPC_FlyingDrone
        {
        public:
            std::int32_t m_iMinionHealth; // 0x1a80            
            float m_flLifetime; // 0x1a84            
            uint8_t _pad1a88[0xc]; // 0x1a88
            Vector m_vecHome; // 0x1a94            
            uint8_t _pad1aa0[0x10]; // 0x1aa0
            std::int32_t m_nAbilityLevel; // 0x1ab0            
            uint8_t _pad1ab4[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_SurveillanceDrone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_SurveillanceDrone) == 0x1ae0);
    };
};
