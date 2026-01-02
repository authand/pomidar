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
        // Size: 0xf68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flFloat"
        // static metadata: MNetworkVarNames "int m_nLightningStrikesRemaining"
        #pragma pack(push, 1)
        class CCitadel_Ability_StormCloud : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nTargetingParticleIndex; // 0xd90            
            uint8_t _pad0d94[0x1c4]; // 0xd94
            // metadata: MNetworkEnable
            float m_flFloat; // 0xf58            
            // metadata: MNetworkEnable
            std::int32_t m_nLightningStrikesRemaining; // 0xf5c            
            uint8_t _pad0f60[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_StormCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_StormCloud) == 0xf68);
    };
};
