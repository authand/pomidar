#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_SmokeGrenade_Blocker;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPointModifierThinker;
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
        // Size: 0x1d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SmokeGrenade : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_SmokeGrenade_Blocker> m_hBlocker;
            char m_hBlocker[0x4]; // 0xc8            
            // m_hFriendlyAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointModifierThinker> m_hFriendlyAura;
            char m_hFriendlyAura[0x4]; // 0xcc            
            // m_hEnemyAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointModifierThinker> m_hEnemyAura;
            char m_hEnemyAura[0x4]; // 0xd0            
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0xd4            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xd8            
            uint8_t _pad00dc[0xc4]; // 0xdc
            Vector m_vOrigin; // 0x1a0            
            uint8_t _pad01ac[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_SmokeGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_SmokeGrenade) == 0x1d8);
    };
};
