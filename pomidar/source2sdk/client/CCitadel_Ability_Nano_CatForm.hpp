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
        // Size: 0xed8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsInCatform"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_CatForm : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIsInCatform; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xd94            
            uint8_t _pad0d98[0x140];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_CatForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Nano_CatForm) == 0xed8);
    };
};
