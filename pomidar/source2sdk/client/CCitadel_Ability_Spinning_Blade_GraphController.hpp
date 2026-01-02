#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseAbilityGraphController.hpp"

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
        // Size: 0x388
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Spinning_Blade_GraphController : public source2sdk::client::CCitadelBaseAbilityGraphController
        {
        public:
            // m_bBoomerangCatch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bBoomerangCatch;
            char m_bBoomerangCatch[0x20]; // 0x368            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Spinning_Blade_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Spinning_Blade_GraphController) == 0x388);
    };
};
