#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x768
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Trooper_Damage_ReductionVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyDescription "How much should damage be reduced from players when enemy troopers are on your base? 0 is no reduction, 100 is complete reduction"
            // metadata: MPropertyAttributeRange "0 100"
            float m_flDamageReductionForTroopers; // 0x760            
            uint8_t _pad0764[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Trooper_Damage_ReductionVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Trooper_Damage_ReductionVData) == 0x768);
    };
};
