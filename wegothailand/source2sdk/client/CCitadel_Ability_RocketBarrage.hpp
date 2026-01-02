#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1020
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBarrageEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_RocketBarrage : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flBarrageEndTime; // 0xd90            
            uint8_t _pad0da8[0x240]; // 0xda8
            float m_flCurrentTimeScale; // 0xfe8            
            Vector m_vecAimPos; // 0xfec            
            Vector m_vecAimVel; // 0xff8            
            source2sdk::entity2::GameTime_t m_flLastUpdateTime; // 0x1004            
            uint8_t _pad1008[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_RocketBarrage) == 0x1020);
    };
};
