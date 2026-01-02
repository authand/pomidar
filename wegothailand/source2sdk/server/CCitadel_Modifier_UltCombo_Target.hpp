#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelModifier;
    };
};

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
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_UltCombo_Target : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            QAngle m_angles; // 0xd0            
            uint8_t _pad00dc[0x4]; // 0xdc
            source2sdk::server::CCitadelModifier* m_pAttachmentModifier; // 0xe0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_UltCombo_Target because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_UltCombo_Target) == 0xe8);
    };
};
