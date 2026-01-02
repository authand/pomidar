#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/LockonTarget_t.hpp"
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
        // Size: 0xf88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
        // static metadata: MNetworkVarNames "GameTime_t m_LockOnStartTime"
        #pragma pack(push, 1)
        class CCitadelBaseLockonAbility : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x180]; // 0xd90
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecLockonTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::LockonTarget_t> m_vecLockonTargets;
            char m_vecLockonTargets[0x68]; // 0xf10            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_LockOnStartTime; // 0xf78            
            uint8_t _pad0f7c[0x4]; // 0xf7c
            source2sdk::client::ParticleIndex_t m_nTargetingLightEffect; // 0xf80            
            uint8_t _pad0f84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseLockonAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelBaseLockonAbility) == 0xf88);
    };
};
