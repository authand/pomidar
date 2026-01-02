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
        // Size: 0xf00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iShotsToCreate"
        // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_ExpressShot : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad0d90[0x140]; // 0xd90
            // metadata: MNetworkEnable
            std::int32_t m_iShotsToCreate; // 0xed0            
            // metadata: MNetworkEnable
            bool m_bIsInExpressShot; // 0xed4            
            uint8_t _pad0ed5[0x3]; // 0xed5
            source2sdk::entity2::GameTime_t m_tNextShotTime; // 0xed8            
            uint8_t _pad0edc[0x1c]; // 0xedc
            bool m_bIsPrimaryProc; // 0xef8            
            uint8_t _pad0ef9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_ExpressShot) == 0xf00);
    };
};
