#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelProjectile.hpp"
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
        // Size: 0xb48
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_BookwormDragon_Projectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            // m_vecHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitUnits;
            char m_vecHitUnits[0x18]; // 0x8e8            
            uint8_t _pad0900[0x248];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_BookwormDragon_Projectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_BookwormDragon_Projectile) == 0xb48);
    };
};
