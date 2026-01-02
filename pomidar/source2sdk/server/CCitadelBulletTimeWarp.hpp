#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0xa28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flBulletTimeScale"
        // static metadata: MNetworkVarNames "float m_flProjectileTimeScale"
        // static metadata: MNetworkVarNames "GameTime_t m_flExpireTime"
        // static metadata: MNetworkVarNames "float m_flStopDuration"
        #pragma pack(push, 1)
        class CCitadelBulletTimeWarp : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flBulletTimeScale; // 0x808            
            // metadata: MNetworkEnable
            float m_flProjectileTimeScale; // 0x80c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flExpireTime; // 0x810            
            // metadata: MNetworkEnable
            float m_flStopDuration; // 0x814            
            uint8_t _pad0818[0x210];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBulletTimeWarp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBulletTimeWarp) == 0xa28);
    };
};
