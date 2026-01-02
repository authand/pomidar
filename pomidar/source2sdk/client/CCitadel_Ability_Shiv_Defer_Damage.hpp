#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseShivAbility.hpp"

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
        // Size: 0xe98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flTotalPendingDamage"
        #pragma pack(push, 1)
        class CCitadel_Ability_Shiv_Defer_Damage : public source2sdk::client::CCitadelBaseShivAbility
        {
        public:
            uint8_t _pad0d90[0x100]; // 0xd90
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flTotalPendingDamage; // 0xe90            
            uint8_t _pad0e94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_Defer_Damage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Shiv_Defer_Damage) == 0xe98);
    };
};
