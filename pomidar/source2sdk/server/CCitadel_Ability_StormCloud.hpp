#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flFloat"
        // static metadata: MNetworkVarNames "int m_nLightningStrikesRemaining"
        #pragma pack(push, 1)
        class CCitadel_Ability_StormCloud : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nTargetingParticleIndex; // 0xba0            
            uint8_t _pad0ba4[0x1c4]; // 0xba4
            // metadata: MNetworkEnable
            float m_flFloat; // 0xd68            
            // metadata: MNetworkEnable
            std::int32_t m_nLightningStrikesRemaining; // 0xd6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_StormCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_StormCloud) == 0xd70);
    };
};
