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
        // Size: 0x1a80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bShieldActive"
        // static metadata: MNetworkVarNames "bool m_bPlayingIdle"
        #pragma pack(push, 1)
        class CNPC_TrooperNeutral : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1a08[0x5b]; // 0x1a08
            // metadata: MNetworkEnable
            bool m_bShieldActive; // 0x1a63            
            // metadata: MNetworkEnable
            bool m_bPlayingIdle; // 0x1a64            
            uint8_t _pad1a65[0x1b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutral because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperNeutral) == 0x1a80);
    };
};
