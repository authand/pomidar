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
        // Size: 0x158
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HoldingGoldenIdol : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c8[0x80]; // 0xc8
            source2sdk::client::ParticleIndex_t m_iIdolParticle; // 0x148            
            std::int32_t m_nGoldValue; // 0x14c            
            bool m_bRevealed; // 0x150            
            uint8_t _pad0151[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HoldingGoldenIdol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HoldingGoldenIdol) == 0x158);
    };
};
