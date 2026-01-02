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
        // Size: 0xf8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChargeDragEnemy : public source2sdk::server::CCitadelModifier
        {
        public:
            QAngle m_qRelativeOffset; // 0xc8            
            float m_flRelativeDist; // 0xd4            
            float m_flMaxDist; // 0xd8            
            Vector m_vecOffsetDir; // 0xdc            
            Vector m_vecStartPosition; // 0xe8            
            uint8_t _pad00f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChargeDragEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ChargeDragEnemy) == 0xf8);
    };
};
