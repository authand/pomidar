#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0xe28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flPrepareStartTime"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_ChargedTackle : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x240]; // 0xba0
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0xde0            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0xde1            
            uint8_t _pad0de2[0x2]; // 0xde2
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0xde4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0xde8            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0xdec            
            Vector m_vecLastPosition; // 0xdf8            
            std::int32_t m_nStuckFramesCount; // 0xe04            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xe08            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0xe20            
            uint8_t _pad0e24[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ChargedTackle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ChargedTackle) == 0xe28);
    };
};
