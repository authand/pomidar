#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"
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
        // Size: 0x918
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelTrackedProjectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x8e8            
            source2sdk::entity2::GameTime_t m_flTrackingStartTime; // 0x8ec            
            float m_flTrackingDampingCoefficient; // 0x8f0            
            float m_flTrackingSpeed; // 0x8f4            
            float m_flTrackingDuration; // 0x8f8            
            source2sdk::entity2::GameTime_t m_flTrackingWindowStart; // 0x8fc            
            source2sdk::entity2::GameTime_t m_flTrackingWindowEnd; // 0x900            
            float m_flTrackingStopDuration; // 0x904            
            Vector m_vLastValidPosition; // 0x908            
            uint8_t _pad0914[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTrackedProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTrackedProjectile) == 0x918);
    };
};
