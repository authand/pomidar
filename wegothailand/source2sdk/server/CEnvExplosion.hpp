#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x860
        // Has VTable
        #pragma pack(push, 1)
        class CEnvExplosion : public source2sdk::server::CModelPointEntity
        {
        public:
            std::int32_t m_iMagnitude; // 0x808            
            float m_flPlayerDamage; // 0x80c            
            std::int32_t m_iRadiusOverride; // 0x810            
            float m_flInnerRadius; // 0x814            
            float m_flDamageForce; // 0x818            
            // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInflictor;
            char m_hInflictor[0x4]; // 0x81c            
            source2sdk::client::DamageTypes_t m_iCustomDamageType; // 0x820            
            bool m_bCreateDebris; // 0x824            
            uint8_t _pad0825[0xb]; // 0x825
            CUtlSymbolLarge m_iszCustomEffectName; // 0x830            
            CUtlSymbolLarge m_iszCustomSoundName; // 0x838            
            bool m_bSuppressParticleImpulse; // 0x840            
            uint8_t _pad0841[0x3]; // 0x841
            source2sdk::client::Class_T m_iClassIgnore; // 0x844            
            source2sdk::client::Class_T m_iClassIgnore2; // 0x848            
            uint8_t _pad084c[0x4]; // 0x84c
            CUtlSymbolLarge m_iszEntityIgnoreName; // 0x850            
            // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityIgnore;
            char m_hEntityIgnore[0x4]; // 0x858            
            uint8_t _pad085c[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge explosion_type; // 0x7fffffff
            // uint32_t m_nExplosionType; // 0x828
            // void InputExplode; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvExplosion) == 0x860);
    };
};
