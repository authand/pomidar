#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"

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
        // Size: 0x11d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        class CNPC_Tier2_VData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CNPC_Tier2_VData) == 0x11d8);
    };
};
