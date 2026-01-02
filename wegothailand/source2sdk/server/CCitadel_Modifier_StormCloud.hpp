#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x350
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_StormCloud : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c8[0x8]; // 0xc8
            float m_flDamageInterval; // 0xd0            
            bool m_bGrowing; // 0xd4            
            uint8_t _pad00d5[0x3]; // 0xd5
            source2sdk::entity2::GameTime_t m_flLastDamageWaveTime; // 0xd8            
            std::int32_t m_nNumPlayersKilled; // 0xdc            
            source2sdk::entity2::GameTime_t m_flNextRandomLightningStrike; // 0xe0            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xe4            
            float m_flRadiusIncrementPerSecond; // 0xe8            
            Vector m_vCastPosition; // 0xec            
            bool m_bFiredEndingSoonSound; // 0xf8            
            uint8_t _pad00f9[0x3]; // 0xf9
            std::int32_t m_nLastTickForLightningCenterCalc; // 0xfc            
            Vector m_vecLightningCenter; // 0x100            
            source2sdk::client::SatVolumeIndex_t m_nSatVolumeIndex; // 0x10c            
            uint8_t _pad0110[0x240];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_StormCloud because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_StormCloud) == 0x350);
    };
};
