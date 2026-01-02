#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // 
        // static metadata: MNetworkVarNames "bool m_bHoldingBall"
        #pragma pack(push, 1)
        class CCitadel_Ability_WreckingBall : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x40]; // 0xd90
            // metadata: MNetworkEnable
            bool m_bHoldingBall; // 0xdd0            
            uint8_t _pad0dd1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_WreckingBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_WreckingBall) == 0xdd8);
    };
};
