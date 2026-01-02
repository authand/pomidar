#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Tier3Boss_Base.hpp"
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
        // Size: 0x1e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tier3Boss_LaserBeam : public source2sdk::server::CCitadel_Modifier_Tier3Boss_Base
        {
        public:
            uint8_t _pad00c8[0x14]; // 0xc8
            source2sdk::entity2::GameTime_t m_flSoundStartTime; // 0xdc            
            uint8_t _pad00e0[0x4]; // 0xe0
            Vector m_vStart; // 0xe4            
            Vector m_vEnd; // 0xf0            
            Vector m_vPrevEnd; // 0xfc            
            float m_flAngleBetweenTrace; // 0x108            
            float m_flPlayerDamagePerTick; // 0x10c            
            float m_flNPCDamagePerTick; // 0x110            
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0x114            
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x118            
            float m_flDamageTickRate; // 0x130            
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x134            
            bool m_bSweepRightFirst; // 0x138            
            uint8_t _pad0139[0x3]; // 0x139
            Vector m_vecBeamTarget; // 0x13c            
            source2sdk::entity2::GameTime_t m_flLastBeamUpdateTime; // 0x148            
            Vector m_vecEnemyPosition; // 0x14c            
            std::int32_t m_nTrackingIndex; // 0x158            
            bool m_bPreviewMode; // 0x15c            
            source2sdk::modellib::AttachmentHandle_t m_hAttachment; // 0x15d            
            uint8_t _pad015e[0x82];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tier3Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Tier3Boss_LaserBeam) == 0x1e0);
    };
};
