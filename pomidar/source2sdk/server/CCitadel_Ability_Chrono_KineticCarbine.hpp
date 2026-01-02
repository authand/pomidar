#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xe00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bWantsSlow"
        // static metadata: MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
        // static metadata: MNetworkVarNames "float m_flLatchedTimeScaleFrac"
        // static metadata: MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Chrono_KineticCarbine : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlow; // 0xba0            
            uint8_t _pad0ba1[0x3]; // 0xba1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xba4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flLatchedTimeScaleFrac; // 0xba8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSpeedBoostEndTime; // 0xbac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xbb0            
            uint8_t _pad0bb4[0x8]; // 0xbb4
            float m_flStoredPowerPct; // 0xbbc            
            uint8_t _pad0bc0[0x240];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Chrono_KineticCarbine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Chrono_KineticCarbine) == 0xe00);
    };
};
