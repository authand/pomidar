#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseYamatoAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x10e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nPowerLevel"
        #pragma pack(push, 1)
        class CCitadel_Ability_PowerSlash : public source2sdk::client::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0d98[0x20]; // 0xd98
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nPowerLevel; // 0xdb8            
            uint8_t _pad0dbc[0x4]; // 0xdbc
            // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitTargets;
            char m_vecHitTargets[0x18]; // 0xdc0            
            source2sdk::client::ParticleIndex_t m_nCastParticle; // 0xdd8            
            uint8_t _pad0ddc[0x304];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PowerSlash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PowerSlash) == 0x10e0);
    };
};
