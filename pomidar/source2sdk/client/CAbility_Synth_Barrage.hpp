#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1060
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flNextShootTime"
        #pragma pack(push, 1)
        class CAbility_Synth_Barrage : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x2c0]; // 0xd90
            std::int32_t m_nProjectilesScheduled; // 0x1050            
            source2sdk::client::ParticleIndex_t m_ChannelParticle; // 0x1054            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextShootTime; // 0x1058            
            uint8_t _pad105c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Barrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Synth_Barrage) == 0x1060);
    };
};
