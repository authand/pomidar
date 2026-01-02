#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
        // Size: 0x428
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatSigilAura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            // m_vecHitUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitUnits;
            char m_vecHitUnits[0x18]; // 0x100            
            float m_flWaveRadius; // 0x118            
            source2sdk::client::ParticleIndex_t m_nWaveParticleEnemy; // 0x11c            
            source2sdk::client::ParticleIndex_t m_nWaveParticleFriendly; // 0x120            
            uint8_t _pad0124[0x304];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatSigilAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PunkgoatSigilAura) == 0x428);
    };
};
