#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
    };
};

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
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
        // static metadata: MNetworkVarNames "bool m_bFloating"
        #pragma pack(push, 1)
        class CCitadel_MobileResupply : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0c18[0x5c]; // 0xc18
            // metadata: MNetworkEnable
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0xc74            
            // metadata: MNetworkEnable
            bool m_bFloating; // 0xc78            
            uint8_t _pad0c79[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_MobileResupply because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_MobileResupply) == 0xc80);
    };
};
