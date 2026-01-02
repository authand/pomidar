#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x570
        // Has VTable
        #pragma pack(push, 1)
        class CLogicAutoCitadel : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnWaitingForPlayersToJoin; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_OnPreGameWait; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnGameInProgress; // 0x540            
            uint8_t _pad0568[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicAutoCitadel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicAutoCitadel) == 0x570);
    };
};
