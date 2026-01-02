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
        // Size: 0xe58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flMaxStacksBonusDamage"
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_StackingDefense : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x4]; // 0xd90
            // metadata: MNetworkEnable
            float m_flMaxStacksBonusDamage; // 0xd94            
            uint8_t _pad0d98[0xc0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_StackingDefense because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Priest_StackingDefense) == 0xe58);
    };
};
