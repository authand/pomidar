#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xac8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tNextDropTime"
        // static metadata: MNetworkVarNames "bool m_bPowerupActive"
        #pragma pack(push, 1)
        class CCitadel_PickupItemSpawner : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ab8[0x8]; // 0xab8
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tNextDropTime; // 0xac0            
            // metadata: MNetworkEnable
            bool m_bPowerupActive; // 0xac4            
            uint8_t _pad0ac5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_PickupItemSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_PickupItemSpawner) == 0xac8);
    };
};
