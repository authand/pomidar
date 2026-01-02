#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_ObserverServices.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x188
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPlayer_ObserverServices : public source2sdk::client::CPlayer_ObserverServices
        {
        public:
            std::int32_t m_nLastLocalPlayerObservedTeam; // 0x58            
            std::int32_t m_nCurrentObservedTeam; // 0x5c            
            // m_hLastObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastObserverTarget;
            char m_hLastObserverTarget[0x4]; // 0x60            
            // m_hPreviousTeamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousTeamTarget;
            char m_hPreviousTeamTarget[0x4]; // 0x64            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnTargetCameraAnglesChanged"
            QAngle m_angTargetCamera; // 0x68            
            uint8_t _pad0074[0x84]; // 0x74
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnTargetCameraPositionChanged"
            Vector m_vTargetCameraPos; // 0xf8            
            uint8_t _pad0104[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_ObserverServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayer_ObserverServices) == 0x188);
    };
};
