#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModelEntity.hpp"

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
        // Size: 0x970
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkVarNames "bool m_bAllowRotatingUp"
        // static metadata: MNetworkVarNames "bool m_bFixedPosition"
        // static metadata: MNetworkVarNames "float m_flShieldOffset"
        #pragma pack(push, 1)
        class CCitadel_Shield : public source2sdk::server::CCitadelModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bAllowRotatingUp; // 0x968            
            // metadata: MNetworkEnable
            bool m_bFixedPosition; // 0x969            
            uint8_t _pad096a[0x2]; // 0x96a
            // metadata: MNetworkEnable
            float m_flShieldOffset; // 0x96c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Shield) == 0x970);
    };
};
