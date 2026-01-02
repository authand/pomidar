#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/schemasystem/ThreeState_t.hpp"
#include "source2sdk/server/CAI_ProxTester.hpp"
#include "source2sdk/server/CAI_ScriptConditionsElement.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Size: 0x608
        // Has VTable
        #pragma pack(push, 1)
        class CAI_ScriptConditions : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04f0[0x8]; // 0x4f0
            source2sdk::entity2::CEntityIOOutput m_OnConditionsSatisfied; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_OnConditionsTimeout; // 0x520            
            source2sdk::entity2::CEntityIOOutput m_NoValidActors; // 0x548            
            bool m_fDisabled; // 0x570            
            bool m_bLeaveAsleep; // 0x571            
            uint8_t _pad0572[0x2]; // 0x572
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x574            
            float m_flRequiredDuration; // 0x578            
            source2sdk::client::NPC_STATE m_fMinState; // 0x57c            
            source2sdk::client::NPC_STATE m_fMaxState; // 0x580            
            source2sdk::schemasystem::ThreeState_t m_fScriptStatus; // 0x584            
            source2sdk::schemasystem::ThreeState_t m_fActorSeePlayer; // 0x588            
            uint8_t _pad058c[0x4]; // 0x58c
            CUtlSymbolLarge m_Actor; // 0x590            
            float m_flPlayerActorProximity; // 0x598            
            source2sdk::server::CAI_ProxTester m_PlayerActorProxTester; // 0x59c            
            float m_flPlayerActorFOV; // 0x5a4            
            bool m_bPlayerActorFOVTrueCone; // 0x5a8            
            uint8_t _pad05a9[0x3]; // 0x5a9
            source2sdk::schemasystem::ThreeState_t m_fPlayerActorLOS; // 0x5ac            
            source2sdk::schemasystem::ThreeState_t m_fActorSeeTarget; // 0x5b0            
            float m_flActorTargetProximity; // 0x5b4            
            source2sdk::server::CAI_ProxTester m_ActorTargetProxTester; // 0x5b8            
            float m_flPlayerTargetProximity; // 0x5c0            
            source2sdk::server::CAI_ProxTester m_PlayerTargetProxTester; // 0x5c4            
            float m_flPlayerTargetFOV; // 0x5cc            
            bool m_bPlayerTargetFOVTrueCone; // 0x5d0            
            uint8_t _pad05d1[0x3]; // 0x5d1
            source2sdk::schemasystem::ThreeState_t m_fPlayerTargetLOS; // 0x5d4            
            source2sdk::schemasystem::ThreeState_t m_fPlayerBlockingActor; // 0x5d8            
            source2sdk::schemasystem::ThreeState_t m_fActorInPVS; // 0x5dc            
            float m_flMinTimeout; // 0x5e0            
            float m_flMaxTimeout; // 0x5e4            
            source2sdk::schemasystem::ThreeState_t m_fActorInVehicle; // 0x5e8            
            source2sdk::schemasystem::ThreeState_t m_fPlayerInVehicle; // 0x5ec            
            // m_ElementList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CAI_ScriptConditionsElement> m_ElementList;
            char m_ElementList[0x18]; // 0x5f0            
            
            // Datamap fields:
            // void CAI_ScriptConditionsEvaluationThink; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_ScriptConditions because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_ScriptConditions) == 0x608);
    };
};
