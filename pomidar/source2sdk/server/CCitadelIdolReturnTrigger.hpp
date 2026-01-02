#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CTriggerModifier.hpp"

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
        // Size: 0xa20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        #pragma pack(push, 1)
        class CCitadelIdolReturnTrigger : public source2sdk::server::CTriggerModifier
        {
        public:
            uint8_t _pad09e8[0x18]; // 0x9e8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa00            
            uint8_t _pad0a18[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelIdolReturnTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelIdolReturnTrigger) == 0xa20);
    };
};
