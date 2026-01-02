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
        // Size: 0x10f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nSlamTravelType"
        // static metadata: MNetworkVarNames "float m_flDistanceToTravel"
        // static metadata: MNetworkVarNames "bool m_bHoldingAbilityButton"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Ult : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x14]; // 0xd90
            // metadata: MNetworkEnable
            std::uint8_t m_nSlamTravelType; // 0xda4            
            uint8_t _pad0da5[0x3]; // 0xda5
            // metadata: MNetworkEnable
            float m_flDistanceToTravel; // 0xda8            
            // metadata: MNetworkEnable
            bool m_bHoldingAbilityButton; // 0xdac            
            uint8_t _pad0dad[0x343];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Ult because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PunkGoat_Ult) == 0x10f0);
    };
};
