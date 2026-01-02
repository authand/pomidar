#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xdd8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_nFastFireEndTime"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_BurstFire : public source2sdk::client::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_nFastFireEndTime; // 0xd90            
            uint8_t _pad0d94[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_BurstFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_BurstFire) == 0xdd8);
    };
};
