#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x438
        // Has VTable
        #pragma pack(push, 1)
        class C_PortraitWorldUnit_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_pszHeroUI has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszHeroUI;
            char m_pszHeroUI[0x28]; // 0x368            
            // m_pszShopUI has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszShopUI;
            char m_pszShopUI[0x28]; // 0x390            
            // m_flMenuLookAtWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flMenuLookAtWeight;
            char m_flMenuLookAtWeight[0x20]; // 0x3b8            
            // m_vecLookAtPosMS has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<Vector> m_vecLookAtPosMS;
            char m_vecLookAtPosMS[0x20]; // 0x3d8            
            // m_BaseState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_BaseState;
            char m_BaseState[0x20]; // 0x3f8            
            // m_ShopState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_ShopState;
            char m_ShopState[0x20]; // 0x418            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit_GraphController) == 0x438);
    };
};
