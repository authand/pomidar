#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_TrooperNeutral_GraphController.hpp"

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
        // Size: 0x10f8
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_TrooperNeutralNodeMover_GraphController : public source2sdk::server::CNPC_TrooperNeutral_GraphController
        {
        public:
            CAnimGraphTagRef m_sHidingInNode; // 0x10e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralNodeMover_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperNeutralNodeMover_GraphController) == 0x10f8);
    };
};
