#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon_GraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x510
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Shotgun_Astro_GraphController : public source2sdk::client::CCitadel_Ability_PrimaryWeapon_GraphController
        {
        public:
            // m_bShootForward has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bShootForward;
            char m_bShootForward[0x20]; // 0x4d0            
            // m_bShootBackward has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bShootBackward;
            char m_bShootBackward[0x20]; // 0x4f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shotgun_Astro_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Shotgun_Astro_GraphController) == 0x510);
    };
};
