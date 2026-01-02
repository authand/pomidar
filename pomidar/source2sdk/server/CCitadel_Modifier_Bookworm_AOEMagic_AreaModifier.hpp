#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x298
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_hAOEWarningParticle; // 0xc8            
            uint8_t _pad00cc[0x1c4]; // 0xcc
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0x290            
            uint8_t _pad0294[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier) == 0x298);
    };
};
