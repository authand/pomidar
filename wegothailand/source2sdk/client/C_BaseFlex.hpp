#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseFlex_Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

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
        // Size: 0xea8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        // static metadata: MNetworkVarNames "bool m_blinktoggle"
        #pragma pack(push, 1)
        class C_BaseFlex : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0c98[0x10]; // 0xc98
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0xca8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0xcc0            
            uint8_t _pad0ccc[0x84]; // 0xccc
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0xd50            
            uint8_t _pad0d51[0x5f]; // 0xd51
            std::int32_t m_nLastFlexUpdateFrameCount; // 0xdb0            
            Vector m_CachedViewTarget; // 0xdb4            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0xdc0            
            std::int32_t m_iBlink; // 0xdc4            
            float m_blinktime; // 0xdc8            
            bool m_prevblinktoggle; // 0xdcc            
            uint8_t _pad0dcd[0x3]; // 0xdcd
            std::int32_t m_iJawOpen; // 0xdd0            
            float m_flJawOpenAmount; // 0xdd4            
            float m_flBlinkAmount; // 0xdd8            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0xddc            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xddd            
            bool m_bResetFlexWeightsOnModelChange; // 0xdde            
            uint8_t _pad0ddf[0x19]; // 0xddf
            std::int32_t m_nEyeOcclusionRendererBone; // 0xdf8            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xdfc            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0xe2c            
            uint8_t _pad0e38[0x10]; // 0xe38
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0xe48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0xea8);
    };
};
