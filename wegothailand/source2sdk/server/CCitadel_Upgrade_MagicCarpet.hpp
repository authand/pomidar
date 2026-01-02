#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xc38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bFlying"
        // static metadata: MNetworkVarNames "bool m_bSummoning"
        #pragma pack(push, 1)
        class CCitadel_Upgrade_MagicCarpet : public source2sdk::server::CCitadel_Item
        {
        public:
            source2sdk::entity2::GameTime_t m_flFlyingStartTime; // 0xba8            
            uint8_t _pad0bac[0x84]; // 0xbac
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bFlying; // 0xc30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSummoning; // 0xc31            
            uint8_t _pad0c32[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Upgrade_MagicCarpet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Upgrade_MagicCarpet) == 0xc38);
    };
};
