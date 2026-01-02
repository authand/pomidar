#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseYamatoAbility.hpp"
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
        // Size: 0xee0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flExplodeEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBuffEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_InfinitySlash : public source2sdk::client::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0d98[0x140]; // 0xd98
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flExplodeEndTime; // 0xed8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flBuffEndTime; // 0xedc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_InfinitySlash) == 0xee0);
    };
};
