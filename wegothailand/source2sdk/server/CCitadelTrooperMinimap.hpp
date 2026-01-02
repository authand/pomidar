#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/STrooperFOWEntity.hpp"

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
        // Size: 0x560
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_timeLastUpdate"
        // static metadata: MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
        #pragma pack(push, 1)
        class CCitadelTrooperMinimap : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_timeLastUpdate; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::STrooperFOWEntity> m_vecFOWEntities;
            char m_vecFOWEntities[0x68]; // 0x4f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTrooperMinimap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTrooperMinimap) == 0x560);
    };
};
