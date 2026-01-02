#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0xed8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bInFlight"
        #pragma pack(push, 1)
        class CCitadel_Ability_Fathom_Breach : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nRollFXIndex; // 0xd90            
            // metadata: MNetworkEnable
            bool m_bInFlight; // 0xd94            
            uint8_t _pad0d95[0x143];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fathom_Breach because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Fathom_Breach) == 0xed8);
    };
};
