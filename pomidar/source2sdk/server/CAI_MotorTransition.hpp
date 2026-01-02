#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AIMotorTransitionState_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x68
        // Has VTable
        #pragma pack(push, 1)
        class CAI_MotorTransition : public source2sdk::client::CAI_Component
        {
        public:
            uint8_t _pad0040[0x8]; // 0x40
            source2sdk::server::AIMotorTransitionState_t m_nTransitionState; // 0x48            
            Vector m_vNavLinkStartPos; // 0x4c            
            source2sdk::entity2::GameTime_t m_flNavLinkFaceStartTime; // 0x58            
            bool m_bTransitionAnimgraphHasTicked; // 0x5c            
            bool m_bIsTurning; // 0x5d            
            uint8_t _pad005e[0x2]; // 0x5e
            CGlobalSymbol m_strMovementName; // 0x60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorTransition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorTransition) == 0x68);
    };
};
