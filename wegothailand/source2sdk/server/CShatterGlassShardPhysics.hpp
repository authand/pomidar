#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"
#include "source2sdk/server/shard_model_desc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xec0
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_hModel"
        // static metadata: MNetworkVarNames "shard_model_desc_t m_ShardDesc"
        #pragma pack(push, 1)
        class CShatterGlassShardPhysics : public source2sdk::server::CPhysicsProp
        {
        public:
            bool m_bDebris; // 0xe30            
            uint8_t _pad0e31[0x3]; // 0xe31
            std::uint32_t m_hParentShard; // 0xe34            
            // metadata: MNetworkEnable
            source2sdk::server::shard_model_desc_t m_ShardDesc; // 0xe38            
            uint8_t _pad0eb8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CShatterGlassShardPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CShatterGlassShardPhysics) == 0xec0);
    };
};
