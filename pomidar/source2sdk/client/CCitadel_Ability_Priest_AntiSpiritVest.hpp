#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CCitadel_Ability_Priest_AntiSpiritVest : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x40]; // 0xd90
            source2sdk::entity2::GameTime_t m_tBuffRechargeTime; // 0xdd0            
            uint8_t _pad0dd4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_AntiSpiritVest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Priest_AntiSpiritVest) == 0xdd8);
    };
};
