#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_BreakablePropPickupVData.hpp"

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
        // Size: 0x980
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_BreakablePropModifierPickupVData : public source2sdk::client::CCitadel_BreakablePropPickupVData
        {
        public:
            // m_sModifer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_sModifer;
            char m_sModifer[0x10]; // 0x970            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropModifierPickupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_BreakablePropModifierPickupVData) == 0x980);
    };
};
