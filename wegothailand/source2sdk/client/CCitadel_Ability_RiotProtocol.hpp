#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0xdd8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        #pragma pack(push, 1)
        class CCitadel_Ability_RiotProtocol : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bActive; // 0xd90            
            uint8_t _pad0d91[0x47];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_RiotProtocol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_RiotProtocol) == 0xdd8);
    };
};
