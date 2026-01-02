#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelPlayerPawn;
    };
};

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
        // Size: 0x1030
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Frank_PrimaryWeapon : public source2sdk::client::CCitadel_Ability_PrimaryWeapon
        {
        public:
            uint8_t _pad0f98[0x8]; // 0xf98
            source2sdk::client::C_CitadelPlayerPawn* m_pNextShooter; // 0xfa0            
            uint8_t _pad0fa8[0x88];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Frank_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Frank_PrimaryWeapon) == 0x1030);
    };
};
