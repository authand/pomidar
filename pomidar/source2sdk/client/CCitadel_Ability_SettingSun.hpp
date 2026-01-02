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
        // Size: 0xe38
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_SettingSun : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_TargetPreviews has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_TargetPreviews;
            char m_TargetPreviews[0x18]; // 0xd90            
            uint8_t _pad0da8[0x88]; // 0xda8
            bool m_bWasSelected; // 0xe30            
            uint8_t _pad0e31[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SettingSun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SettingSun) == 0xe38);
    };
};
