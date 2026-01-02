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
        class CModifier_Drifter_ShadowMark_Target : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastTickTime; // 0xc8            
            uint8_t _pad00cc[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Drifter_ShadowMark_Target because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Drifter_ShadowMark_Target) == 0x150);
    };
};
