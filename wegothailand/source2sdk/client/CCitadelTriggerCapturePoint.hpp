#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelInWorldEventTimer;
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
        // Size: 0xb30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_tQueuedEnableTime"
        // static metadata: MNetworkVarNames "float m_flCaptureProgress"
        // static metadata: MNetworkVarNames "int m_nCaptureProgressOwner"
        // static metadata: MNetworkVarNames "int m_nActivelyCapturingTeam"
        // static metadata: MNetworkVarNames "int m_nActiveCapturers"
        // static metadata: MNetworkVarNames "uint8 m_nEnableState"
        #pragma pack(push, 1)
        class CCitadelTriggerCapturePoint : public source2sdk::client::C_BaseTrigger
        {
        public:
            source2sdk::client::CCitadelInWorldEventTimer* m_pUIWorldEventTimer; // 0xb10            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQueuedEnableTimeChanged"
            source2sdk::entity2::GameTime_t m_tQueuedEnableTime; // 0xb18            
            // metadata: MNetworkEnable
            float m_flCaptureProgress; // 0xb1c            
            // metadata: MNetworkEnable
            std::int32_t m_nCaptureProgressOwner; // 0xb20            
            // metadata: MNetworkEnable
            std::int32_t m_nActivelyCapturingTeam; // 0xb24            
            // metadata: MNetworkEnable
            std::int32_t m_nActiveCapturers; // 0xb28            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEnableStateChanged"
            std::uint8_t m_nEnableState; // 0xb2c            
            uint8_t _pad0b2d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTriggerCapturePoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelTriggerCapturePoint) == 0xb30);
    };
};
