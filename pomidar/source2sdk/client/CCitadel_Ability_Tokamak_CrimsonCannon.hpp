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
        // Size: 0xfc0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAirCast"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tokamak_CrimsonCannon : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            bool m_bAirCast; // 0xd90            
            uint8_t _pad0d91[0x207]; // 0xd91
            bool m_bIsZoomed; // 0xf98            
            uint8_t _pad0f99[0x27];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_CrimsonCannon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tokamak_CrimsonCannon) == 0xfc0);
    };
};
