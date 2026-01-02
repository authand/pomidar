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
        // Size: 0xa70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_timeLaunch"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackableTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackableTime"
        // static metadata: MNetworkVarNames "int m_nLaunchNum"
        #pragma pack(push, 1)
        class CItemXP : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09d0[0x60]; // 0x9d0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeLaunch; // 0xa30            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flAttackableTime; // 0xa34            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flEndAttackableTime; // 0xa38            
            // metadata: MNetworkEnable
            std::int32_t m_nLaunchNum; // 0xa3c            
            uint8_t _pad0a40[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemXP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CItemXP) == 0xa70);
    };
};
