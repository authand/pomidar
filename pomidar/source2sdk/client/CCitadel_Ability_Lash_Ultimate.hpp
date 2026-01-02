#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseLockonAbility.hpp"
#include "source2sdk/client/ELashGrappleState.hpp"
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
        // Size: 0x1120
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ELashGrappleState m_EGrappleState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBoostEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Lash_Ultimate : public source2sdk::client::CCitadelBaseLockonAbility
        {
        public:
            uint8_t _pad0f88[0x2]; // 0xf88
            // metadata: MNetworkEnable
            source2sdk::client::ELashGrappleState m_EGrappleState; // 0xf8a            
            uint8_t _pad0f8b[0x1]; // 0xf8b
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0xf8c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0xf90            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBoostEndTime; // 0xf94            
            uint8_t _pad0f98[0x188];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Lash_Ultimate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Lash_Ultimate) == 0x1120);
    };
};
