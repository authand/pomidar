#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AnimTagID.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CModifierHandleBase.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IChoreoServices;
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
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0808[0x80]; // 0x808
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x888            
            uint8_t _pad0889[0x7]; // 0x889
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x890            
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x898            
            uint8_t _pad0899[0x3]; // 0x899
            float m_flMaxSlopeDistance; // 0x89c            
            Vector m_vLastSlopeCheckPos; // 0x8a0            
            bool m_bAnimationUpdateScheduled; // 0x8ac            
            uint8_t _pad08ad[0x3]; // 0x8ad
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x8b0            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x8bc            
            uint8_t _pad08c0[0x10]; // 0x8c0
            // metadata: MNetworkEnable
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x8d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x8f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x8f9            
            uint8_t _pad08fa[0x146]; // 0x8fa
            // m_bodyGroupModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::modellib::AnimTagID,source2sdk::server::CModifierHandleBase> m_bodyGroupModifiers;
            char m_bodyGroupModifiers[0x20]; // 0xa40            
            uint8_t _pad0a60[0x58];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x880
            // void CBaseAnimGraphChoreoServicesThink; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
            // void InputClearTargetIdentifierOverride; // 0x0
            // void InputBecomeRagdoll; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraph) == 0xab8);
    };
};
