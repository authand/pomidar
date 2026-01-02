#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xc70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flParryStartTime"
        // static metadata: MNetworkVarNames "bool m_bAttackParried"
        // static metadata: MNetworkVarNames "GameTime_t m_flParrySuccessTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_MeleeParry : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nActiveFX; // 0xba0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flParryStartTime; // 0xba4            
            // metadata: MNetworkEnable
            bool m_bAttackParried; // 0xba8            
            uint8_t _pad0ba9[0x3]; // 0xba9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flParrySuccessTime; // 0xbac            
            uint8_t _pad0bb0[0xc0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_MeleeParry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_MeleeParry) == 0xc70);
    };
};
