#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x218
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Synth_Grasp_Victim : public source2sdk::server::CCitadelModifier
        {
        public:
            Vector m_vecOrigin; // 0xc8            
            uint8_t _pad00d4[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Synth_Grasp_Victim because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Synth_Grasp_Victim) == 0x218);
    };
};
