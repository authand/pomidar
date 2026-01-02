#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
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
        // Size: 0xd20
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "int m_nColorMode"
        // static metadata: MNetworkVarNames "Color m_Color"
        // static metadata: MNetworkVarNames "float m_flColorTemperature"
        // static metadata: MNetworkVarNames "float m_flBrightness"
        // static metadata: MNetworkVarNames "float m_flBrightnessScale"
        // static metadata: MNetworkVarNames "int m_nDirectLight"
        // static metadata: MNetworkVarNames "int m_nBakedShadowIndex"
        // static metadata: MNetworkVarNames "int32 m_nLightPathUniqueId"
        // static metadata: MNetworkVarNames "int32 m_nLightMapUniqueId"
        // static metadata: MNetworkVarNames "int m_nLuminaireShape"
        // static metadata: MNetworkVarNames "float m_flLuminaireSize"
        // static metadata: MNetworkVarNames "float m_flLuminaireAnisotropy"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleString"
        // static metadata: MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
        // static metadata: MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleEvents"
        // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
        // static metadata: MNetworkVarNames "float m_flShape"
        // static metadata: MNetworkVarNames "float m_flSoftX"
        // static metadata: MNetworkVarNames "float m_flSoftY"
        // static metadata: MNetworkVarNames "float m_flSkirt"
        // static metadata: MNetworkVarNames "float m_flSkirtNear"
        // static metadata: MNetworkVarNames "Vector m_vSizeParams"
        // static metadata: MNetworkVarNames "float m_flRange"
        // static metadata: MNetworkVarNames "Vector m_vShear"
        // static metadata: MNetworkVarNames "int m_nBakeSpecularToCubemaps"
        // static metadata: MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
        // static metadata: MNetworkVarNames "int m_nCastShadows"
        // static metadata: MNetworkVarNames "int m_nShadowMapSize"
        // static metadata: MNetworkVarNames "int m_nShadowPriority"
        // static metadata: MNetworkVarNames "bool m_bContactShadow"
        // static metadata: MNetworkVarNames "bool m_bForceShadowsEnabled"
        // static metadata: MNetworkVarNames "int m_nBounceLight"
        // static metadata: MNetworkVarNames "float m_flBounceScale"
        // static metadata: MNetworkVarNames "float m_flMinRoughness"
        // static metadata: MNetworkVarNames "Vector m_vAlternateColor"
        // static metadata: MNetworkVarNames "float m_fAlternateColorBrightness"
        // static metadata: MNetworkVarNames "int m_nFog"
        // static metadata: MNetworkVarNames "float m_flFogStrength"
        // static metadata: MNetworkVarNames "int m_nFogShadows"
        // static metadata: MNetworkVarNames "float m_flFogScale"
        // static metadata: MNetworkVarNames "bool m_bFogMixedShadows"
        // static metadata: MNetworkVarNames "float m_flFadeSizeStart"
        // static metadata: MNetworkVarNames "float m_flFadeSizeEnd"
        // static metadata: MNetworkVarNames "float m_flShadowFadeSizeStart"
        // static metadata: MNetworkVarNames "float m_flShadowFadeSizeEnd"
        // static metadata: MNetworkVarNames "bool m_bPrecomputedFieldsValid"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
        // static metadata: MNetworkVarNames "int m_nPrecomputedSubFrusta"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin0"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles0"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent0"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin1"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles1"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent1"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin2"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles2"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent2"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin3"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles3"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent3"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin4"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles4"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent4"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin5"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles5"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent5"
        // static metadata: MNetworkVarNames "uint16 m_VisClusters"
        #pragma pack(push, 1)
        class C_BarnLight : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bEnabled; // 0x9d0            
            uint8_t _pad09d1[0x3]; // 0x9d1
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nColorMode; // 0x9d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Color m_Color; // 0x9d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flColorTemperature; // 0x9dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightness; // 0x9e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightnessScale; // 0x9e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nDirectLight; // 0x9e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nBakedShadowIndex; // 0x9ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLightPathUniqueId; // 0x9f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLightMapUniqueId; // 0x9f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLuminaireShape; // 0x9f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireSize; // 0x9fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireAnisotropy; // 0xa00            
            uint8_t _pad0a04[0x4]; // 0xa04
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StyleChanged"
            CUtlString m_LightStyleString; // 0xa08            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            source2sdk::entity2::GameTime_t m_flLightStyleStartTime; // 0xa10            
            uint8_t _pad0a14[0x4]; // 0xa14
            // metadata: MNetworkEnable
            // m_QueuedLightStyleStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings;
            char m_QueuedLightStyleStrings[0x18]; // 0xa18            
            // metadata: MNetworkEnable
            // m_LightStyleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_LightStyleEvents;
            char m_LightStyleEvents[0x18]; // 0xa30            
            // metadata: MNetworkEnable
            // m_LightStyleTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_LightStyleTargets;
            char m_LightStyleTargets[0x18]; // 0xa48            
            source2sdk::entity2::CEntityIOOutput m_StyleEvent[4]; // 0xa60            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0xb00            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShape; // 0xb08            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftX; // 0xb0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftY; // 0xb10            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirt; // 0xb14            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirtNear; // 0xb18            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vSizeParams; // 0xb1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            float m_flRange; // 0xb28            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vShear; // 0xb2c            
            // metadata: MNetworkEnable
            std::int32_t m_nBakeSpecularToCubemaps; // 0xb38            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vBakeSpecularToCubemapsSize; // 0xb3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nCastShadows; // 0xb48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowMapSize; // 0xb4c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowPriority; // 0xb50            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bContactShadow; // 0xb54            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bForceShadowsEnabled; // 0xb55            
            uint8_t _pad0b56[0x2]; // 0xb56
            // metadata: MNetworkEnable
            std::int32_t m_nBounceLight; // 0xb58            
            // metadata: MNetworkEnable
            float m_flBounceScale; // 0xb5c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flMinRoughness; // 0xb60            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vAlternateColor; // 0xb64            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_fAlternateColorBrightness; // 0xb70            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFog; // 0xb74            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogStrength; // 0xb78            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFogShadows; // 0xb7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogScale; // 0xb80            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bFogMixedShadows; // 0xb84            
            uint8_t _pad0b85[0x3]; // 0xb85
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeStart; // 0xb88            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeEnd; // 0xb8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeStart; // 0xb90            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeEnd; // 0xb94            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bPrecomputedFieldsValid; // 0xb98            
            uint8_t _pad0b99[0x3]; // 0xb99
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMins; // 0xb9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMaxs; // 0xba8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin; // 0xbb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles; // 0xbc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent; // 0xbcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nPrecomputedSubFrusta; // 0xbd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin0; // 0xbdc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles0; // 0xbe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent0; // 0xbf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin1; // 0xc00            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles1; // 0xc0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent1; // 0xc18            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin2; // 0xc24            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles2; // 0xc30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent2; // 0xc3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin3; // 0xc48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles3; // 0xc54            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent3; // 0xc60            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin4; // 0xc6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles4; // 0xc78            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent4; // 0xc84            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin5; // 0xc90            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles5; // 0xc9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent5; // 0xca8            
            uint8_t _pad0cb4[0x44]; // 0xcb4
            bool m_bInitialBoneSetup; // 0xcf8            
            uint8_t _pad0cf9[0x7]; // 0xcf9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_VisClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint16_t> m_VisClusters;
            char m_VisClusters[0x18]; // 0xd00            
            uint8_t _pad0d18[0x8];
            
            // Datamap fields:
            // void m_StyleEvent[0]; // 0xa60
            // void m_StyleEvent[1]; // 0xa88
            // void m_StyleEvent[2]; // 0xab0
            // void m_StyleEvent[3]; // 0xad8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BarnLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BarnLight) == 0xd20);
    };
};
