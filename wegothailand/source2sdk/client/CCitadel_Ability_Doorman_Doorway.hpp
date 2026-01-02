#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadel_DoorwayPortal;
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
        // Size: 0xea0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadel_DoorwayPortal> m_hDoor1"
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Doorway : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x30]; // 0xd90
            // metadata: MNetworkEnable
            // m_hDoor1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadel_DoorwayPortal> m_hDoor1;
            char m_hDoor1[0x4]; // 0xdc0            
            uint8_t _pad0dc4[0x4]; // 0xdc4
            double m_flLastRangeFailCast; // 0xdc8            
            uint8_t _pad0dd0[0xc0]; // 0xdd0
            float m_flDoorBreakableRadius; // 0xe90            
            uint8_t _pad0e94[0x4]; // 0xe94
            source2sdk::client::SatVolumeIndex_t m_nDoorPlacementSphere; // 0xe98            
            uint8_t _pad0e9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Doorway) == 0xea0);
    };
};
