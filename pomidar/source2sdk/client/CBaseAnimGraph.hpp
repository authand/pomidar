#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CModifierHandleBase.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/modellib/AnimTagID.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc98
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
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09d0[0x80]; // 0x9d0
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0xa50            
            uint8_t _pad0a51[0x1]; // 0xa51
            bool m_bSuppressAnimEventSounds; // 0xa52            
            uint8_t _pad0a53[0xd]; // 0xa53
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0xa60            
            uint8_t _pad0a61[0x3]; // 0xa61
            float m_flMaxSlopeDistance; // 0xa64            
            Vector m_vLastSlopeCheckPos; // 0xa68            
            bool m_bAnimationUpdateScheduled; // 0xa74            
            uint8_t _pad0a75[0x3]; // 0xa75
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0xa78            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0xa84            
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xa88            
            bool m_bBuiltRagdoll; // 0xa90            
            uint8_t _pad0a91[0x17]; // 0xa91
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xaa8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0xaf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0xaf1            
            uint8_t _pad0af2[0xe]; // 0xaf2
            bool m_bHasAnimatedMaterialAttributes; // 0xb00            
            uint8_t _pad0b01[0x107]; // 0xb01
            // m_bodyGroupModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::modellib::AnimTagID,source2sdk::client::CModifierHandleBase> m_bodyGroupModifiers;
            char m_bodyGroupModifiers[0x20]; // 0xc08            
            uint8_t _pad0c28[0x70];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0xa48
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
            // void InputClearTargetIdentifierOverride; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xc98);
    };
};
