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
        // Size: 0xd18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iShotsToCreate"
        // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_ExpressShot : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0ba8[0x140]; // 0xba8
            // metadata: MNetworkEnable
            std::int32_t m_iShotsToCreate; // 0xce8            
            // metadata: MNetworkEnable
            bool m_bIsInExpressShot; // 0xcec            
            uint8_t _pad0ced[0x3]; // 0xced
            source2sdk::entity2::GameTime_t m_tNextShotTime; // 0xcf0            
            uint8_t _pad0cf4[0x1c]; // 0xcf4
            bool m_bIsPrimaryProc; // 0xd10            
            uint8_t _pad0d11[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_ExpressShot) == 0xd18);
    };
};
