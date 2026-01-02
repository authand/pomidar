#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xaf8
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
        #pragma pack(push, 1)
        class C_CitadelProjectile : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09d0[0x38]; // 0x9d0
            float m_flMaxDistance; // 0xa08            
            uint8_t _pad0a0c[0x4]; // 0xa0c
            std::uint64_t m_nCachedExcludeFlags; // 0xa10            
            bool m_bInPortalEnvironment; // 0xa18            
            bool m_bHandlingPortalResult; // 0xa19            
            uint8_t _pad0a1a[0x2]; // 0xa1a
            float m_flArmingTime; // 0xa1c            
            float m_flChargeAmount; // 0xa20            
            bool m_bCollideWithThrower; // 0xa24            
            bool m_bNewCollideWithThrower; // 0xa25            
            uint8_t _pad0a26[0xa]; // 0xa26
            float m_flTickSoundInterval; // 0xa30            
            uint8_t _pad0a34[0x4]; // 0xa34
            // metadata: MNetworkEnable
            Vector m_vInitialVelocity; // 0xa38            
            // metadata: MNetworkEnable
            Vector m_vInitialPosition; // 0xa44            
            // metadata: MNetworkEnable
            CUtlStringToken m_abilityID; // 0xa50            
            // metadata: MNetworkEnable
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThrower;
            char m_hThrower[0x4]; // 0xa54            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_sParticleName; // 0xa58            
            // metadata: MNetworkEnable
            Vector m_vecSpawnPosition; // 0xa60            
            // metadata: MNetworkEnable
            float m_flProjectileSpeed; // 0xa6c            
            // metadata: MNetworkEnable
            float m_flMaxLifetime; // 0xa70            
            uint8_t _pad0a74[0x4]; // 0xa74
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ParticleRadiusChanged"
            float m_flParticleRadius; // 0xa78            
            uint8_t _pad0a7c[0x74]; // 0xa7c
            float m_flPreviousTimeScale; // 0xaf0            
            uint8_t _pad0af4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelProjectile) == 0xaf8);
    };
};
