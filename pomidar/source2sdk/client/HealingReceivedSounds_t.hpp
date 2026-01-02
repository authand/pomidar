#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x40
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct HealingReceivedSounds_t
        {
        public:
            // metadata: MPropertyDescription "When healing in the base starts"
            CSoundEventName m_strHealingInBaseStart; // 0x0            
            // metadata: MPropertyDescription "While healing in the base"
            CSoundEventName m_strHealingInBaseLoop; // 0x10            
            // metadata: MPropertyDescription "When base healing has topped off the player"
            CSoundEventName m_strHealingInBaseToppedOff; // 0x20            
            // metadata: MPropertyDescription "A direct healing ability was applied to us"
            CSoundEventName m_strDirectHealing; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_strHealingInBaseStart) == 0x0);
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_strHealingInBaseLoop) == 0x10);
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_strHealingInBaseToppedOff) == 0x20);
        static_assert(offsetof(source2sdk::client::HealingReceivedSounds_t, m_strDirectHealing) == 0x30);
        
        static_assert(sizeof(source2sdk::client::HealingReceivedSounds_t) == 0x40);
    };
};
