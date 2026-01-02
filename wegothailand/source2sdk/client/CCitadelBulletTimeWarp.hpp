#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
        // Size: 0x9f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flBulletTimeScale"
        // static metadata: MNetworkVarNames "float m_flProjectileTimeScale"
        // static metadata: MNetworkVarNames "GameTime_t m_flExpireTime"
        // static metadata: MNetworkVarNames "float m_flStopDuration"
        #pragma pack(push, 1)
        class CCitadelBulletTimeWarp : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flBulletTimeScale; // 0x9d0            
            // metadata: MNetworkEnable
            float m_flProjectileTimeScale; // 0x9d4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flExpireTime; // 0x9d8            
            // metadata: MNetworkEnable
            float m_flStopDuration; // 0x9dc            
            uint8_t _pad09e0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBulletTimeWarp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelBulletTimeWarp) == 0x9f8);
    };
};
