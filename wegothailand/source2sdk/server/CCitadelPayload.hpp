#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"

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
        // Size: 0xc80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flProgress"
        // static metadata: MNetworkVarNames "int m_nNumPushers"
        #pragma pack(push, 1)
        class CCitadelPayload : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0c18[0x18]; // 0xc18
            // m_hPusherAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifierAura> m_hPusherAura;
            char m_hPusherAura[0x18]; // 0xc30            
            // m_hBlockerAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifierAura> m_hBlockerAura;
            char m_hBlockerAura[0x18]; // 0xc48            
            uint8_t _pad0c60[0x18]; // 0xc60
            // metadata: MNetworkEnable
            float m_flProgress; // 0xc78            
            // metadata: MNetworkEnable
            std::int32_t m_nNumPushers; // 0xc7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPayload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPayload) == 0xc80);
    };
};
