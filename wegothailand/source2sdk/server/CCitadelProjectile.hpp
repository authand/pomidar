#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // Size: 0x8e8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkOverride "m_flTimeScale"
        // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
        // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
        // static metadata: MNetworkVarNames "AbilityID_t m_abilityID"
        // static metadata: MNetworkVarNames "EHANDLE m_hThrower"
        // static metadata: MNetworkVarNames "string_t m_sParticleName"
        // static metadata: MNetworkVarNames "Vector m_vecSpawnPosition"
        // static metadata: MNetworkVarNames "float m_flProjectileSpeed"
        // static metadata: MNetworkVarNames "float m_flMaxLifetime"
        // static metadata: MNetworkVarNames "float m_flParticleRadius"
        #pragma pack(push, 1)
        class CCitadelProjectile : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0808[0x20]; // 0x808
            float m_flMaxDistance; // 0x828            
            uint8_t _pad082c[0x4]; // 0x82c
            std::uint64_t m_nCachedExcludeFlags; // 0x830            
            bool m_bInPortalEnvironment; // 0x838            
            bool m_bHandlingPortalResult; // 0x839            
            uint8_t _pad083a[0x2]; // 0x83a
            float m_flArmingTime; // 0x83c            
            float m_flChargeAmount; // 0x840            
            bool m_bCollideWithThrower; // 0x844            
            bool m_bNewCollideWithThrower; // 0x845            
            uint8_t _pad0846[0xa]; // 0x846
            float m_flTickSoundInterval; // 0x850            
            uint8_t _pad0854[0x4]; // 0x854
            Vector m_vLastAbsOrigin; // 0x858            
            Vector m_vLastAbsVelocity; // 0x864            
            uint8_t _pad0870[0x18]; // 0x870
            // m_vecTargetToIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTargetToIgnore;
            char m_vecTargetToIgnore[0x18]; // 0x888            
            bool m_bDetonateStarted; // 0x8a0            
            bool m_bTouchDisabled; // 0x8a1            
            uint8_t _pad08a2[0x2]; // 0x8a2
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0x8a4            
            // metadata: MNetworkEnable
            Vector m_vInitialPosition; // 0x8b0            
            // metadata: MNetworkEnable
            CUtlStringToken m_abilityID; // 0x8bc            
            // metadata: MNetworkEnable
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThrower;
            char m_hThrower[0x4]; // 0x8c0            
            uint8_t _pad08c4[0x4]; // 0x8c4
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_sParticleName; // 0x8c8            
            // metadata: MNetworkEnable
            Vector m_vecSpawnPosition; // 0x8d0            
            // metadata: MNetworkEnable
            float m_flProjectileSpeed; // 0x8dc            
            // metadata: MNetworkEnable
            float m_flMaxLifetime; // 0x8e0            
            // metadata: MNetworkEnable
            float m_flParticleRadius; // 0x8e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelProjectile) == 0x8e8);
    };
};
