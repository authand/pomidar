#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xc58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
        // static metadata: MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
        // static metadata: MNetworkVarNames "bool m_bWantsSlide"
        // static metadata: MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
        // static metadata: MNetworkVarNames "bool m_bIsSliding"
        // static metadata: MNetworkVarNames "bool m_bSlideIsSticky"
        // static metadata: MNetworkVarNames "float m_flSpeedAdjust"
        // static metadata: MNetworkVarNames "GameTime_t m_flDuckPressedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSlideChangeTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
        // static metadata: MNetworkVarNames "int m_nJumpsThisSlideSession"
        // static metadata: MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Slide : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x58]; // 0xba0
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xbf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlowGetupStartTime; // 0xc10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShouldTriggerSlowGetup; // 0xc14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlide; // 0xc15            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAirborneWhenDuckPressed; // 0xc16            
            // metadata: MNetworkEnable
            bool m_bIsSliding; // 0xc17            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSlideIsSticky; // 0xc18            
            uint8_t _pad0c19[0x3]; // 0xc19
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpeedAdjust; // 0xc1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDuckPressedTime; // 0xc20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlideChangeTime; // 0xc24            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xc28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nJumpsThisSlideSession; // 0xc2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOnGroundStartTime; // 0xc30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashSlideStartTime; // 0xc34            
            bool m_bStartedSlideViaProbeSlope; // 0xc38            
            uint8_t _pad0c39[0x3]; // 0xc39
            source2sdk::client::ParticleIndex_t m_nSlideEffectIndex; // 0xc3c            
            uint8_t _pad0c40[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Slide because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Slide) == 0xc58);
    };
};
