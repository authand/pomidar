#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseBulletPreRollProc.hpp"

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
        // Size: 0x1e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChainLightning : public source2sdk::server::CCitadel_Modifier_BaseBulletPreRollProc
        {
        public:
            uint8_t _pad01a0[0x40]; // 0x1a0
            source2sdk::entity2::GameTime_t m_flNextProcTime; // 0x1e0            
            uint8_t _pad01e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightning because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ChainLightning) == 0x1e8);
    };
};
