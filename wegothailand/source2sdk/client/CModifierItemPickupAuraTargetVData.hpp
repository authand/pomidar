#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x778
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierItemPickupAuraTargetVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Timers"
            float m_PickupTimer; // 0x760            
            uint8_t _pad0764[0x4]; // 0x764
            // metadata: MPropertyGroupName "Modifiers"
            // m_PickupTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_PickupTimerModifier;
            char m_PickupTimerModifier[0x10]; // 0x768            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierItemPickupAuraTargetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierItemPickupAuraTargetVData) == 0x778);
    };
};
