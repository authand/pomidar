#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/client/ShotID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xf98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSplitShotActive"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_SplitShot : public source2sdk::client::CCitadel_Item
        {
        public:
            source2sdk::client::ShotID_t m_nLastShotID; // 0xd90            
            source2sdk::client::ShotID_t m_nLastHitShotID; // 0xd94            
            std::int32_t m_nWpnBatchCount; // 0xd98            
            uint8_t _pad0d9c[0x6c]; // 0xd9c
            source2sdk::client::ShotID_t m_nLastBulletHitShotID; // 0xe08            
            std::int32_t m_nLastBulletHitCount; // 0xe0c            
            // m_eLastBulletHitEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_eLastBulletHitEnt;
            char m_eLastBulletHitEnt[0x4]; // 0xe10            
            // metadata: MNetworkEnable
            bool m_bSplitShotActive; // 0xe14            
            uint8_t _pad0e15[0x183];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SplitShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_SplitShot) == 0xf98);
    };
};
