#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelProjectile.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xb58
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_Projectile_Viscous_GooGrenade : public source2sdk::client::C_CitadelProjectile
        {
        public:
            std::int32_t m_nBounces; // 0xaf8            
            source2sdk::entity2::GameTime_t m_tNextDetonateTime; // 0xafc            
            // m_vecLastHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecLastHitTargets;
            char m_vecLastHitTargets[0x18]; // 0xb00            
            // m_vecProjectileHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecProjectileHitTargets;
            char m_vecProjectileHitTargets[0x18]; // 0xb18            
            uint8_t _pad0b30[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Projectile_Viscous_GooGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Projectile_Viscous_GooGrenade) == 0xb58);
    };
};
