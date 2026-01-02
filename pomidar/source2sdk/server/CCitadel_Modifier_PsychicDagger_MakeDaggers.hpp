#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_PsychicDagger_MakeDaggers_Dagger_t.hpp"

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
        // Size: 0x3f8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PsychicDagger_MakeDaggers : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_iCurrentProjectile; // 0xc8            
            std::int32_t m_nDaggerCount; // 0xcc            
            uint8_t _pad00d0[0x280]; // 0xd0
            source2sdk::entity2::GameTime_t m_flLastDaggerSpawn; // 0x350            
            source2sdk::entity2::GameTime_t m_flLastDaggerShoot; // 0x354            
            bool m_bIsSpawning; // 0x358            
            bool m_bInterrupted; // 0x359            
            uint8_t _pad035a[0x6]; // 0x35a
            // m_vecDaggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CCitadel_Modifier_PsychicDagger_MakeDaggers_Dagger_t> m_vecDaggers;
            char m_vecDaggers[0x18]; // 0x360            
            uint8_t _pad0378[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PsychicDagger_MakeDaggers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PsychicDagger_MakeDaggers) == 0x3f8);
    };
};
