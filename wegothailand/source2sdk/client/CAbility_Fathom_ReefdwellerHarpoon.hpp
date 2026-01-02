#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xf00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bBulletFlying"
        // static metadata: MNetworkVarNames "bool m_bHasLatchedOnce"
        // static metadata: MNetworkVarNames "bool m_bLatched"
        // static metadata: MNetworkVarNames "Vector m_vHarpoonTarget"
        // static metadata: MNetworkVarNames "float m_flLatchedYaw"
        // static metadata: MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStuckStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flReelStartTime"
        #pragma pack(push, 1)
        class CAbility_Fathom_ReefdwellerHarpoon : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bHitTarget; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            Vector m_vPrevPos; // 0xd94            
            // metadata: MNetworkEnable
            bool m_bBulletFlying; // 0xda0            
            // metadata: MNetworkEnable
            bool m_bHasLatchedOnce; // 0xda1            
            // metadata: MNetworkEnable
            bool m_bLatched; // 0xda2            
            uint8_t _pad0da3[0x1]; // 0xda3
            // metadata: MNetworkEnable
            Vector m_vHarpoonTarget; // 0xda4            
            // metadata: MNetworkEnable
            float m_flLatchedYaw; // 0xdb0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCloseEnoughStartTime; // 0xdb4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0xdb8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReelStartTime; // 0xdbc            
            uint8_t _pad0dc0[0x140];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fathom_ReefdwellerHarpoon) == 0xf00);
    };
};
