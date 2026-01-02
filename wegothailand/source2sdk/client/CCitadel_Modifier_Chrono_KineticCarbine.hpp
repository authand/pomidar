#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelBulletTimeWarp;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x350
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Chrono_KineticCarbine : public source2sdk::client::CCitadelModifier
        {
        public:
            std::int32_t m_nBulletCount; // 0xc0            
            float m_flElapsedPct; // 0xc4            
            // m_hTimeWarp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadelBulletTimeWarp> m_hTimeWarp;
            char m_hTimeWarp[0x4]; // 0xc8            
            source2sdk::client::ParticleIndex_t m_nFullyChargedParticle; // 0xcc            
            uint8_t _pad00d0[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Chrono_KineticCarbine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Chrono_KineticCarbine) == 0x350);
    };
};
