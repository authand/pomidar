#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xae0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_GrandFinaleStage : public source2sdk::server::CBaseAnimGraph
        {
        public:
            Vector m_vStartPos; // 0xab8            
            Vector m_vEndPos; // 0xac4            
            source2sdk::entity2::GameTime_t m_flStartEmitTime; // 0xad0            
            source2sdk::entity2::GameTime_t m_flEndEmitTime; // 0xad4            
            std::int32_t m_nTouchCount; // 0xad8            
            uint8_t _pad0adc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_GrandFinaleStage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_GrandFinaleStage) == 0xae0);
    };
};
