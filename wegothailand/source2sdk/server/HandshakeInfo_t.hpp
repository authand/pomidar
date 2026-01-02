#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/HandshakeState_t.hpp"
#include "source2sdk/server/TaskHandshakeScope_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct HandshakeInfo_t
        {
        public:
            source2sdk::server::HandshakeState_t m_nHandshakeState; // 0x0            
            source2sdk::server::TaskHandshakeScope_t m_nHandshakeScope; // 0x4            
            source2sdk::entity2::GameTick_t m_nLastHandshakeUpdateTick; // 0x8            
            bool m_bForceHandshakeRestartOnScriptedSequenceCompletion; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            CGlobalSymbol m_sHandshakeName; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nHandshakeState) == 0x0);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nHandshakeScope) == 0x4);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nLastHandshakeUpdateTick) == 0x8);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_bForceHandshakeRestartOnScriptedSequenceCompletion) == 0xc);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_sHandshakeName) == 0x10);
        
        static_assert(sizeof(source2sdk::server::HandshakeInfo_t) == 0x18);
    };
};
