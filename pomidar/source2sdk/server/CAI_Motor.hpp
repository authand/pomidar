#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph.hpp"
#include "source2sdk/server/CAI_MotorNavLink.hpp"
#include "source2sdk/server/CAI_MotorTransition.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x7a0
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Motor : public source2sdk::client::CAI_Component
        {
        public:
            uint8_t _pad0040[0x10]; // 0x40
            float m_flMoveInterval; // 0x50            
            float m_flYawSpeed; // 0x54            
            Vector m_vMoveVel; // 0x58            
            Vector m_vMoveVelNavigation; // 0x64            
            Vector m_vecAngularVelocity; // 0x70            
            source2sdk::client::CSimpleSimTimer m_timerFloorPointCached; // 0x7c            
            Vector m_vFloorPointCached; // 0x84            
            bool m_bFloorPointCachingEnabled; // 0x90            
            bool m_bAllowFlyingAnimMovement; // 0x91            
            uint8_t _pad0092[0x2a]; // 0x92
            float m_flSpeed; // 0xbc            
            bool m_bMovementActive; // 0xc0            
            uint8_t _pad00c1[0x3]; // 0xc1
            Vector m_vBoundaryDistCachedPos; // 0xc4            
            float m_flBoundaryDistCached; // 0xd0            
            uint8_t _pad00d4[0x4]; // 0xd4
            source2sdk::server::CAI_MotorNavLink m_motorNavLink; // 0xd8            
            source2sdk::server::CAI_MotorTransition m_motorTransition; // 0x150            
            uint8_t _pad01b8[0x8]; // 0x1b8
            source2sdk::server::CAI_MotorGroundAnimGraph m_motorGroundAnimgraph; // 0x1c0            
            uint8_t _pad0650[0x130]; // 0x650
            bool m_bIsExecutingMoveSolve; // 0x780            
            uint8_t _pad0781[0x1f];
            
            // Datamap fields:
            // void m_vecAnimPathWaypoints; // 0x788
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Motor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Motor) == 0x7a0);
    };
};
