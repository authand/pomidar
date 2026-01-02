#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0xd60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
        // static metadata: MNetworkVarNames "bool m_bIsSpeedBursting"
        #pragma pack(push, 1)
        class CCitadel_Ability_FlameDash : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0xba0            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flDashEndTime; // 0xbb8            
            // metadata: MNetworkEnable
            bool m_bIsSpeedBursting; // 0xbd0            
            uint8_t _pad0bd1[0x18f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FlameDash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_FlameDash) == 0xd60);
    };
};
