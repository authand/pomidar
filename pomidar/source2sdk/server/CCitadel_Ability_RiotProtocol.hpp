#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xbe8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        #pragma pack(push, 1)
        class CCitadel_Ability_RiotProtocol : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_ChargeUpParticle; // 0xba0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bActive; // 0xba4            
            uint8_t _pad0ba5[0x43];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_RiotProtocol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_RiotProtocol) == 0xbe8);
    };
};
