#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0xc30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nKillsEarned"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_GlassCannon : public source2sdk::server::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nKillsEarned; // 0xba8            
            uint8_t _pad0bac[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_GlassCannon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_GlassCannon) == 0xc30);
    };
};
