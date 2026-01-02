#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
        // Size: 0xcc0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flUpFactor"
        // static metadata: MNetworkVarNames "float m_flBounceVelocity"
        // static metadata: MNetworkVarNames "GameTime_t m_tDeactivationTime"
        #pragma pack(push, 1)
        class C_Citadel_Bounce_Pad : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flUpFactor; // 0xca0            
            // metadata: MNetworkEnable
            float m_flBounceVelocity; // 0xca4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDeactivationTime; // 0xca8            
            bool m_bDeactivated; // 0xcac            
            uint8_t _pad0cad[0x3]; // 0xcad
            float m_flBarrelBounceVelocity; // 0xcb0            
            float m_flBarrelUpFactor; // 0xcb4            
            bool m_bSpeedOnLand; // 0xcb8            
            bool m_bHasBouncedPlayerBefore; // 0xcb9            
            uint8_t _pad0cba[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Bounce_Pad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Bounce_Pad) == 0xcc0);
    };
};
