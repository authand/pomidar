#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf28
        // Has VTable
        #pragma pack(push, 1)
        class CAI_BaseNPCGraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_sCurrScheduleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<CGlobalSymbol> m_sCurrScheduleName;
            char m_sCurrScheduleName[0x20]; // 0x368            
            // m_sCurrTaskName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<CGlobalSymbol> m_sCurrTaskName;
            char m_sCurrTaskName[0x20]; // 0x388            
            // m_sTaskHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sTaskHandshakeType;
            char m_sTaskHandshakeType[0x28]; // 0x3a8            
            // m_sTaskHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<CGlobalSymbol> m_sTaskHandshakeTypeShared;
            char m_sTaskHandshakeTypeShared[0x20]; // 0x3d0            
            // m_bTaskHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bTaskHandshakeRestart;
            char m_bTaskHandshakeRestart[0x18]; // 0x3f0            
            // m_sMovementHandshakeType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementHandshakeType;
            char m_sMovementHandshakeType[0x28]; // 0x408            
            // m_sMovementHandshakeTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<CGlobalSymbol> m_sMovementHandshakeTypeShared;
            char m_sMovementHandshakeTypeShared[0x20]; // 0x430            
            // m_bMovementHandshakeRestart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bMovementHandshakeRestart;
            char m_bMovementHandshakeRestart[0x18]; // 0x450            
            // m_sNavLinkType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sNavLinkType;
            char m_sNavLinkType[0x28]; // 0x468            
            // m_sNavLinkTypeShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<CGlobalSymbol> m_sNavLinkTypeShared;
            char m_sNavLinkTypeShared[0x20]; // 0x490            
            // m_flPathDistanceToNavLink has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flPathDistanceToNavLink;
            char m_flPathDistanceToNavLink[0x20]; // 0x4b0            
            // m_bNavLinkIsOnPath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bNavLinkIsOnPath;
            char m_bNavLinkIsOnPath[0x20]; // 0x4d0            
            // m_vecNavLinkTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vecNavLinkTarget;
            char m_vecNavLinkTarget[0x20]; // 0x4f0            
            // m_vecNavLinkUp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vecNavLinkUp;
            char m_vecNavLinkUp[0x20]; // 0x510            
            // m_vMovementStopFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementStopFacePosition;
            char m_vMovementStopFacePosition[0x20]; // 0x530            
            // m_vMovementHopFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementHopFacePosition;
            char m_vMovementHopFacePosition[0x20]; // 0x550            
            // m_vMovementStopPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementStopPosition;
            char m_vMovementStopPosition[0x20]; // 0x570            
            // m_vMovementStartFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementStartFacePosition;
            char m_vMovementStartFacePosition[0x20]; // 0x590            
            // m_vMovementIdleTurnFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementIdleTurnFacePosition;
            char m_vMovementIdleTurnFacePosition[0x20]; // 0x5b0            
            // m_vMovementPlantedTurnFacePosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementPlantedTurnFacePosition;
            char m_vMovementPlantedTurnFacePosition[0x20]; // 0x5d0            
            // m_vMovementDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementDirection;
            char m_vMovementDirection[0x20]; // 0x5f0            
            // m_vMovementCustomTargetPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementCustomTargetPosition;
            char m_vMovementCustomTargetPosition[0x20]; // 0x610            
            // m_vMovementMantleTargetPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vMovementMantleTargetPosition;
            char m_vMovementMantleTargetPosition[0x20]; // 0x630            
            // m_bMovementCodeDriven has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bMovementCodeDriven;
            char m_bMovementCodeDriven[0x20]; // 0x650            
            // m_bMovementOnGround has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bMovementOnGround;
            char m_bMovementOnGround[0x20]; // 0x670            
            // m_bMovementShouldMove has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bMovementShouldMove;
            char m_bMovementShouldMove[0x20]; // 0x690            
            // m_bMovementCustomFromMovement has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bMovementCustomFromMovement;
            char m_bMovementCustomFromMovement[0x20]; // 0x6b0            
            // m_flMovementLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMovementLean;
            char m_flMovementLean[0x20]; // 0x6d0            
            // m_flMovementDesiredHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMovementDesiredHeading;
            char m_flMovementDesiredHeading[0x20]; // 0x6f0            
            // m_flMovementDesiredHeadingDelta has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMovementDesiredHeadingDelta;
            char m_flMovementDesiredHeadingDelta[0x20]; // 0x710            
            // m_flMovementHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMovementHeading;
            char m_flMovementHeading[0x20]; // 0x730            
            // m_flMovementStopDesiredHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMovementStopDesiredHeading;
            char m_flMovementStopDesiredHeading[0x20]; // 0x750            
            // m_flMovementTargetSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMovementTargetSpeed;
            char m_flMovementTargetSpeed[0x20]; // 0x770            
            // m_flMovementCurrentSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMovementCurrentSpeed;
            char m_flMovementCurrentSpeed[0x20]; // 0x790            
            // m_sMovementHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementHeading;
            char m_sMovementHeading[0x28]; // 0x7b0            
            // m_sMovementDesiredHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementDesiredHeading;
            char m_sMovementDesiredHeading[0x28]; // 0x7d8            
            // m_sMovementStopType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementStopType;
            char m_sMovementStopType[0x28]; // 0x800            
            // m_sMovementState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementState;
            char m_sMovementState[0x28]; // 0x828            
            // m_sMovementHandshakeState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementHandshakeState;
            char m_sMovementHandshakeState[0x28]; // 0x850            
            // m_sMovementBadZoneState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementBadZoneState;
            char m_sMovementBadZoneState[0x28]; // 0x878            
            // m_sMovementStrafingState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementStrafingState;
            char m_sMovementStrafingState[0x28]; // 0x8a0            
            // m_sMovementCustom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementCustom;
            char m_sMovementCustom[0x28]; // 0x8c8            
            // m_sMovementCustomShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sMovementCustomShared;
            char m_sMovementCustomShared[0x28]; // 0x8f0            
            CAnimGraphTagOptionalRef m_sMovementStateMachineActive; // 0x918            
            CAnimGraphTagOptionalRef m_sMovementStopsEnabled; // 0x930            
            CAnimGraphTagOptionalRef m_sMovementInstantStopsEnabled; // 0x948            
            CAnimGraphTagOptionalRef m_sMovementStartsEnabled; // 0x960            
            CAnimGraphTagOptionalRef m_sMovementIdleTurnsEnabled; // 0x978            
            CAnimGraphTagOptionalRef m_sMovementHopsEnabled; // 0x990            
            CAnimGraphTagOptionalRef m_sMovementPlantedTurnsEnabled; // 0x9a8            
            CAnimGraphTagOptionalRef m_sMovementStumbleEnabled; // 0x9c0            
            CAnimGraphTagOptionalRef m_sMovementLookBackEnabled; // 0x9d8            
            CAnimGraphTagOptionalRef m_sMovementBashEnabled; // 0x9f0            
            CAnimGraphTagOptionalRef m_sMovementStrafeSupported; // 0xa08            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockAll; // 0xa20            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdle; // 0xa38            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockLoop; // 0xa50            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockIdleTurn; // 0xa68            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockStart; // 0xa80            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockStop; // 0xa98            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockHop; // 0xab0            
            CAnimGraphTagOptionalRef m_sMovementTransitionBlockPlantedTurn; // 0xac8            
            CAnimGraphTagOptionalRef m_sMovementRightFootDown; // 0xae0            
            CAnimGraphTagOptionalRef m_sMovementLeftFootDown; // 0xaf8            
            CAnimGraphTagOptionalRef m_sMovementRightBadZonePassAllowed; // 0xb10            
            CAnimGraphTagOptionalRef m_sMovementLeftBadZonePassAllowed; // 0xb28            
            // m_flEnemyDistance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flEnemyDistance;
            char m_flEnemyDistance[0x20]; // 0xb40            
            // m_flEnemyDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flEnemyDirection;
            char m_flEnemyDirection[0x20]; // 0xb60            
            // m_bCanSeeEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bCanSeeEnemy;
            char m_bCanSeeEnemy[0x20]; // 0xb80            
            // m_bEnemyFacingMe has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bEnemyFacingMe;
            char m_bEnemyFacingMe[0x20]; // 0xba0            
            // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHitTrigger;
            char m_bHitTrigger[0x20]; // 0xbc0            
            // m_vecHitDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vecHitDirection;
            char m_vecHitDirection[0x20]; // 0xbe0            
            // m_flHitHeading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flHitHeading;
            char m_flHitHeading[0x20]; // 0xc00            
            // m_vecHitOffset has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vecHitOffset;
            char m_vecHitOffset[0x20]; // 0xc20            
            // m_flHitStrength has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flHitStrength;
            char m_flHitStrength[0x20]; // 0xc40            
            // m_pszHitDamageType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_pszHitDamageType;
            char m_pszHitDamageType[0x28]; // 0xc60            
            // m_pszDeathHitLocation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_pszDeathHitLocation;
            char m_pszDeathHitLocation[0x28]; // 0xc88            
            // m_nHitBone has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<std::int32_t> m_nHitBone;
            char m_nHitBone[0x20]; // 0xcb0            
            // m_pszNPCState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_pszNPCState;
            char m_pszNPCState[0x28]; // 0xcd0            
            // m_bStunned has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bStunned;
            char m_bStunned[0x20]; // 0xcf8            
            // m_bLookTargetChargedAutoclear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bLookTargetChargedAutoclear;
            char m_bLookTargetChargedAutoclear[0x20]; // 0xd18            
            // m_sBodyIdle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sBodyIdle;
            char m_sBodyIdle[0x28]; // 0xd38            
            // m_sFlashlightMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sFlashlightMode;
            char m_sFlashlightMode[0x28]; // 0xd60            
            // m_sFacingReason has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_sFacingReason;
            char m_sFacingReason[0x28]; // 0xd88            
            CAnimGraphTagOptionalRef m_sFacingModeUsePath; // 0xdb0            
            // m_flFlightSpeedNormalized has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flFlightSpeedNormalized;
            char m_flFlightSpeedNormalized[0x20]; // 0xdc8            
            CAnimGraphTagOptionalRef m_sAllowMovementOffPath; // 0xde8            
            CAnimGraphTagOptionalRef m_sKeepPathActiveStop; // 0xe00            
            // m_bMoveSolveNudgeActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bMoveSolveNudgeActive;
            char m_bMoveSolveNudgeActive[0x20]; // 0xe18            
            // m_flMoveSolveNudgeYaw has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMoveSolveNudgeYaw;
            char m_flMoveSolveNudgeYaw[0x20]; // 0xe38            
            // m_pszDoorOpenAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_pszDoorOpenAction;
            char m_pszDoorOpenAction[0x28]; // 0xe58            
            // m_flDistanceToDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flDistanceToDoor;
            char m_flDistanceToDoor[0x20]; // 0xe80            
            // m_bDoorLeft has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bDoorLeft;
            char m_bDoorLeft[0x20]; // 0xea0            
            // m_flBlinkAmount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flBlinkAmount;
            char m_flBlinkAmount[0x20]; // 0xec0            
            // m_bEnemyInVehicle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bEnemyInVehicle;
            char m_bEnemyInVehicle[0x20]; // 0xee0            
            // m_eVehicleMeleeSide has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<CGlobalSymbol> m_eVehicleMeleeSide;
            char m_eVehicleMeleeSide[0x28]; // 0xf00            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPCGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAI_BaseNPCGraphController) == 0xf28);
    };
};
