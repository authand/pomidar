#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELeapState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0xde0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bBraceParamTriggered"
        // static metadata: MNetworkVarNames "float m_flBoostYaw"
        // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
        // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
        // static metadata: MNetworkVarNames "ELeapState_t m_eLeapState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_Leap : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bBraceParamTriggered; // 0xba0            
            uint8_t _pad0ba1[0x3]; // 0xba1
            // metadata: MNetworkEnable
            float m_flBoostYaw; // 0xba4            
            // metadata: MNetworkEnable
            Vector m_vecCrashPosition; // 0xba8            
            // metadata: MNetworkEnable
            Vector m_vecCrashDirection; // 0xbb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLeapStateChanged"
            source2sdk::client::ELeapState_t m_eLeapState; // 0xbc0            
            uint8_t _pad0bc1[0x3]; // 0xbc1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0xbc4            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flNextStateTime; // 0xbc8            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flBoostEndTime; // 0xbe0            
            uint8_t _pad0bf8[0x1cc]; // 0xbf8
            Vector m_vecLastVel; // 0xdc4            
            Vector m_vecCrashDownLastPos; // 0xdd0            
            uint8_t _pad0ddc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bull_Leap) == 0xde0);
    };
};
