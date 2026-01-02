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
        // Size: 0x8a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_timeLaunch"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackableTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackableTime"
        // static metadata: MNetworkVarNames "int m_nLaunchNum"
        #pragma pack(push, 1)
        class CItemXP : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0808[0x5c]; // 0x808
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeLaunch; // 0x864            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flAttackableTime; // 0x868            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flEndAttackableTime; // 0x86c            
            // metadata: MNetworkEnable
            std::int32_t m_nLaunchNum; // 0x870            
            uint8_t _pad0874[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemXP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemXP) == 0x8a0);
    };
};
