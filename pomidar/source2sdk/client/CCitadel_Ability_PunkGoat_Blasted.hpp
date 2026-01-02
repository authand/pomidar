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
        // Size: 0x10e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flBlastedCurrentDuration"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Blasted : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bHUDElementVisible; // 0xd90            
            uint8_t _pad0d91[0x13]; // 0xd91
            // metadata: MNetworkEnable
            float m_flBlastedCurrentDuration; // 0xda4            
            uint8_t _pad0da8[0x340];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Blasted because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PunkGoat_Blasted) == 0x10e8);
    };
};
