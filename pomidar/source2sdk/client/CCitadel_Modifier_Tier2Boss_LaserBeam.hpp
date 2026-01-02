#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x338
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tier2Boss_LaserBeam : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0xc0]; // 0xc0
            bool m_bPreview; // 0x180            
            uint8_t _pad0181[0x17]; // 0x181
            source2sdk::entity2::GameTime_t m_flSoundStartTime; // 0x198            
            uint8_t _pad019c[0x4]; // 0x19c
            Vector m_vStart; // 0x1a0            
            Vector m_vEnd; // 0x1ac            
            Vector m_vPrevEnd; // 0x1b8            
            float m_flAngleBetweenTrace; // 0x1c4            
            float m_flDamagePerTick; // 0x1c8            
            float m_flCreepDamagePerTick; // 0x1cc            
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0x1d0            
            uint8_t _pad01d4[0x4]; // 0x1d4
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x1d8            
            float m_flDamageTickRate; // 0x1f0            
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x1f4            
            bool m_bSweepRightFirst; // 0x1f8            
            uint8_t _pad01f9[0x3]; // 0x1f9
            QAngle m_angBeamAim; // 0x1fc            
            Vector m_vecBeamTarget; // 0x208            
            source2sdk::entity2::GameTime_t m_flLastBeamUpdateTime; // 0x214            
            uint8_t _pad0218[0x18]; // 0x218
            source2sdk::entity2::GameTime_t m_flTargetingTaskStartTime; // 0x230            
            float m_flTrackVel; // 0x234            
            uint8_t _pad0238[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tier2Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Tier2Boss_LaserBeam) == 0x338);
    };
};
