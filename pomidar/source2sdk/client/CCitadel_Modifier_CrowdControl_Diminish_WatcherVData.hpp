#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x770
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_CrowdControl_Diminish_WatcherVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            float m_flModifierWindow; // 0x760            
            float m_flReductionPerModifier; // 0x764            
            float m_flMaxReduction; // 0x768            
            uint8_t _pad076c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_CrowdControl_Diminish_WatcherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_CrowdControl_Diminish_WatcherVData) == 0x770);
    };
};
