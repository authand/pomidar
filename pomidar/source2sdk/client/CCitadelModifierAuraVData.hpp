#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/CModifierVData_BaseAura.hpp"
#include "source2sdk/client/ELOSCheck.hpp"

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
        // Size: 0x7b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierAuraVData : public source2sdk::client::CModifierVData_BaseAura
        {
        public:
            source2sdk::client::CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // 0x7a0            
            source2sdk::client::CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // 0x7a4            
            source2sdk::client::ELOSCheck m_eLosCheck; // 0x7a8            
            float m_flModifierProvidedByAuraDuration; // 0x7ac            
            bool m_bRemoveProvidedModifierOnAuraRemoval; // 0x7b0            
            uint8_t _pad07b1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierAuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifierAuraVData) == 0x7b8);
    };
};
