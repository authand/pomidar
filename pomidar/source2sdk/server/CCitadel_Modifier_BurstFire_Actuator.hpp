#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x2b8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_BurstFire_Actuator : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bLastShotInFlight; // 0xc8            
            bool m_bBonusTracked; // 0xc9            
            uint8_t _pad00ca[0x2]; // 0xca
            std::int32_t m_nHitCounter; // 0xcc            
            std::int32_t m_nTotalBurstFireShots; // 0xd0            
            std::int32_t m_nInitialzedClipSize; // 0xd4            
            std::int32_t m_nBonusPitch; // 0xd8            
            bool m_bInitialized; // 0xdc            
            uint8_t _pad00dd[0x3]; // 0xdd
            std::int32_t m_nIncreasedBurstShotCount; // 0xe0            
            float m_flIntraBurstCycleTime; // 0xe4            
            float m_flCycleTimePct; // 0xe8            
            float m_flMaxCycleTimeOverride; // 0xec            
            float m_flMaxBurstFireCooldownOverride; // 0xf0            
            uint8_t _pad00f4[0x1c4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BurstFire_Actuator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BurstFire_Actuator) == 0x2b8);
    };
};
