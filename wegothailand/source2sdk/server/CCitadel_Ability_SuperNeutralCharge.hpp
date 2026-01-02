#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xe00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "float m_flTackleDuration"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_SuperNeutralCharge : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x200]; // 0xba0
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0xda0            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0xda1            
            uint8_t _pad0da2[0x2]; // 0xda2
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0xda4            
            // metadata: MNetworkEnable
            float m_flTackleDuration; // 0xda8            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0xdac            
            Vector m_vecLastPosition; // 0xdb8            
            std::int32_t m_nStuckFramesCount; // 0xdc4            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xdc8            
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0xde0            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0xde4            
            uint8_t _pad0de8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_SuperNeutralCharge) == 0xe00);
    };
};
