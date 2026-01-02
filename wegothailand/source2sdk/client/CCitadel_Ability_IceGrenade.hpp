#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0xea8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_IceGrenade : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vLaunchPosition; // 0xd90            
            QAngle m_qLaunchAngle; // 0xd9c            
            uint8_t _pad0da8[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IceGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_IceGrenade) == 0xea8);
    };
};
