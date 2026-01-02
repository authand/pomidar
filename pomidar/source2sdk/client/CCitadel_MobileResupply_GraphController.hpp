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
        // Size: 0x3a8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_MobileResupply_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_flDrainScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flDrainScale;
            char m_flDrainScale[0x20]; // 0x368            
            // m_bStartDrain has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bStartDrain;
            char m_bStartDrain[0x20]; // 0x388            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_MobileResupply_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_MobileResupply_GraphController) == 0x3a8);
    };
};
