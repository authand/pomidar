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
        // Size: 0xe28
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Skyrunner_MagicBeam : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vCastPosition; // 0xd90            
            QAngle m_qCastAngle; // 0xd9c            
            uint8_t _pad0da8[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Skyrunner_MagicBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Skyrunner_MagicBeam) == 0xe28);
    };
};
