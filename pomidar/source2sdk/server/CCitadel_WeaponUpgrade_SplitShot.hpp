#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0xdb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSplitShotActive"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_SplitShot : public source2sdk::server::CCitadel_Item
        {
        public:
            source2sdk::client::ShotID_t m_nLastShotID; // 0xba8            
            source2sdk::client::ShotID_t m_nLastHitShotID; // 0xbac            
            std::int32_t m_nWpnBatchCount; // 0xbb0            
            uint8_t _pad0bb4[0x6c]; // 0xbb4
            source2sdk::client::ShotID_t m_nLastBulletHitShotID; // 0xc20            
            std::int32_t m_nLastBulletHitCount; // 0xc24            
            // m_eLastBulletHitEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_eLastBulletHitEnt;
            char m_eLastBulletHitEnt[0x4]; // 0xc28            
            // metadata: MNetworkEnable
            bool m_bSplitShotActive; // 0xc2c            
            uint8_t _pad0c2d[0x183];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SplitShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_SplitShot) == 0xdb0);
    };
};
