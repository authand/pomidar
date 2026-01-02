#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"

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
        // Size: 0x1710
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityRollingFireBallVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyStartGroup "Modifiers"
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flBallLifetime; // 0x16f8            
            float m_flBallStepUpHeight; // 0x16fc            
            float m_flBallDistAboveGround; // 0x1700            
            float m_flBallFloatDownRate; // 0x1704            
            float m_flBallSpeed; // 0x1708            
            float m_flBallTraceRadius; // 0x170c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityRollingFireBallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityRollingFireBallVData) == 0x1710);
    };
};
