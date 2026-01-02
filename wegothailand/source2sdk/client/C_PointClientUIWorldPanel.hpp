#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPointOffScreenIndicatorUi;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc30
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
        // static metadata: MNetworkVarNames "bool m_bLit"
        // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "float m_flHeight"
        // static metadata: MNetworkVarNames "float m_flDPI"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
        // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unOrientation"
        // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
        // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
        // static metadata: MNetworkVarNames "bool m_bOpaque"
        // static metadata: MNetworkVarNames "bool m_bNoDepth"
        // static metadata: MNetworkVarNames "bool m_bVisibleWhenParentNoDraw"
        // static metadata: MNetworkVarNames "bool m_bRenderBackface"
        // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
        // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
        // static metadata: MNetworkVarNames "bool m_bGrabbable"
        // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
        // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
        // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0a00[0x8]; // 0xa00
            bool m_bForceRecreateNextUpdate; // 0xa08            
            bool m_bMoveViewToPlayerNextThink; // 0xa09            
            bool m_bCheckCSSClasses; // 0xa0a            
            uint8_t _pad0a0b[0x5]; // 0xa0b
            CTransform m_anchorDeltaTransform; // 0xa10            
            uint8_t _pad0a30[0x178]; // 0xa30
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xba8            
            uint8_t _pad0bb0[0x20]; // 0xbb0
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xbd0            
            // metadata: MNetworkEnable
            bool m_bLit; // 0xbd1            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0xbd2            
            uint8_t _pad0bd3[0x1]; // 0xbd3
            // metadata: MNetworkEnable
            float m_flWidth; // 0xbd4            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xbd8            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xbdc            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xbe0            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xbe4            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xbe8            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xbec            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xbf0            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xbf4            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xbf8            
            uint8_t _pad0bf9[0x7]; // 0xbf9
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xc00            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0xc18            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0xc19            
            // metadata: MNetworkEnable
            bool m_bVisibleWhenParentNoDraw; // 0xc1a            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0xc1b            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0xc1c            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0xc1d            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0xc1e            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0xc1f            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0xc20            
            uint8_t _pad0c21[0x3]; // 0xc21
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0xc24            
            uint8_t _pad0c28[0x8];
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xba0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0xc30);
    };
};
