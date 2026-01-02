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
        struct CCitadel_Magic_Beam_Blocker;
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
        // Size: 0x220
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_MagicBeam : public source2sdk::server::CCitadelModifier
        {
        public:
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_Magic_Beam_Blocker> m_hBlocker;
            char m_hBlocker[0x4]; // 0xc8            
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0xcc            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xd0            
            uint8_t _pad00d4[0x104]; // 0xd4
            QAngle m_qAngle; // 0x1d8            
            Vector m_vOrigin; // 0x1e4            
            uint8_t _pad01f0[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_MagicBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_MagicBeam) == 0x220);
    };
};
