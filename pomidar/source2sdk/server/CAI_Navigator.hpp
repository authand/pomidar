#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimTimer.hpp"
#include "source2sdk/client/StanceType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_NavGoal_t.hpp"
#include "source2sdk/server/AI_NavSetGoalFlags_t.hpp"
#include "source2sdk/server/CAI_WaypointList.hpp"
#include "source2sdk/server/CNavSmartGoalHelper.hpp"
#include "source2sdk/server/Navigation_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_Path;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x320
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Navigator : public source2sdk::client::CAI_Component
        {
        public:
            uint8_t _pad0040[0x8]; // 0x40
            float m_flGoalStoppingDistance; // 0x48            
            source2sdk::server::Navigation_t m_navType; // 0x4c            
            bool m_bNavComplete; // 0x50            
            uint8_t _pad0051[0x27]; // 0x51
            source2sdk::server::CAI_Path* m_pPath; // 0x78            
            // m_hLosTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLosTarget;
            char m_hLosTarget[0x4]; // 0x80            
            Vector m_vThreatPos; // 0x84            
            source2sdk::server::CAI_WaypointList m_interruptPathWaypoints; // 0x90            
            source2sdk::entity2::GameTime_t m_flLastSuccessfulSimplifyTime; // 0x98            
            source2sdk::entity2::GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x9c            
            source2sdk::entity2::GameTime_t m_flStartWaitingForFacingTime; // 0xa0            
            uint8_t _pad00a4[0x4]; // 0xa4
            source2sdk::server::AI_NavGoal_t m_queuedGoal; // 0xa8            
            source2sdk::server::AI_NavSetGoalFlags_t m_queuedGoalFlags; // 0x160            
            bool m_bQueuedGoalSuccess; // 0x164            
            uint8_t _pad0165[0x3]; // 0x165
            CGlobalSymbol m_sQueuedGoalName; // 0x168            
            bool m_bPeerMoveWait; // 0x170            
            uint8_t _pad0171[0x3]; // 0x171
            // m_hPeerWaitingOn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPeerWaitingOn;
            char m_hPeerWaitingOn[0x4]; // 0x174            
            source2sdk::client::CSimTimer m_PeerWaitMoveTimer; // 0x178            
            source2sdk::client::CSimTimer m_PeerWaitClearTimer; // 0x184            
            source2sdk::client::CSimTimer m_NextSidestepTimer; // 0x190            
            // m_hBigStepGroundEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBigStepGroundEnt;
            char m_hBigStepGroundEnt[0x4]; // 0x19c            
            // m_hLastBlockingEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastBlockingEnt;
            char m_hLastBlockingEnt[0x4]; // 0x1a0            
            Vector m_vPosBeginFailedSteer; // 0x1a4            
            source2sdk::entity2::GameTime_t m_timeBeginFailedSteer; // 0x1b0            
            std::int32_t m_nNavFailCounter; // 0x1b4            
            source2sdk::entity2::GameTime_t m_flLastNavFailTime; // 0x1b8            
            bool m_bShouldBruteForceFailedNav; // 0x1bc            
            bool m_bNavChangedAlongPath; // 0x1bd            
            uint8_t _pad01be[0x2]; // 0x1be
            std::int32_t m_nPreviousCollisionGroup; // 0x1c0            
            source2sdk::entity2::GameTime_t m_flLastNpcOverlapTime; // 0x1c4            
            float m_flGoalBlockedTolerance; // 0x1c8            
            float m_flWaypointBlockedTolerance; // 0x1cc            
            Vector m_vGoalDirection; // 0x1d0            
            // m_hGoalDirectionTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalDirectionTarget;
            char m_hGoalDirectionTarget[0x4]; // 0x1dc            
            float m_flGoalDirectionToleranceDot; // 0x1e0            
            float m_flGoalArrivalTolerance; // 0x1e4            
            source2sdk::client::StanceType_t m_eGoalStance; // 0x1e8            
            float m_flArrivalFlyingSpeedScale; // 0x1ec            
            float m_flPathEndGoalRange; // 0x1f0            
            float m_flPathEndGoalRange_Repathing; // 0x1f4            
            float m_flGoalMaxPathLength; // 0x1f8            
            float m_flGoalMaxTravelDist; // 0x1fc            
            CUtlString m_pathRestrictionTag; // 0x200            
            uint8_t _pad0208[0x18]; // 0x208
            source2sdk::server::CNavSmartGoalHelper m_smartGoalHelper; // 0x220            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Navigator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Navigator) == 0x320);
    };
};
