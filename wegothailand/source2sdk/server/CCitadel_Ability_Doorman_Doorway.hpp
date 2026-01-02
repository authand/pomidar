#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_DoorwayPortal;
    };
};

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
        // Size: 0xca8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadel_DoorwayPortal> m_hDoor1"
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Doorway : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x30]; // 0xba0
            // metadata: MNetworkEnable
            // m_hDoor1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_DoorwayPortal> m_hDoor1;
            char m_hDoor1[0x4]; // 0xbd0            
            uint8_t _pad0bd4[0x4]; // 0xbd4
            double m_flLastRangeFailCast; // 0xbd8            
            uint8_t _pad0be0[0xc0]; // 0xbe0
            float m_flDoorBreakableRadius; // 0xca0            
            uint8_t _pad0ca4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Doorman_Doorway) == 0xca8);
    };
};
