#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"

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
        // Size: 0x11e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        class CNPC_Escort_VData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            // metadata: MPropertyDescription "How far to search for friendly players for deploying our shield and walking."
            float m_flEscortFriendlyHeroSearchRadius; // 0x11d8            
            // metadata: MPropertyDescription "Stop walking when we detect an objective this far away."
            float m_flEscortEnemyObjectiveSearchRadius; // 0x11dc            
            // metadata: MPropertyDescription "How close is close enough for pathfinding to a node."
            float m_flCloseEnoughToNode; // 0x11e0            
            // metadata: MPropertyDescription "When we detect friendly players in front of us, apply this scale to our walking speed so we'll catch up to them."
            float m_flCatchUpSpeed; // 0x11e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Escort_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Escort_VData) == 0x11e8);
    };
};
