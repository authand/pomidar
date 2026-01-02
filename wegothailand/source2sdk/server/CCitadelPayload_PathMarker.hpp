#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x508
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPayload_PathMarker : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_iLane; // 0x4f0            
            bool m_bStart; // 0x4f4            
            bool m_bRollBackToHere; // 0x4f5            
            uint8_t _pad04f6[0x2]; // 0x4f6
            float m_flDistFromPrev; // 0x4f8            
            float m_flProgressAlongTotalPath; // 0x4fc            
            source2sdk::server::CCitadelPayload_PathMarker* m_pPrevious; // 0x500            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPayload_PathMarker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPayload_PathMarker) == 0x508);
    };
};
