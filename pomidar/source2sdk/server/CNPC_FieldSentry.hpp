#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CNPC_SimpleAnimatingAI.hpp"

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
        // Size: 0xc78
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flAimPitch"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        #pragma pack(push, 1)
        class CNPC_FieldSentry : public source2sdk::server::CNPC_SimpleAnimatingAI
        {
        public:
            uint8_t _pad0c30[0xc]; // 0xc30
            // metadata: MNetworkEnable
            float m_flAimPitch; // 0xc3c            
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0xc40            
            float m_flAttackCone; // 0xc44            
            float m_flAttackDelay; // 0xc48            
            source2sdk::entity2::GameTime_t m_flLastAlertSound; // 0xc4c            
            float m_flTrackingSpeed; // 0xc50            
            float m_flDeployTime; // 0xc54            
            uint8_t _pad0c58[0xa]; // 0xc58
            bool m_bHadEnemy; // 0xc62            
            bool m_bLockedOn; // 0xc63            
            uint8_t _pad0c64[0x10]; // 0xc64
            // metadata: MNetworkEnable
            float m_flAttackRange; // 0xc74            
            
            // Datamap fields:
            // float m_flLifeTime; // 0xc5c
            // void m_flSpawnTime; // 0xc58
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_FieldSentry) == 0xc78);
    };
};
