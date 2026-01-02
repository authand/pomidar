#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xf60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
        #pragma pack(push, 1)
        class CAbility_Mirage_Tornado : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x1c0]; // 0xd90
            // metadata: MNetworkEnable
            QAngle m_anglesCharging; // 0xf50            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMirageTornadoStateChanged"
            source2sdk::entity2::GameTime_t m_flChargeStartTime; // 0xf5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Mirage_Tornado) == 0xf60);
    };
};
