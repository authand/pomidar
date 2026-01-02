#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb98
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelHideoutTeleportTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0b10[0x40]; // 0xb10
            CUtlSymbolLarge m_strDestLandmark; // 0xb50            
            CUtlSymbolLarge m_strDestMap; // 0xb58            
            CUtlSymbolLarge m_strDestLocString; // 0xb60            
            source2sdk::entity2::CEntityIOOutput m_OnHideoutTeleport; // 0xb68            
            CUtlSymbolLarge m_strPropModel; // 0xb90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHideoutTeleportTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelHideoutTeleportTrigger) == 0xb98);
    };
};
