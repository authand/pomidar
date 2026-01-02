#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ice_path_shard_model_desc_t.hpp"
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
        // Size: 0xa20
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_hModel"
        // static metadata: MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
        // static metadata: MNetworkVarNames "QAngle m_qForward"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
        // static metadata: MNetworkVarNames "float m_flShardWidth"
        #pragma pack(push, 1)
        class C_Citadel_Ice_Path_Shard_Physics : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::ice_path_shard_model_desc_t m_ShardDesc; // 0x9d0            
            // metadata: MNetworkEnable
            QAngle m_qForward; // 0xa08            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnStartTimeChanged"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xa14            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEndTimeChanged"
            source2sdk::entity2::GameTime_t m_flEndTime; // 0xa18            
            // metadata: MNetworkEnable
            float m_flShardWidth; // 0xa1c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Ice_Path_Shard_Physics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Ice_Path_Shard_Physics) == 0xa20);
    };
};
