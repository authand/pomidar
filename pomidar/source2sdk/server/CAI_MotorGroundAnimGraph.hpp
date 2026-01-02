#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CFloatExponentialMovingAverage.hpp"
#include "source2sdk/server/AI_MotorGroundAnimGraph_Flags_t.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Custom.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_CustomMantle.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Hop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Idle.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_IdleTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_InstantStop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Loop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Other.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_PlantedTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Start.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Stop.hpp"

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
        // Size: 0x490
        #pragma pack(push, 1)
        class CAI_MotorGroundAnimGraph
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x8            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x28            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x70            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0x98            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0xc0            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0x118            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x170            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Custom m_stateCustom; // 0x1c8            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_CustomMantle m_stateCustomMantle; // 0x240            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x270            
            source2sdk::server::CAI_MotorGroundAnimGraph_State_Other m_stateOther; // 0x298            
            uint8_t _pad02b8[0x18]; // 0x2b8
            std::int32_t m_nCurrentState; // 0x2d0            
            float m_flDistanceCoveredInCurrentState; // 0x2d4            
            bool m_bEnableStop; // 0x2d8            
            bool m_bEnableStart; // 0x2d9            
            bool m_bHadPath; // 0x2da            
            bool m_bEnableAdvancedFeatures; // 0x2db            
            bool m_bTeleported; // 0x2dc            
            uint8_t _pad02dd[0x3]; // 0x2dd
            source2sdk::server::AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x2e0            
            Vector m_vPreviousPosition; // 0x2e4            
            uint8_t _pad02f0[0x4]; // 0x2f0
            float m_flCurrentLean; // 0x2f4            
            RotationVector m_vDesiredMovementHeadingChangeVelocity; // 0x2f8            
            source2sdk::client::CFloatExponentialMovingAverage m_smoothedDesiredMoveHeading; // 0x304            
            uint8_t _pad0318[0x160]; // 0x318
            CMotionTransform m_proceduralRootMotion; // 0x478            
            uint8_t _pad0488[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorGroundAnimGraph) == 0x490);
    };
};
