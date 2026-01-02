#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x5a8
        // Has VTable
        #pragma pack(push, 1)
        class CInfoTrooperBossSpawn : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            uint8_t _pad04f0[0x10]; // 0x4f0
            CUtlSymbolLarge m_strBossEntityName; // 0x500            
            std::int32_t m_iLane; // 0x508            
            std::int32_t m_iCoverGroupID; // 0x50c            
            uint8_t _pad0510[0x8]; // 0x510
            bool m_bReinforcementsOnly; // 0x518            
            uint8_t _pad0519[0x17]; // 0x519
            source2sdk::entity2::CEntityIOOutput m_eventOnTrooperKilled; // 0x530            
            uint8_t _pad0558[0x50];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoTrooperBossSpawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoTrooperBossSpawn) == 0x5a8);
    };
};
