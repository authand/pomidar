#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Link.hpp"

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
        // Size: 0x1e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HookTarget : public source2sdk::server::CCitadel_Modifier_Link
        {
        public:
            float m_flCurrentVerticalSpeed; // 0xe8            
            bool m_bSuccess; // 0xec            
            bool m_bSameTeam; // 0xed            
            bool m_bPlayedApproachingWhoosh; // 0xee            
            uint8_t _pad00ef[0x1]; // 0xef
            float m_flInitialTravelDistance; // 0xf0            
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0xf4            
            Vector m_vLastPos; // 0xf8            
            uint8_t _pad0104[0xdc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HookTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HookTarget) == 0x1e0);
    };
};
