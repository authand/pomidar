#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0xa60
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelHideoutTeleportTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad09d8[0x40]; // 0x9d8
            CUtlSymbolLarge m_strDestLandmark; // 0xa18            
            CUtlSymbolLarge m_strDestMap; // 0xa20            
            CUtlSymbolLarge m_strDestLocString; // 0xa28            
            source2sdk::entity2::CEntityIOOutput m_OnHideoutTeleport; // 0xa30            
            CUtlSymbolLarge m_strPropModel; // 0xa58            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHideoutTeleportTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelHideoutTeleportTrigger) == 0xa60);
    };
};
