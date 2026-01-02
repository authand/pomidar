#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/CPlayer_MovementServices_Humanoid.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
        // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
        // static metadata: MNetworkVarNames "bool m_bInPortalEnvironment"
        #pragma pack(push, 1)
        class CCitadelPlayer_MovementServices : public source2sdk::client::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x280            
            uint8_t _pad02a8[0x8]; // 0x2a8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            bool m_bToggleDuckActive; // 0x2b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInPortalEnvironment; // 0x2b1            
            uint8_t _pad02b2[0x2]; // 0x2b2
            Vector m_vecPogoVelocity; // 0x2b4            
            Vector m_vecSupport; // 0x2c0            
            bool m_bColliding; // 0x2cc            
            bool m_bLandedOnGround; // 0x2cd            
            bool m_bHasFreeCursor; // 0x2ce            
            uint8_t _pad02cf[0x1]; // 0x2cf
            float m_flTurnSpringSpeed; // 0x2d0            
            uint8_t _pad02d4[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayer_MovementServices) == 0x2f0);
    };
};
