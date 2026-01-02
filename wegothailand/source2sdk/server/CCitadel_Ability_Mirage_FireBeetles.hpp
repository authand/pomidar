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
        // Size: 0xd00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flCastStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Mirage_FireBeetles : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vLaunchPosition; // 0xba0            
            QAngle m_qLaunchAngle; // 0xbac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flCastStartTime; // 0xbb8            
            uint8_t _pad0bbc[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Mirage_FireBeetles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Mirage_FireBeetles) == 0xd00);
    };
};
