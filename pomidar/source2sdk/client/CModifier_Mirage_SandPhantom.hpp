#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x168
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Mirage_SandPhantom : public source2sdk::client::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_particleStart; // 0xc0            
            source2sdk::client::ParticleIndex_t m_particleEnd; // 0xc4            
            source2sdk::client::ParticleIndex_t m_particleTrail; // 0xc8            
            Vector m_vecStartPosition; // 0xcc            
            float m_flStartDelay; // 0xd8            
            Vector m_vecApplyOffset; // 0xdc            
            uint8_t _pad00e8[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_SandPhantom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Mirage_SandPhantom) == 0x168);
    };
};
