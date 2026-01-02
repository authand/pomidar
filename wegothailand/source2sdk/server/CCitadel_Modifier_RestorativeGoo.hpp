#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_RestorativeGooCube;
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
        // Size: 0x430
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_RestorativeGoo : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::entity2::GameTime_t m_flEarliestBreakoutTime; // 0xc8            
            float m_flTotalPendingHeal; // 0xcc            
            uint8_t _pad00d0[0x340]; // 0xd0
            // m_hGooCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_RestorativeGooCube> m_hGooCube;
            char m_hGooCube[0x4]; // 0x410            
            float m_flBreakoutPercentage; // 0x414            
            uint8_t _pad0418[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_RestorativeGoo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_RestorativeGoo) == 0x430);
    };
};
