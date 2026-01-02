#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathSimple;
    };
};

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
        // Size: 0xa10
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerPush : public source2sdk::server::CBaseTrigger
        {
        public:
            QAngle m_angPushEntitySpace; // 0x9d8            
            Vector m_vecPushDirEntitySpace; // 0x9e4            
            bool m_bTriggerOnStartTouch; // 0x9f0            
            bool m_bUsePathSimple; // 0x9f1            
            uint8_t _pad09f2[0x6]; // 0x9f2
            CUtlSymbolLarge m_iszPathSimpleName; // 0x9f8            
            source2sdk::server::CPathSimple* m_PathSimple; // 0xa00            
            std::uint32_t m_splinePushType; // 0xa08            
            uint8_t _pad0a0c[0x4];
            
            // Datamap fields:
            // Vector InputSetPushDirection; // 0x0
            // float InputSetPushSpeed; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPush) == 0xa10);
    };
};
