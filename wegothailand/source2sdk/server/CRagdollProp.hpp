#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ragdoll_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
        struct CBasePlayerPawn;
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
        // Size: 0xc88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_ragEnabled"
        // static metadata: MNetworkVarNames "Vector m_ragPos"
        // static metadata: MNetworkVarNames "QAngle m_ragAngles"
        // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
        // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
        #pragma pack(push, 1)
        class CRagdollProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ab8[0x8]; // 0xab8
            source2sdk::client::ragdoll_t m_ragdoll; // 0xac0            
            bool m_bStartDisabled; // 0xb10            
            uint8_t _pad0b11[0x7]; // 0xb11
            // metadata: MNetworkEnable
            // m_ragEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<bool> m_ragEnabled;
            char m_ragEnabled[0x18]; // 0xb18            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x18]; // 0xb30            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "13"
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x18]; // 0xb48            
            // metadata: MNetworkEnable
            // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRagdollSource;
            char m_hRagdollSource[0x4]; // 0xb60            
            std::uint32_t m_lastUpdateTickCount; // 0xb64            
            bool m_allAsleep; // 0xb68            
            bool m_bFirstCollisionAfterLaunch; // 0xb69            
            uint8_t _pad0b6a[0x2]; // 0xb6a
            // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDamageEntity;
            char m_hDamageEntity[0x4]; // 0xb6c            
            // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKiller;
            char m_hKiller[0x4]; // 0xb70            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xb74            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb78            
            source2sdk::entity2::GameTime_t m_flFadeOutStartTime; // 0xb7c            
            float m_flFadeTime; // 0xb80            
            Vector m_vecLastOrigin; // 0xb84            
            source2sdk::entity2::GameTime_t m_flAwakeTime; // 0xb90            
            source2sdk::entity2::GameTime_t m_flLastOriginChangeTime; // 0xb94            
            CUtlSymbolLarge m_strOriginClassName; // 0xb98            
            CUtlSymbolLarge m_strSourceClassName; // 0xba0            
            bool m_bHasBeenPhysgunned; // 0xba8            
            bool m_bShouldTeleportPhysics; // 0xba9            
            bool m_bAllowStretch; // 0xbaa            
            uint8_t _pad0bab[0x1]; // 0xbab
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flBlendWeight; // 0xbac            
            float m_flDefaultFadeScale; // 0xbb0            
            uint8_t _pad0bb4[0x4]; // 0xbb4
            // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMins;
            char m_ragdollMins[0x18]; // 0xbb8            
            // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMaxs;
            char m_ragdollMaxs[0x18]; // 0xbd0            
            bool m_bShouldDeleteActivationRecord; // 0xbe8            
            uint8_t _pad0be9[0x5f]; // 0xbe9
            bool m_bValidatePoweredRagdollPose; // 0xc48            
            uint8_t _pad0c49[0x3f];
            
            // Datamap fields:
            // void m_ragdoll.boneIndex; // 0xaf0
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputFadeAndRemove; // 0x0
            // void CRagdollPropSetDebrisThink; // 0x0
            // void CRagdollPropClearFlagsThink; // 0x0
            // void CRagdollPropFadeOutThink; // 0x0
            // void CRagdollPropSettleThink; // 0x0
            // void CRagdollPropAttachedItemsThink; // 0x0
            // void CRagdollPropRagdollTouch; // 0x0
            // void m_ragdoll.list; // 0xac0
            // void m_ragdoll.hierarchyJoints; // 0xad8
            // bool m_ragdoll.allowStretch; // 0xb08
            // float massScale; // 0x7fffffff
            // float buoyancyscale; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollProp) == 0xc88);
    };
};
