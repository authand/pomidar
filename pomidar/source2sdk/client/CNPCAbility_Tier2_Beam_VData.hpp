#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"

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
        // Size: 0x16f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPCAbility_Tier2_Beam_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CNPCAbility_Tier2_Beam_VData) == 0x16f8);
    };
};
