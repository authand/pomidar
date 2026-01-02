#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_NPC_TrooperVData.hpp"

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
        // Size: 0x1908
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperBossVData : public source2sdk::client::CAI_NPC_TrooperVData
        {
        public:
            bool m_bMitigateDamageFromPlayers; // 0x18c8            
            uint8_t _pad18c9[0x3]; // 0x18c9
            float m_flPlayerAutoAttackRange; // 0x18cc            
            float m_flMinMeleeAttackTime; // 0x18d0            
            float m_flInvulRange; // 0x18d4            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sAngryStart; // 0x18d8            
            CSoundEventName m_sAngryLoop; // 0x18e8            
            CSoundEventName m_sAngryStop; // 0x18f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperBossVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_TrooperBossVData) == 0x1908);
    };
};
