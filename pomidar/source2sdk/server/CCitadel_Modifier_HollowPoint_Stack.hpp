#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x150
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HollowPoint_Stack : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::entity2::GameTime_t m_flStackDecayDelayTime; // 0xc8            
            uint8_t _pad00cc[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HollowPoint_Stack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HollowPoint_Stack) == 0x150);
    };
};
