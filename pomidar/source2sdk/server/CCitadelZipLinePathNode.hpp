#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x530
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelZipLinePathNode : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04f0[0x18]; // 0x4f0
            bool m_bCornerNode; // 0x508            
            bool m_bDisableZippingToByPlayers; // 0x509            
            bool m_bEnabled; // 0x50a            
            bool m_bCapturable; // 0x50b            
            bool m_bAlwaysUsable; // 0x50c            
            bool m_bOneWay; // 0x50d            
            uint8_t _pad050e[0x2]; // 0x50e
            CUtlSymbolLarge m_strGuardBossName; // 0x510            
            CUtlSymbolLarge m_strGuardBossName2; // 0x518            
            CUtlSymbolLarge m_strGuardBossName3; // 0x520            
            uint8_t _pad0528[0x4]; // 0x528
            bool m_bUseForMinimapDrawing; // 0x52c            
            uint8_t _pad052d[0x3];
            
            // Datamap fields:
            // void m_pNode; // 0x528
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLinePathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZipLinePathNode) == 0x530);
    };
};
