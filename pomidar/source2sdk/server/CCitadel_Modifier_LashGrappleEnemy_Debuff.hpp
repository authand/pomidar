#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x330
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_LashGrappleEnemy_Debuff : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            Vector m_vCrashDir; // 0xd0            
            Vector m_vLiftTarget; // 0xdc            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xe8            
            bool m_bCrashingDown; // 0xec            
            uint8_t _pad00ed[0x243];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_LashGrappleEnemy_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_LashGrappleEnemy_Debuff) == 0x330);
    };
};
