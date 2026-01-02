#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBreakableStageHelper.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0xb48
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        #pragma pack(push, 1)
        class CPropAnimatingBreakable : public source2sdk::server::CBaseAnimGraph
        {
        public:
            source2sdk::client::CBreakableStageHelper m_stages; // 0xab8            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xad0            
            source2sdk::entity2::CEntityIOOutput m_OnFinalBreak; // 0xaf8            
            source2sdk::entity2::CEntityIOOutput m_OnStageAdvanced; // 0xb20            
            
            // Datamap fields:
            // void InputNextBreakStage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropAnimatingBreakable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPropAnimatingBreakable) == 0xb48);
    };
};
