#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xe10
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_SettingSun : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            bool m_bProjectileActive; // 0xba0            
            uint8_t _pad0ba1[0x1c7]; // 0xba1
            // m_TargetPreviews has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_TargetPreviews;
            char m_TargetPreviews[0x18]; // 0xd68            
            uint8_t _pad0d80[0x88]; // 0xd80
            bool m_bWasSelected; // 0xe08            
            uint8_t _pad0e09[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SettingSun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_SettingSun) == 0xe10);
    };
};
