#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xa48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachment"
        // static metadata: MNetworkVarNames "float32 m_flSpriteFramerate"
        // static metadata: MNetworkVarNames "float32 m_flFrame"
        // static metadata: MNetworkVarNames "uint32 m_nBrightness"
        // static metadata: MNetworkVarNames "float32 m_flBrightnessDuration"
        // static metadata: MNetworkVarNames "float32 m_flSpriteScale"
        // static metadata: MNetworkVarNames "float32 m_flScaleDuration"
        // static metadata: MNetworkVarNames "bool m_bWorldSpaceScale"
        // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
        // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
        #pragma pack(push, 1)
        class C_Sprite : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0x9d0            
            // metadata: MNetworkEnable
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0x9d8            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0x9dc            
            uint8_t _pad09dd[0x3]; // 0x9dd
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "60.000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flSpriteFramerate; // 0x9e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "256.000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flFrame; // 0x9e4            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0x9e8            
            uint8_t _pad09ec[0xc]; // 0x9ec
            // metadata: MNetworkEnable
            std::uint32_t m_nBrightness; // 0x9f8            
            // metadata: MNetworkEnable
            float m_flBrightnessDuration; // 0x9fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
            float m_flSpriteScale; // 0xa00            
            // metadata: MNetworkEnable
            float m_flScaleDuration; // 0xa04            
            // metadata: MNetworkEnable
            bool m_bWorldSpaceScale; // 0xa08            
            uint8_t _pad0a09[0x3]; // 0xa09
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "6"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "64.000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flGlowProxySize; // 0xa0c            
            // metadata: MNetworkEnable
            float m_flHDRColorScale; // 0xa10            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0xa14            
            float m_flMaxFrame; // 0xa18            
            float m_flStartScale; // 0xa1c            
            float m_flDestScale; // 0xa20            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0xa24            
            std::int32_t m_nStartBrightness; // 0xa28            
            std::int32_t m_nDestBrightness; // 0xa2c            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0xa30            
            uint8_t _pad0a34[0xc]; // 0xa34
            std::int32_t m_nSpriteWidth; // 0xa40            
            std::int32_t m_nSpriteHeight; // 0xa44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Sprite) == 0xa48);
    };
};
