#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x148
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_IntensifyingClip : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x80]; // 0xc0
            source2sdk::entity2::GameTime_t m_LastThinkTime; // 0x140            
            float m_flSpinUpTime; // 0x144            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_IntensifyingClip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_IntensifyingClip) == 0x148);
    };
};
