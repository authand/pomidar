#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
        // Size: 0xca8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        #pragma pack(push, 1)
        class CNPC_ShieldedSentry : public source2sdk::server::CNPC_SimpleAnimatingAI
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc30            
            // metadata: MNetworkEnable
            float m_flAttackRange; // 0xc48            
            float m_flAttackCone; // 0xc4c            
            float m_flLifeTime; // 0xc50            
            float m_flTrackingSpeed; // 0xc54            
            float m_flDeployTime; // 0xc58            
            float m_flAttackDelay; // 0xc5c            
            uint8_t _pad0c60[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_ShieldedSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_ShieldedSentry) == 0xca8);
    };
};
