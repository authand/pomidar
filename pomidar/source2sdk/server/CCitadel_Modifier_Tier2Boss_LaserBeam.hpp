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
        struct CBaseEntity;
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
        // Size: 0x340
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tier2Boss_LaserBeam : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c8[0xc0]; // 0xc8
            bool m_bPreview; // 0x188            
            uint8_t _pad0189[0x17]; // 0x189
            source2sdk::entity2::GameTime_t m_flSoundStartTime; // 0x1a0            
            uint8_t _pad01a4[0x4]; // 0x1a4
            Vector m_vStart; // 0x1a8            
            Vector m_vEnd; // 0x1b4            
            Vector m_vPrevEnd; // 0x1c0            
            float m_flAngleBetweenTrace; // 0x1cc            
            float m_flDamagePerTick; // 0x1d0            
            float m_flCreepDamagePerTick; // 0x1d4            
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x1e0            
            float m_flDamageTickRate; // 0x1f8            
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x1fc            
            bool m_bSweepRightFirst; // 0x200            
            uint8_t _pad0201[0x3]; // 0x201
            QAngle m_angBeamAim; // 0x204            
            Vector m_vecBeamTarget; // 0x210            
            source2sdk::entity2::GameTime_t m_flLastBeamUpdateTime; // 0x21c            
            uint8_t _pad0220[0x18]; // 0x220
            source2sdk::entity2::GameTime_t m_flTargetingTaskStartTime; // 0x238            
            float m_flTrackVel; // 0x23c            
            uint8_t _pad0240[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tier2Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Tier2Boss_LaserBeam) == 0x340);
    };
};
