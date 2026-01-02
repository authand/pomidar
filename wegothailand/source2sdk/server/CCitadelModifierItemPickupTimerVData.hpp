#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x780
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelModifierItemPickupTimerVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyGroupName "Timers"
            float m_TimerToSilence; // 0x760            
            float m_SilenceDuration; // 0x764            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0x768            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bIsIdolPickup; // 0x778            
            uint8_t _pad0779[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierItemPickupTimerVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelModifierItemPickupTimerVData) == 0x780);
    };
};
