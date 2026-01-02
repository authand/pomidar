#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0xe38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIcePathing"
        // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
        // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
        // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
        #pragma pack(push, 1)
        class CCitadel_Ability_IcePath : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x80]; // 0xd90
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIcePathing; // 0xe10            
            uint8_t _pad0e11[0x3]; // 0xe11
            // metadata: MNetworkEnable
            QAngle m_qLastAngles; // 0xe14            
            // metadata: MNetworkEnable
            Vector m_vLastVelocity; // 0xe20            
            // metadata: MNetworkEnable
            bool m_bFirstMovementTick; // 0xe2c            
            uint8_t _pad0e2d[0x3]; // 0xe2d
            source2sdk::entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0xe30            
            uint8_t _pad0e34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_IcePath) == 0xe38);
    };
};
