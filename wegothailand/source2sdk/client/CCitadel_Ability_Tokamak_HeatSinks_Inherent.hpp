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
        // Size: 0xf18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flDissipationRate"
        // static metadata: MNetworkVarNames "GameTime_t m_flDissipationTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flHeatTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
        // static metadata: MNetworkVarNames "bool m_bOverheating"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            std::int32_t m_nIntervalsElapsed; // 0xd90            
            source2sdk::entity2::GameTime_t m_NextShotTime; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flDissipationRate; // 0xd98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDissipationTime; // 0xd9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flHeatTime; // 0xda0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOverheatSoundTime; // 0xda4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bOverheating; // 0xda8            
            uint8_t _pad0da9[0x16f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HeatSinks_Inherent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tokamak_HeatSinks_Inherent) == 0xf18);
    };
};
