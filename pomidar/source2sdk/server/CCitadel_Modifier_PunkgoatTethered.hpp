#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x3a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatTethered : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_nRangeIndicatorCaster; // 0xc8            
            source2sdk::client::ParticleIndex_t m_nRangeIndicatorParent; // 0xcc            
            source2sdk::entity2::GameTime_t m_tLastLOSTime; // 0xd0            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xd4            
            uint8_t _pad00d8[0x2c0]; // 0xd8
            // m_hTetheredTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTetheredTo;
            char m_hTetheredTo[0x4]; // 0x398            
            uint8_t _pad039c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatTethered because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PunkgoatTethered) == 0x3a0);
    };
};
