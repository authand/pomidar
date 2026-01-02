#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_MotorTransition.hpp"

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
        // Size: 0x78
        // Has VTable
        #pragma pack(push, 1)
        class CAI_MotorNavLink : public source2sdk::server::CAI_MotorTransition
        {
        public:
            std::int32_t m_nNavLinkActiveType; // 0x68            
            uint8_t _pad006c[0xc];
            
            // Datamap fields:
            // CHandle< CBaseEntity > m_hNavLinkEntity; // 0x6c
            // int32_t m_nNavLinkIndex; // 0x70
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_MotorNavLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_MotorNavLink) == 0x78);
    };
};
