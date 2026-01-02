#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xcd0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecPosition"
        // static metadata: MNetworkVarNames "Vector m_vecTravellingPosition"
        // static metadata: MNetworkVarNames "Vector m_vecInitialPosition"
        // static metadata: MNetworkVarNames "GameTime_t m_CastTime"
        // static metadata: MNetworkVarNames "Vector m_vecDirection"
        // static metadata: MNetworkVarNames "Vector m_vecLeft"
        // static metadata: MNetworkVarNames "float m_Length"
        // static metadata: MNetworkVarNames "bool m_bTraveling"
        // static metadata: MNetworkVarNames "bool m_bPreview"
        #pragma pack(push, 1)
        class CCitadel_Ability_FissureWall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0xd0]; // 0xba0
            // metadata: MNetworkEnable
            Vector m_vecPosition; // 0xc70            
            // metadata: MNetworkEnable
            Vector m_vecTravellingPosition; // 0xc7c            
            // metadata: MNetworkEnable
            Vector m_vecInitialPosition; // 0xc88            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_CastTime; // 0xc94            
            // metadata: MNetworkEnable
            Vector m_vecDirection; // 0xc98            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0xca4            
            // metadata: MNetworkEnable
            float m_Length; // 0xcb0            
            uint8_t _pad0cb4[0x16]; // 0xcb4
            // metadata: MNetworkEnable
            bool m_bTraveling; // 0xcca            
            // metadata: MNetworkEnable
            bool m_bPreview; // 0xccb            
            uint8_t _pad0ccc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FissureWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_FissureWall) == 0xcd0);
    };
};
