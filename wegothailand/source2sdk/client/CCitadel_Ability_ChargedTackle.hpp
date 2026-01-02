#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1018
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flPrepareStartTime"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_ChargedTackle : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x240]; // 0xd90
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0xfd0            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0xfd1            
            uint8_t _pad0fd2[0x2]; // 0xfd2
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0xfd4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0xfd8            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0xfdc            
            Vector m_vecLastPosition; // 0xfe8            
            std::int32_t m_nStuckFramesCount; // 0xff4            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xff8            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0x1010            
            uint8_t _pad1014[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ChargedTackle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ChargedTackle) == 0x1018);
    };
};
