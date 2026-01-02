#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/C_RopeKeyframe_CPhysicsDelegate.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xd40
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
        // static metadata: MNetworkIncludeByName "m_nMinCPULevel"
        // static metadata: MNetworkIncludeByName "m_nMaxCPULevel"
        // static metadata: MNetworkIncludeByName "m_nMinGPULevel"
        // static metadata: MNetworkIncludeByName "m_nMaxGPULevel"
        // static metadata: MNetworkVarNames "float32 m_flScrollSpeed"
        // static metadata: MNetworkVarNames "uint16 m_RopeFlags"
        // static metadata: MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
        // static metadata: MNetworkVarNames "uint8 m_nSegments"
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
        // static metadata: MNetworkVarNames "uint8 m_Subdiv"
        // static metadata: MNetworkVarNames "int16 m_RopeLength"
        // static metadata: MNetworkVarNames "int16 m_Slack"
        // static metadata: MNetworkVarNames "float32 m_TextureScale"
        // static metadata: MNetworkVarNames "uint8 m_fLockedPoints"
        // static metadata: MNetworkVarNames "uint8 m_nChangeCount"
        // static metadata: MNetworkVarNames "float32 m_Width"
        // static metadata: MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
        #pragma pack(push, 1)
        class C_RopeKeyframe : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09d0[0x8]; // 0x9d0
            // m_LinksTouchingSomething has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CBitVec<10> m_LinksTouchingSomething;
            char m_LinksTouchingSomething[0x4]; // 0x9d8            
            std::int32_t m_nLinksTouchingSomething; // 0x9dc            
            bool m_bApplyWind; // 0x9e0            
            uint8_t _pad09e1[0x3]; // 0x9e1
            std::int32_t m_fPrevLockedPoints; // 0x9e4            
            std::int32_t m_iForcePointMoveCounter; // 0x9e8            
            bool m_bPrevEndPointPos[2]; // 0x9ec            
            uint8_t _pad09ee[0x2]; // 0x9ee
            Vector m_vPrevEndPointPos[2]; // 0x9f0            
            float m_flCurScroll; // 0xa08            
            // metadata: MNetworkEnable
            float m_flScrollSpeed; // 0xa0c            
            // metadata: MNetworkEnable
            std::uint16_t m_RopeFlags; // 0xa10            
            uint8_t _pad0a12[0x6]; // 0xa12
            // metadata: MNetworkEnable
            // m_iRopeMaterialModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex;
            char m_iRopeMaterialModelIndex[0x8]; // 0xa18            
            uint8_t _pad0a20[0x270]; // 0xa20
            // metadata: MNetworkEnable
            std::uint8_t m_nSegments; // 0xc90            
            uint8_t _pad0c91[0x3]; // 0xc91
            // metadata: MNetworkEnable
            // m_hStartPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStartPoint;
            char m_hStartPoint[0x4]; // 0xc94            
            // metadata: MNetworkEnable
            // m_hEndPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndPoint;
            char m_hEndPoint[0x4]; // 0xc98            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iStartAttachment; // 0xc9c            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_iEndAttachment; // 0xc9d            
            // metadata: MNetworkEnable
            std::uint8_t m_Subdiv; // 0xc9e            
            uint8_t _pad0c9f[0x1]; // 0xc9f
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_RopeLength; // 0xca0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecomputeSprings"
            std::int16_t m_Slack; // 0xca2            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0.100000"
            // metadata: MNetworkMaxValue "10.000000"
            float m_TextureScale; // 0xca4            
            // metadata: MNetworkEnable
            std::uint8_t m_fLockedPoints; // 0xca8            
            // metadata: MNetworkEnable
            std::uint8_t m_nChangeCount; // 0xca9            
            uint8_t _pad0caa[0x2]; // 0xcaa
            // metadata: MNetworkEnable
            float m_Width; // 0xcac            
            source2sdk::client::C_RopeKeyframe_CPhysicsDelegate m_PhysicsDelegate; // 0xcb0            
            // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
            char m_hMaterial[0x8]; // 0xcc0            
            std::int32_t m_TextureHeight; // 0xcc8            
            Vector m_vecImpulse; // 0xccc            
            Vector m_vecPreviousImpulse; // 0xcd8            
            float m_flCurrentGustTimer; // 0xce4            
            float m_flCurrentGustLifetime; // 0xce8            
            float m_flTimeToNextGust; // 0xcec            
            Vector m_vWindDir; // 0xcf0            
            Vector m_vColorMod; // 0xcfc            
            Vector m_vCachedEndPointAttachmentPos[2]; // 0xd08            
            QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xd20            
            // metadata: MNetworkEnable
            bool m_bConstrainBetweenEndpoints; // 0xd38            
            // start of bitfield block
            uint8_t m_bEndPointAttachmentPositionsDirty: 1;
            uint8_t m_bEndPointAttachmentAnglesDirty: 1;
            uint8_t m_bNewDataThisFrame: 1;
            uint8_t m_bPhysicsInitted: 1;
            // end of bitfield block// 4 bits
            uint8_t _pad0d3a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RopeKeyframe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RopeKeyframe) == 0xd40);
    };
};
