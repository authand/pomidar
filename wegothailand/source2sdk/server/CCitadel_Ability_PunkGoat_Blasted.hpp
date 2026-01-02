#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xef0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flBlastedCurrentDuration"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Blasted : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_tTimeOfLastBulletHit; // 0xba0            
            float m_flPendingBlastedTimeToAdd; // 0xba4            
            float m_flDeferredHealingFromBlasted; // 0xba8            
            // metadata: MNetworkEnable
            float m_flBlastedCurrentDuration; // 0xbac            
            uint8_t _pad0bb0[0x340];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Blasted because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PunkGoat_Blasted) == 0xef0);
    };
};
