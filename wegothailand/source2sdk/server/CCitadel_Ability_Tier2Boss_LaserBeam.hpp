#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadelBaseAbilityServerOnly.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0xc00
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier2Boss_LaserBeam : public source2sdk::server::CCitadelBaseAbilityServerOnly
        {
        public:
            // m_pBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_pBeamModifier;
            char m_pBeamModifier[0x18]; // 0xba0            
            uint8_t _pad0bb8[0x40]; // 0xbb8
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosHigh; // 0xbf8            
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosLow; // 0xbf9            
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosLeft; // 0xbfa            
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosRight; // 0xbfb            
            uint8_t _pad0bfc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier2Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tier2Boss_LaserBeam) == 0xc00);
    };
};
