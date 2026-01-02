#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
    };
};

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
        // Size: 0xde8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flDashCastStartTime"
        // static metadata: MNetworkVarNames "Vector m_vDashCastDir"
        #pragma pack(push, 1)
        class CCitadelBaseDashCastAbility : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_hAbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hAbilityToTrigger;
            char m_hAbilityToTrigger[0x4]; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashCastStartTime; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashCastDir; // 0xd98            
            uint8_t _pad0da4[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseDashCastAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelBaseDashCastAbility) == 0xde8);
    };
};
