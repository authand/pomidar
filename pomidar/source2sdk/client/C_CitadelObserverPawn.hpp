#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"

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
        // Size: 0x1138
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_ObserverServices m_pObserverServices"
        // static metadata: MNetworkIncludeByName "m_pObserverServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCitadelObserver_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        #pragma pack(push, 1)
        class C_CitadelObserverPawn : public source2sdk::client::CCitadelPlayerPawnBase
        {
        public:
            uint8_t _pad1120[0x18];
            // Datamap fields:
            // CCitadelPlayer_ObserverServices m_pObserverServices; // 0xf48
            // CCitadelPlayer_CameraServices m_pCameraServices; // 0xf68
            // CCitadelObserver_MovementServices m_pMovementServices; // 0xf70
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_CitadelObserverPawn) == 0x1138);
    };
};
