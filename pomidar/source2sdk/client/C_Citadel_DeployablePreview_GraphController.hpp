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
        // Size: 0x388
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_DeployablePreview_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_bDeploying has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bDeploying;
            char m_bDeploying[0x20]; // 0x368            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_DeployablePreview_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_DeployablePreview_GraphController) == 0x388);
    };
};
