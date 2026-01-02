#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EHideoutButtonAction.hpp"
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
        // Size: 0xa18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strInteractLocString"
        // static metadata: MNetworkVarNames "EHideoutButtonAction m_eHideoutAction"
        #pragma pack(push, 1)
        class CCitadelHideoutInteractableTrigger : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad09d8[0x8]; // 0x9d8
            source2sdk::entity2::CEntityIOOutput m_OnInteracted; // 0x9e0            
            // metadata: MNetworkEnable
            CUtlString m_strInteractLocString; // 0xa08            
            // metadata: MNetworkEnable
            source2sdk::client::EHideoutButtonAction m_eHideoutAction; // 0xa10            
            uint8_t _pad0a14[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHideoutInteractableTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelHideoutInteractableTrigger) == 0xa18);
    };
};
