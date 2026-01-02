#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_FollowEntityDirection_t.hpp"
#include "source2sdk/server/CFuncMover_Move_t.hpp"
#include "source2sdk/server/CFuncMover_OrientationUpdate_t.hpp"
#include "source2sdk/server/CFuncMover_TransitionToPathNodeAction_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CMoverPathNode;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Size: 0xab8
        // Has VTable
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x808            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x810            
            uint8_t _pad0814[0x4]; // 0x814
            CUtlSymbolLarge m_iszPathNodeStart; // 0x818            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x820            
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x828            
            bool m_bIsReversing; // 0x82c            
            uint8_t _pad082d[0x3]; // 0x82d
            Vector m_vTarget; // 0x830            
            float m_flStartSpeed; // 0x83c            
            float m_flPathLocation; // 0x840            
            float m_flT; // 0x844            
            std::int32_t m_nCurrentNodeIndex; // 0x848            
            std::int32_t m_nPreviousNodeIndex; // 0x84c            
            source2sdk::client::SolidType_t m_eSolidType; // 0x850            
            bool m_bIsMoving; // 0x851            
            uint8_t _pad0852[0x2]; // 0x852
            float m_flTimeToReachMaxSpeed; // 0x854            
            float m_flDistanceToReachMaxSpeed; // 0x858            
            float m_flTimeToReachZeroSpeed; // 0x85c            
            float m_flDistanceToReachZeroSpeed; // 0x860            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x864            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x868            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x86c            
            float m_flPathLocationToBeginStop; // 0x870            
            uint8_t _pad0874[0x4]; // 0x874
            CUtlSymbolLarge m_iszStartForwardSound; // 0x878            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x880            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x888            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x890            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x898            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x8a0            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x8a8            
            uint8_t _pad08b0[0x18]; // 0x8b0
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x8c8            
            bool m_bStartAtClosestPoint; // 0x8f0            
            bool m_bStartAtEnd; // 0x8f1            
            uint8_t _pad08f2[0x2]; // 0x8f2
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x8f4            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x8f8            
            float m_flTimeToBlendToNewOrientation; // 0x8fc            
            float m_flDurationBlendToNewOrientationRan; // 0x900            
            std::int32_t m_nOriginalOrientationIndex; // 0x904            
            bool m_bCreateMovableNavMesh; // 0x908            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x909            
            uint8_t _pad090a[0x6]; // 0x90a
            source2sdk::entity2::CEntityIOOutput m_OnNodePassed; // 0x910            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x938            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x940            
            float m_flTimeToTraverseToNextNode; // 0x944            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x948            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x954            
            float m_flLerpToPositionT; // 0x960            
            float m_flLerpToPositionDeltaT; // 0x964            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x968            
            bool m_bIsPaused; // 0x990            
            uint8_t _pad0991[0x3]; // 0x991
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x994            
            std::int32_t m_nDelayedTeleportToNode; // 0x998            
            bool m_bIsVerboseLogging; // 0x99c            
            uint8_t _pad099d[0x3]; // 0x99d
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x4]; // 0x9a0            
            float m_flFollowDistance; // 0x9a4            
            float m_flFollowMinimumSpeed; // 0x9a8            
            float m_flCurFollowEntityT; // 0x9ac            
            float m_flCurFollowSpeed; // 0x9b0            
            uint8_t _pad09b4[0x4]; // 0x9b4
            CUtlSymbolLarge m_strOrientationFaceEntityName; // 0x9b8            
            // m_hOrientationFaceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationFaceEntity;
            char m_hOrientationFaceEntity[0x4]; // 0x9c0            
            uint8_t _pad09c4[0x4]; // 0x9c4
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x9c8            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x9f0            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0xa18            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0xa40            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0xa68            
            bool m_bNextNodeReturnsCurrent; // 0xa90            
            bool m_bStartedMoving; // 0xa91            
            uint8_t _pad0a92[0x1e]; // 0xa92
            source2sdk::server::CFuncMover_FollowEntityDirection_t m_eFollowEntityDirection; // 0xab0            
            uint8_t _pad0ab4[0x4];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputToggleDirection; // 0x0
            // void InputPause; // 0x0
            // void InputUnpause; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedImmediate; // 0x0
            // float InputSetTimeToReachMaxSpeed; // 0x0
            // float InputSetTimeToBlendToNewOrientation; // 0x0
            // int32_t InputSetOrientationMode; // 0x0
            // CUtlSymbolLarge InputSetFollowEntity; // 0x0
            // CUtlSymbolLarge InputSetFollowEntityForward; // 0x0
            // CUtlSymbolLarge InputSetFollowEntityReverse; // 0x0
            // CUtlSymbolLarge InputSetFaceEntity; // 0x0
            // float InputSetFollowDistance; // 0x0
            // float InputSetFollowMinimumSpeed; // 0x0
            // float InputSetTimeToTraverseToNextNode; // 0x0
            // void CFuncMoverMoveThink; // 0x0
            // void CFuncMoverLerpToNewPosition; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xab8);
    };
};
