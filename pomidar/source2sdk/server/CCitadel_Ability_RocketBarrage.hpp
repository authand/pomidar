#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0xe30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBarrageEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_RocketBarrage : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flBarrageEndTime; // 0xba0            
            uint8_t _pad0bb8[0x240]; // 0xbb8
            float m_flCurrentTimeScale; // 0xdf8            
            Vector m_vecAimPos; // 0xdfc            
            Vector m_vecAimVel; // 0xe08            
            source2sdk::entity2::GameTime_t m_flLastUpdateTime; // 0xe14            
            uint8_t _pad0e18[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_RocketBarrage) == 0xe30);
    };
};
