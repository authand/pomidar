#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Intrinsic_Base.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ConeWaveProjectile : public source2sdk::server::CCitadel_Modifier_Intrinsic_Base
        {
        public:
            uint8_t _pad00c8[0xc0]; // 0xc8
            Vector m_vInitialCastPosition; // 0x188            
            float m_flProjectileSpeed; // 0x194            
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0x198            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ConeWaveProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ConeWaveProjectile) == 0x1b0);
    };
};
