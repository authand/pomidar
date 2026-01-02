#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xb30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vLaunchTarget"
        // static metadata: MNetworkVarNames "float m_flLaunchSpeed"
        #pragma pack(push, 1)
        class CCitadelCatapultTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0b10[0x4]; // 0xb10
            // metadata: MNetworkEnable
            Vector m_vLaunchTarget; // 0xb14            
            // metadata: MNetworkEnable
            float m_flLaunchSpeed; // 0xb20            
            uint8_t _pad0b24[0x4]; // 0xb24
            CUtlSymbolLarge m_nameTarget; // 0xb28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelCatapultTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelCatapultTrigger) == 0xb30);
    };
};
