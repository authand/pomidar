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
        // Size: 0x170
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Mirage_SandPhantom : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_particleStart; // 0xc8            
            source2sdk::client::ParticleIndex_t m_particleEnd; // 0xcc            
            source2sdk::client::ParticleIndex_t m_particleTrail; // 0xd0            
            Vector m_vecStartPosition; // 0xd4            
            float m_flStartDelay; // 0xe0            
            Vector m_vecApplyOffset; // 0xe4            
            uint8_t _pad00f0[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_SandPhantom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Mirage_SandPhantom) == 0x170);
    };
};
