#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFlightState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0xe48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hGrabTarget"
        // static metadata: MNetworkVarNames "EFlightState m_eFlightState"
        // static metadata: MNetworkVarNames "bool m_bIsGrabbing"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingBomb"
        // static metadata: MNetworkVarNames "float m_flCurrentSpeed"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_AirLift : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x18]; // 0xba0
            // metadata: MNetworkEnable
            // m_hGrabTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGrabTarget;
            char m_hGrabTarget[0x4]; // 0xbb8            
            source2sdk::client::ParticleIndex_t m_nHoldBombEffect; // 0xbbc            
            uint8_t _pad0bc0[0x280]; // 0xbc0
            // metadata: MNetworkEnable
            source2sdk::client::EFlightState m_eFlightState; // 0xe40            
            // metadata: MNetworkEnable
            bool m_bIsGrabbing; // 0xe41            
            // metadata: MNetworkEnable
            bool m_bIsHoldingBomb; // 0xe42            
            uint8_t _pad0e43[0x1]; // 0xe43
            // metadata: MNetworkEnable
            float m_flCurrentSpeed; // 0xe44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tengu_AirLift) == 0xe48);
    };
};
