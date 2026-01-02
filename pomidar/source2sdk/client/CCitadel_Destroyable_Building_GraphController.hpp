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
        // Size: 0x470
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Destroyable_Building_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHitTrigger;
            char m_bHitTrigger[0x20]; // 0x368            
            // m_eState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_eState;
            char m_eState[0x28]; // 0x388            
            // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flHealth;
            char m_flHealth[0x20]; // 0x3b0            
            // m_bActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bActive;
            char m_bActive[0x20]; // 0x3d0            
            // m_flHealthPercent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flHealthPercent;
            char m_flHealthPercent[0x20]; // 0x3f0            
            // m_bVulnerable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bVulnerable;
            char m_bVulnerable[0x20]; // 0x410            
            // m_bDestroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bDestroyed;
            char m_bDestroyed[0x20]; // 0x430            
            // m_flExposedDurationFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flExposedDurationFraction;
            char m_flExposedDurationFraction[0x20]; // 0x450            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Destroyable_Building_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Destroyable_Building_GraphController) == 0x470);
    };
};
