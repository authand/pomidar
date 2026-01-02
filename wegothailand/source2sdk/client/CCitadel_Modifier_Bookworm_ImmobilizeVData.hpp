#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_RootVData.hpp"

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
        // Size: 0x778
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bookworm_ImmobilizeVData : public source2sdk::client::CCitadel_Modifier_RootVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float flMaxDrag; // 0x768            
            float flSpeedForNoDrag; // 0x76c            
            float flSpeedForMaxDrag; // 0x770            
            uint8_t _pad0774[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bookworm_ImmobilizeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Bookworm_ImmobilizeVData) == 0x778);
    };
};
