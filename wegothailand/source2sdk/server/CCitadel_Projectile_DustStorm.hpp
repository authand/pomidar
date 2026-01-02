#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelProjectile.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Ability_Dust_Storm;
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
        // Size: 0xaf0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_DustStorm : public source2sdk::server::CCitadelProjectile
        {
        public:
            std::int32_t m_cTicksNoMovement; // 0x8e8            
            // m_DustStormAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_Ability_Dust_Storm> m_DustStormAbility;
            char m_DustStormAbility[0x4]; // 0x8ec            
            uint8_t _pad08f0[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_DustStorm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_DustStorm) == 0xaf0);
    };
};
