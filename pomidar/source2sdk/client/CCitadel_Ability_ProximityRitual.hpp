#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECatStatueState_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0xf80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ECatStatueState_t m_eState"
        // static metadata: MNetworkVarNames "EHANDLE m_hStatue"
        #pragma pack(push, 1)
        class CCitadel_Ability_ProximityRitual : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ECatStatueState_t m_eState; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hStatue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hStatue;
            char m_hStatue[0x4]; // 0xd94            
            uint8_t _pad0d98[0x8]; // 0xd98
            Vector m_vLaunchPosition; // 0xda0            
            QAngle m_qLaunchAngle; // 0xdac            
            uint8_t _pad0db8[0x1c8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ProximityRitual) == 0xf80);
    };
};
