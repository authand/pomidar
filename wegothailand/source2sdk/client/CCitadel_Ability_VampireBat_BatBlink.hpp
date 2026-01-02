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
        // Size: 0xf70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iRemainingCasts"
        // static metadata: MNetworkVarNames "bool m_bIsBlinking"
        // static metadata: MNetworkVarNames "GameTime_t m_RecastEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_BlinkEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatBlink : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x188]; // 0xd90
            // metadata: MNetworkEnable
            std::int32_t m_iRemainingCasts; // 0xf18            
            // metadata: MNetworkEnable
            bool m_bIsBlinking; // 0xf1c            
            uint8_t _pad0f1d[0x3]; // 0xf1d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_RecastEndTime; // 0xf20            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_BlinkEndTime; // 0xf24            
            uint8_t _pad0f28[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatBlink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VampireBat_BatBlink) == 0xf70);
    };
};
