#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/StanceType_t.hpp"
#include "source2sdk/server/AI_NavGoalFlags_t.hpp"
#include "source2sdk/server/CRelativeLocation.hpp"
#include "source2sdk/server/GoalType_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Standard-layout class: true
        // Size: 0xb8
        #pragma pack(push, 1)
        struct AI_NavGoal_t
        {
        public:
            uint8_t _pad0000[0x18]; // 0x0
            source2sdk::server::GoalType_t m_type; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            source2sdk::server::CRelativeLocation m_navLocation; // 0x20            
            float m_flGoalBlockedTolerance; // 0x60            
            float m_flPathEndGoalRange; // 0x64            
            float m_flPathEndGoalRange_Repathing; // 0x68            
            source2sdk::server::AI_NavGoalFlags_t m_goalFlags; // 0x6c            
            // m_pTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pTarget;
            char m_pTarget[0x4]; // 0x70            
            Vector m_vThreatPos; // 0x74            
            float m_flMaxPathLength; // 0x80            
            float m_flMaxTravelDist; // 0x84            
            float m_flMaxTravelDistAdditionalFromRepath; // 0x88            
            uint8_t _pad008c[0x4]; // 0x8c
            CUtlString m_markupTagRequired; // 0x90            
            Vector m_vArrivalDirection; // 0x98            
            float m_flArrivalDirectionToleranceDot; // 0xa4            
            float m_flGoalArrivalTolerance; // 0xa8            
            source2sdk::client::StanceType_t m_eArrivalStance; // 0xac            
            float m_flArrivalFlyingSpeedScale; // 0xb0            
            uint8_t _pad00b4[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_type) == 0x18);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_navLocation) == 0x20);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flGoalBlockedTolerance) == 0x60);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flPathEndGoalRange) == 0x64);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flPathEndGoalRange_Repathing) == 0x68);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_goalFlags) == 0x6c);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_pTarget) == 0x70);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_vThreatPos) == 0x74);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flMaxPathLength) == 0x80);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flMaxTravelDist) == 0x84);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flMaxTravelDistAdditionalFromRepath) == 0x88);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_markupTagRequired) == 0x90);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_vArrivalDirection) == 0x98);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flArrivalDirectionToleranceDot) == 0xa4);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flGoalArrivalTolerance) == 0xa8);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_eArrivalStance) == 0xac);
        static_assert(offsetof(source2sdk::server::AI_NavGoal_t, m_flArrivalFlyingSpeedScale) == 0xb0);
        
        static_assert(sizeof(source2sdk::server::AI_NavGoal_t) == 0xb8);
    };
};
