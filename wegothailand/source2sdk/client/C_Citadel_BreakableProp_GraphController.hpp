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
        // Size: 0x3e8
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_BreakableProp_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_bSetInit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bSetInit;
            char m_bSetInit[0x20]; // 0x368            
            // m_flDamageReceived has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flDamageReceived;
            char m_flDamageReceived[0x20]; // 0x388            
            // m_bOnRespawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bOnRespawn;
            char m_bOnRespawn[0x20]; // 0x3a8            
            // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bHitTrigger;
            char m_bHitTrigger[0x20]; // 0x3c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_BreakableProp_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_BreakableProp_GraphController) == 0x3e8);
    };
};
