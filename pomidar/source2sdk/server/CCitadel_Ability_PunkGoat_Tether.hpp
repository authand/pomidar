#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xd58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bTetheringActive"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Tether : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x18]; // 0xba0
            source2sdk::entity2::GameTime_t m_tTetherEndTime; // 0xbb8            
            uint8_t _pad0bbc[0x14]; // 0xbbc
            // metadata: MNetworkEnable
            bool m_bTetheringActive; // 0xbd0            
            uint8_t _pad0bd1[0x187];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Tether because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PunkGoat_Tether) == 0xd58);
    };
};
