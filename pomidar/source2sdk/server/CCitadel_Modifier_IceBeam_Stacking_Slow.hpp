#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Base_Buildup.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_IceBeam_Stacking_Slow : public source2sdk::server::CCitadel_Modifier_Base_Buildup
        {
        public:
            uint8_t _pad00d8[0x1c0]; // 0xd8
            float m_flCurrBuildup; // 0x298            
            uint8_t _pad029c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_IceBeam_Stacking_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_IceBeam_Stacking_Slow) == 0x2a0);
    };
};
