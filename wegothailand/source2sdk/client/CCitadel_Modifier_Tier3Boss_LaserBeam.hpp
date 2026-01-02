#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Tier3Boss_Base.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Size: 0x1d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tier3Boss_LaserBeam : public source2sdk::client::CCitadel_Modifier_Tier3Boss_Base
        {
        public:
            uint8_t _pad00c0[0x14]; // 0xc0
            source2sdk::entity2::GameTime_t m_flSoundStartTime; // 0xd4            
            uint8_t _pad00d8[0x4]; // 0xd8
            Vector m_vStart; // 0xdc            
            Vector m_vEnd; // 0xe8            
            Vector m_vPrevEnd; // 0xf4            
            float m_flAngleBetweenTrace; // 0x100            
            float m_flPlayerDamagePerTick; // 0x104            
            float m_flNPCDamagePerTick; // 0x108            
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0x10c            
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x110            
            float m_flDamageTickRate; // 0x128            
            source2sdk::entity2::GameTime_t m_flLastShakeTime; // 0x12c            
            bool m_bSweepRightFirst; // 0x130            
            uint8_t _pad0131[0x3]; // 0x131
            Vector m_vecBeamTarget; // 0x134            
            source2sdk::entity2::GameTime_t m_flLastBeamUpdateTime; // 0x140            
            Vector m_vecEnemyPosition; // 0x144            
            std::int32_t m_nTrackingIndex; // 0x150            
            bool m_bPreviewMode; // 0x154            
            source2sdk::modellib::AttachmentHandle_t m_hAttachment; // 0x155            
            uint8_t _pad0156[0x82];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tier3Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Tier3Boss_LaserBeam) == 0x1d8);
    };
};
