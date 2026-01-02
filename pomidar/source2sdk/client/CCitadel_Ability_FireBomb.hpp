#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xe38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_FireBomb : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x88]; // 0xd90
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::CCitadelAutoScaledTime m_flDetonateTime; // 0xe18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xe30            
            uint8_t _pad0e34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FireBomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_FireBomb) == 0xe38);
    };
};
