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
        // Size: 0x280
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_VoidSphere : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bTeleported; // 0xc8            
            uint8_t _pad00c9[0x3]; // 0xc9
            source2sdk::client::ParticleIndex_t m_particleStart; // 0xcc            
            source2sdk::client::ParticleIndex_t m_particleEnd; // 0xd0            
            source2sdk::client::ParticleIndex_t m_particleTrail; // 0xd4            
            Vector m_vecEndLocation; // 0xd8            
            Vector m_vecStartPosition; // 0xe4            
            Vector m_vecEndLocationCaster; // 0xf0            
            uint8_t _pad00fc[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VoidSphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_VoidSphere) == 0x280);
    };
};
