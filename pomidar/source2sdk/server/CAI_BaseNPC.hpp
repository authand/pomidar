#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AILOD_t.hpp"
#include "source2sdk/client/CAI_ScheduleBits.hpp"
#include "source2sdk/client/CRandStopwatch.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/client/SquadSlotNPCEntry_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/CNPCPhysicsHull.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/CAI_Scheduler.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/CRelativeLocation.hpp"
#include "source2sdk/server/CUnreachableTargetList.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_AnimGraphServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_BehaviorHost;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_EnemyServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_FacingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Motor;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Navigator;
    };
};
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
        struct CBaseFilter;
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
        // Size: 0x1400
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "NPC_STATE m_NPCState"
        // static metadata: MNetworkVarNames "bool m_bFadeCorpse"
        // static metadata: MNetworkVarNames "bool m_bImportantRagdoll"
        #pragma pack(push, 1)
        class CAI_BaseNPC : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            uint8_t _pad0c10[0x10]; // 0xc10
            source2sdk::modellib::CNPCPhysicsHull m_currentNPCBasePhysicsHull; // 0xc20            
            bool m_bCheckContacts; // 0xc58            
            bool m_bForceDynamicHull; // 0xc59            
            uint8_t _pad0c5a[0x1e]; // 0xc5a
            source2sdk::server::CRelativeLocation m_lastNavLocation; // 0xc78            
            float m_flLastPositionTolerance; // 0xcb8            
            // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
            char m_hSynchronizedPrimaryNPC[0x4]; // 0xcbc            
            // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
            char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xcc0            
            // metadata: MNetworkEnable
            source2sdk::client::NPC_STATE m_NPCState; // 0xcd8            
            source2sdk::client::NPC_STATE m_nPreModifierNPCState; // 0xcdc            
            source2sdk::client::NPC_STATE m_IdealNPCState; // 0xce0            
            source2sdk::entity2::GameTime_t m_flLastStateChangeTime; // 0xce4            
            uint8_t _pad0ce8[0x8]; // 0xce8
            source2sdk::client::CAI_ScheduleBits m_Conditions; // 0xcf0            
            source2sdk::client::CAI_ScheduleBits m_NonGatherConditions; // 0xd14            
            source2sdk::client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xd38            
            bool m_bForceConditionsGather; // 0xd5c            
            bool m_bConditionsGathered; // 0xd5d            
            bool m_bDoPostRestoreRefindPath; // 0xd5e            
            uint8_t _pad0d5f[0x1]; // 0xd5f
            source2sdk::server::CAI_BehaviorHost* m_pBehaviorHost; // 0xd60            
            source2sdk::entity2::GameTime_t m_flBlinkTime; // 0xd68            
            uint8_t _pad0d6c[0x4]; // 0xd6c
            CGlobalSymbol m_sDeathAnim; // 0xd70            
            source2sdk::server::CAI_EnemyServices* m_pEnemyServices; // 0xd78            
            source2sdk::client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xd80            
            source2sdk::client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xd94            
            source2sdk::entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xd9c            
            bool m_bSkippedChooseEnemy; // 0xda0            
            bool m_bIgnoreUnseenEnemies; // 0xda1            
            uint8_t _pad0da2[0x2]; // 0xda2
            // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hEnemyFilter;
            char m_hEnemyFilter[0x4]; // 0xda4            
            CUtlSymbolLarge m_iszEnemyFilterName; // 0xda8            
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0xdb0            
            bool m_bClearTargetOnScheduleEnd; // 0xdb4            
            uint8_t _pad0db5[0x3]; // 0xdb5
            source2sdk::entity2::GameTime_t m_flSoundWaitTime; // 0xdb8            
            std::int32_t m_nSoundPriority; // 0xdbc            
            bool m_bSuppressFootsteps; // 0xdc0            
            uint8_t _pad0dc1[0x3]; // 0xdc1
            std::int32_t m_afCapability; // 0xdc4            
            uint8_t _pad0dc8[0x170]; // 0xdc8
            float m_flGroundSpeed; // 0xf38            
            source2sdk::entity2::GameTime_t m_lastTimeBashedObstacle; // 0xf3c            
            source2sdk::entity2::GameTime_t m_nextMantleTime; // 0xf40            
            source2sdk::entity2::GameTime_t m_flMoveWaitFinished; // 0xf44            
            // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOpeningDoor;
            char m_hOpeningDoor[0x4]; // 0xf48            
            uint8_t _pad0f4c[0x4]; // 0xf4c
            source2sdk::server::CUnreachableTargetList m_UnreachableTargets; // 0xf50            
            // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPathObstructor;
            char m_hPathObstructor[0x4]; // 0xf70            
            float m_flJumpMaxRise; // 0xf74            
            float m_flJumpMaxDrop; // 0xf78            
            float m_flJumpMaxDist; // 0xf7c            
            float m_flJumpMinDist; // 0xf80            
            uint8_t _pad0f84[0x4]; // 0xf84
            source2sdk::server::CAI_FacingServices* m_pFacingServices; // 0xf88            
            source2sdk::server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xf90            
            bool m_bAnimGraphIsAnimatingDeath; // 0xf98            
            bool m_bDeferredNavigation; // 0xf99            
            uint8_t _pad0f9a[0x6]; // 0xf9a
            source2sdk::server::CAI_Scheduler m_Scheduler; // 0xfa0            
            source2sdk::server::CAI_Navigator* m_pNavigatorNavmesh; // 0x1048            
            uint8_t _pad1050[0x18]; // 0x1050
            source2sdk::server::CAI_Motor* m_pMotor; // 0x1068            
            source2sdk::entity2::GameTime_t m_flTimeLastMovement; // 0x1070            
            source2sdk::entity2::GameTime_t m_flTimeLastFootstep; // 0x1074            
            source2sdk::server::AI_VolumetricEventHandle_t m_hFootstepEvent; // 0x1078            
            source2sdk::client::CSimpleSimTimer m_CheckOnGroundTimer; // 0x1080            
            CUtlSymbolLarge m_strNavRestrictionVolume; // 0x1088            
            std::int32_t m_afMemory; // 0x1090            
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x1094            
            source2sdk::entity2::GameTime_t m_flLastTookDamageTime; // 0x1098            
            source2sdk::entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0x109c            
            Vector m_vecLastTookDamageAttackVector; // 0x10a0            
            uint8_t _pad10ac[0x4]; // 0x10ac
            CUtlSymbolLarge m_iszSquadName; // 0x10b0            
            // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
            char m_vecMySquadSlots[0x18]; // 0x10b8            
            uint8_t _pad10d0[0x8]; // 0x10d0
            std::int32_t m_nPrevHealthDuringModifyDamage; // 0x10d8            
            uint8_t _pad10dc[0x4]; // 0x10dc
            // metadata: MNetworkEnable
            bool m_bFadeCorpse; // 0x10e0            
            // metadata: MNetworkEnable
            bool m_bImportantRagdoll; // 0x10e1            
            uint8_t _pad10e2[0x6]; // 0x10e2
            source2sdk::client::CTakeDamageResult m_deathBlowResult; // 0x10e8            
            bool m_bDidDeathCleanup; // 0x1108            
            bool m_bReceivedEnemyDeadNotification; // 0x1109            
            uint8_t _pad110a[0x2]; // 0x110a
            source2sdk::entity2::GameTime_t m_flWaitFinished; // 0x110c            
            bool m_fNoDamageDecal; // 0x1110            
            uint8_t _pad1111[0x7]; // 0x1111
            // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>>* m_pVecAttachments;
            char m_pVecAttachments[0x8]; // 0x1118            
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x1120            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0x1148            
            source2sdk::entity2::CEntityIOOutput m_OnDeath; // 0x1170            
            source2sdk::entity2::CEntityIOOutput m_OnQuarterHealth; // 0x1198            
            source2sdk::entity2::CEntityIOOutput m_OnHalfHealth; // 0x11c0            
            source2sdk::entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0x11e8            
            // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnFoundEnemy;
            char m_OnFoundEnemy[0x28]; // 0x1210            
            source2sdk::entity2::CEntityIOOutput m_OnLostEnemy; // 0x1238            
            source2sdk::entity2::CEntityIOOutput m_OnLostPlayer; // 0x1260            
            source2sdk::entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x1288            
            source2sdk::entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x12b0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x12d8            
            source2sdk::entity2::CEntityIOOutput m_OnUse; // 0x1300            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x1328            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x1350            
            source2sdk::entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x1378            
            source2sdk::entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x13a0            
            std::uint64_t m_nAITraceMask; // 0x13c8            
            bool m_bDynamicAILOD; // 0x13d0            
            uint8_t _pad13d1[0x3]; // 0x13d1
            source2sdk::client::AILOD_t m_aiLOD; // 0x13d4            
            float m_flThinkTime; // 0x13d8            
            uint8_t _pad13dc[0x1c]; // 0x13dc
            std::int32_t m_nDebugCurIndex; // 0x13f8            
            uint8_t _pad13fc[0x4];
            
            // Datamap fields:
            // CAI_Senses m_pSenses; // 0xce8
            // void m_pSquad; // 0x10d0
            // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
            // void m_vecTaskThinkTimes; // 0x13e0
            // CAI_Pathfinder m_pPathfinderNavmesh; // 0x1050
            // void m_hDamagedFX; // 0x10dc
            // CUtlSymbolLarge InputSetEnemyFilter; // 0x0
            // int32_t InputOverrideHealth; // 0x0
            // int32_t InputSetHealth; // 0x0
            // CUtlSymbolLarge InputSetSquad; // 0x0
            // CUtlSymbolLarge InputForgetEntity; // 0x0
            // void InputBreak; // 0x0
            // void InputGagEnable; // 0x0
            // void InputGagDisable; // 0x0
            // void InputInsideTransition; // 0x0
            // void InputOutsideTransition; // 0x0
            // CUtlSymbolLarge InputUpdateEnemyMemory; // 0x0
            // CUtlSymbolLarge InputSetNavRestrictionVolume; // 0x0
            // void CAI_BaseNPCCallNPCThink; // 0x0
            // void CAI_BaseNPCCallNPCPerTickThink; // 0x0
            // void CAI_BaseNPCBlinkThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_BaseNPC) == 0x1400);
    };
};
