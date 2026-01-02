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
        // Size: 0x130
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Containment_Victim : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flGoalHeight; // 0xc8            
            float m_flFallRate; // 0xcc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xd0            
            source2sdk::client::ParticleIndex_t m_nFXIndexVictim; // 0xd4            
            source2sdk::client::ParticleIndex_t m_nChainFxIndex; // 0xd8            
            float m_flTetherRadius; // 0xdc            
            Vector m_vecOrigin; // 0xe0            
            uint8_t _pad00ec[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Containment_Victim because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Containment_Victim) == 0x130);
    };
};
