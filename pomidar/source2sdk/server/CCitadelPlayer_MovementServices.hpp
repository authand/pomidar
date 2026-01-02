#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x310
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
        // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
        // static metadata: MNetworkVarNames "bool m_bInPortalEnvironment"
        #pragma pack(push, 1)
        class CCitadelPlayer_MovementServices : public source2sdk::server::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x2a0            
            uint8_t _pad02c8[0x8]; // 0x2c8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            bool m_bToggleDuckActive; // 0x2d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInPortalEnvironment; // 0x2d1            
            uint8_t _pad02d2[0x2]; // 0x2d2
            Vector m_vecPogoVelocity; // 0x2d4            
            Vector m_vecSupport; // 0x2e0            
            bool m_bColliding; // 0x2ec            
            bool m_bLandedOnGround; // 0x2ed            
            bool m_bHasFreeCursor; // 0x2ee            
            uint8_t _pad02ef[0x1]; // 0x2ef
            float m_flTurnSpringSpeed; // 0x2f0            
            uint8_t _pad02f4[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayer_MovementServices) == 0x310);
    };
};
