#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ELeapState_t.hpp"
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
        // Size: 0xfd0
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
        class CCitadel_Ability_Bull_Leap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bBraceParamTriggered; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            // metadata: MNetworkEnable
            float m_flBoostYaw; // 0xd94            
            // metadata: MNetworkEnable
            Vector m_vecCrashPosition; // 0xd98            
            // metadata: MNetworkEnable
            Vector m_vecCrashDirection; // 0xda4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnLeapStateChanged"
            source2sdk::client::ELeapState_t m_eLeapState; // 0xdb0            
            uint8_t _pad0db1[0x3]; // 0xdb1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStateEnterTime; // 0xdb4            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flNextStateTime; // 0xdb8            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flBoostEndTime; // 0xdd0            
            uint8_t _pad0de8[0x1cc]; // 0xde8
            Vector m_vecLastVel; // 0xfb4            
            Vector m_vecCrashDownLastPos; // 0xfc0            
            uint8_t _pad0fcc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_Leap) == 0xfd0);
    };
};
