#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/ModelChange_t.hpp"

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
        // Size: 0x870
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Nano_CatFormVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            source2sdk::client::ModelChange_t m_ModelChange; // 0x760            
            float m_flModelScale; // 0x848            
            uint8_t _pad084c[0x4]; // 0x84c
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_ExplodeSound; // 0x850            
            CSoundEventName m_ImpactSound; // 0x860            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Nano_CatFormVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Nano_CatFormVData) == 0x870);
    };
};
