#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncRotator_Rotate_t.hpp"
#include "source2sdk/server/RotatorHistoryEntry_t.hpp"
#include "source2sdk/server/RotatorQueueEntry_t.hpp"
#include "source2sdk/server/RotatorTargetSpace_t.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa40
        // Has VTable
        #pragma pack(push, 1)
        class CFuncRotator : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hRotatorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRotatorTarget;
            char m_hRotatorTarget[0x4]; // 0x808            
            bool m_bIsRotating; // 0x80c            
            bool m_bIsReversing; // 0x80d            
            uint8_t _pad080e[0x2]; // 0x80e
            float m_flTimeToReachMaxSpeed; // 0x810            
            float m_flTimeToReachZeroSpeed; // 0x814            
            float m_flDistanceAlongArcTraveled; // 0x818            
            float m_flTimeToWaitOscillate; // 0x81c            
            source2sdk::entity2::GameTime_t m_flTimeRotationStart; // 0x820            
            uint8_t _pad0824[0xc]; // 0x824
            Quaternion m_qLSPrevChange; // 0x830            
            Quaternion m_qWSPrev; // 0x840            
            Quaternion m_qWSInit; // 0x850            
            Quaternion m_qLSInit; // 0x860            
            Quaternion m_qLSOrientation; // 0x870            
            source2sdk::entity2::CEntityIOOutput m_OnRotationStarted; // 0x880            
            source2sdk::entity2::CEntityIOOutput m_OnRotationCompleted; // 0x8a8            
            source2sdk::entity2::CEntityIOOutput m_OnOscillate; // 0x8d0            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartArrive; // 0x8f8            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartDepart; // 0x920            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndArrive; // 0x948            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndDepart; // 0x970            
            bool m_bOscillateDepart; // 0x998            
            uint8_t _pad0999[0x3]; // 0x999
            std::int32_t m_nOscillateCount; // 0x99c            
            source2sdk::server::CFuncRotator_Rotate_t m_eRotateType; // 0x9a0            
            source2sdk::server::CFuncRotator_Rotate_t m_ePrevRotateType; // 0x9a4            
            bool m_bHasTargetOverride; // 0x9a8            
            uint8_t _pad09a9[0x7]; // 0x9a9
            Quaternion m_qOrientationOverride; // 0x9b0            
            source2sdk::server::RotatorTargetSpace_t m_eSpaceOverride; // 0x9c0            
            QAngle m_qAngularVelocity; // 0x9c4            
            Vector m_vLookAtForcedUp; // 0x9d0            
            uint8_t _pad09dc[0x4]; // 0x9dc
            CUtlSymbolLarge m_strRotatorTarget; // 0x9e0            
            bool m_bRecordHistory; // 0x9e8            
            uint8_t _pad09e9[0x7]; // 0x9e9
            // m_vecRotatorHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorHistory;
            char m_vecRotatorHistory[0x18]; // 0x9f0            
            bool m_bReturningToPreviousOrientation; // 0xa08            
            uint8_t _pad0a09[0x7]; // 0xa09
            // m_vecRotatorQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorQueueEntry_t> m_vecRotatorQueue;
            char m_vecRotatorQueue[0x18]; // 0xa10            
            // m_vecRotatorQueueHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorQueueHistory;
            char m_vecRotatorQueueHistory[0x18]; // 0xa28            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputReturnToPreviousOrientation; // 0x0
            // void InputReturnToInitialOrientation; // 0x0
            // float InputPitch; // 0x0
            // float InputYaw; // 0x0
            // float InputRoll; // 0x0
            // CUtlSymbolLarge InputSetRotatorTarget; // 0x0
            // void CFuncRotatorRotateThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotator) == 0xa40);
    };
};
