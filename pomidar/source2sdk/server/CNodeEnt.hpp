#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HullFlags_t.hpp"
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
#include "source2sdk/server/HintNodeData.hpp"

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
        // Size: 0x548
        // Has VTable
        #pragma pack(push, 1)
        class CNodeEnt : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            bool m_bDontDropNode; // 0x4f0            
            source2sdk::client::HullFlags_t m_HullForceFlags; // 0x4f1            
            uint8_t _pad04fb[0x5]; // 0x4fb
            source2sdk::server::HintNodeData m_NodeData; // 0x500            
            uint8_t _pad0540[0x8];
            
            // Datamap fields:
            // void m_pKeyValuesCopy; // 0x540
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNodeEnt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNodeEnt) == 0x548);
    };
};
