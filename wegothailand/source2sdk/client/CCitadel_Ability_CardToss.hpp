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
        // Size: 0x10b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bCardIsFlying"
        #pragma pack(push, 1)
        class CCitadel_Ability_CardToss : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x318]; // 0xd90
            // metadata: MNetworkEnable
            bool m_bCardIsFlying; // 0x10a8            
            uint8_t _pad10a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_CardToss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_CardToss) == 0x10b0);
    };
};
