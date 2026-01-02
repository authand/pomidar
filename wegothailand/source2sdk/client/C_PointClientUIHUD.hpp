#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"

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
        // Size: 0xbd0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
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
        #pragma pack(push, 1)
        class C_PointClientUIHUD : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0a00[0x8]; // 0xa00
            bool m_bCheckCSSClasses; // 0xa08            
            uint8_t _pad0a09[0x17f]; // 0xa09
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0xb88            
            uint8_t _pad0b89[0x3]; // 0xb89
            // metadata: MNetworkEnable
            float m_flWidth; // 0xb8c            
            // metadata: MNetworkEnable
            float m_flHeight; // 0xb90            
            // metadata: MNetworkEnable
            float m_flDPI; // 0xb94            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xb98            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0xb9c            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0xba0            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0xba4            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0xba8            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0xbac            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0xbb0            
            uint8_t _pad0bb1[0x7]; // 0xbb1
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0xbb8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIHUD) == 0xbd0);
    };
};
