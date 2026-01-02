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
        // Size: 0x1100
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
        // static metadata: MNetworkVarNames "bool m_bHitAPlayer"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_Charge : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x340]; // 0xd90
            // metadata: MNetworkEnable
            QAngle m_anglesCharging; // 0x10d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnChargingStateChanged"
            source2sdk::entity2::GameTime_t m_flChargeStartTime; // 0x10dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeStartTime; // 0x10e0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFastChargeEndTime; // 0x10e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bHitAPlayer; // 0x10e8            
            uint8_t _pad10e9[0x3]; // 0x10e9
            bool m_bFirstTick; // 0x10ec            
            uint8_t _pad10ed[0x3]; // 0x10ed
            Vector m_vGoalDir; // 0x10f0            
            uint8_t _pad10fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_Charge) == 0x1100);
    };
};
