#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"

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
        // Size: 0x1a60
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_MortarSentry : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1a08[0xc]; // 0x1a08
            float m_flAttackCone; // 0x1a14            
            float m_flLastAlertSound; // 0x1a18            
            float m_flTrackingSpeed; // 0x1a1c            
            Vector m_vTargetPosition; // 0x1a20            
            float m_flSearchRadius; // 0x1a2c            
            uint8_t _pad1a30[0x30];
            
            // Datamap fields:
            // float m_flLifeTime; // 0x1a30
            // void m_nCurrentVolley; // 0x1a40
            // void m_nGrenadesPerVolley; // 0x1a44
            // void m_flNextAttackTime; // 0x1a48
            // void m_flAttackRateInnerVolley; // 0x1a4c
            // void m_flAttackRate; // 0x1a50
            // void m_vLastTargetPos; // 0x1a54
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_MortarSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_MortarSentry) == 0x1a60);
    };
};
