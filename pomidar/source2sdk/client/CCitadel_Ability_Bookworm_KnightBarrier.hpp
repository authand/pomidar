#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0xfa0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_KnightBarrier : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x200]; // 0xd90
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0xf90            
            std::int32_t m_iPendingBonusTargets; // 0xf94            
            uint8_t _pad0f98[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_KnightBarrier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bookworm_KnightBarrier) == 0xfa0);
    };
};
