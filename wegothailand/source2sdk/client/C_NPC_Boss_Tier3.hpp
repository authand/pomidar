#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"

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
        // Size: 0x1800
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
        // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
        // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
        #pragma pack(push, 1)
        class C_NPC_Boss_Tier3 : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x16c8            
            uint8_t _pad16cc[0x4]; // 0x16cc
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnT3Targeting1Changed"
            QAngle m_angTargeting1; // 0x16d0            
            uint8_t _pad16dc[0x84]; // 0x16dc
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnT3Targeting2Changed"
            QAngle m_angTargeting2; // 0x1760            
            uint8_t _pad176c[0x84]; // 0x176c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
            std::int32_t m_nElectricBeamCasts; // 0x17f0            
            // metadata: MNetworkEnable
            source2sdk::client::ETier3State_t m_eAliveState; // 0x17f4            
            // metadata: MNetworkEnable
            source2sdk::client::ETier3Phase_t m_ePhase; // 0x17f8            
            uint8_t _pad17fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_Boss_Tier3 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_Boss_Tier3) == 0x1800);
    };
};
