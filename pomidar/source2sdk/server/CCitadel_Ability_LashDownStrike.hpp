#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0xf28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
        // static metadata: MNetworkVarNames "float m_flStartHeight"
        #pragma pack(push, 1)
        class CCitadel_Ability_LashDownStrike : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0xc0]; // 0xba0
            source2sdk::entity2::GameTime_t m_ImpactTime; // 0xc60            
            Vector m_vDamagePos; // 0xc64            
            Vector m_vDamageDir; // 0xc70            
            uint8_t _pad0c7c[0x4]; // 0xc7c
            // m_vHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEnemies;
            char m_vHitEnemies[0x18]; // 0xc80            
            uint8_t _pad0c98[0x20]; // 0xc98
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0xcb8            
            source2sdk::client::ParticleIndex_t m_PreviewEffect; // 0xcd0            
            uint8_t _pad0cd4[0x244]; // 0xcd4
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStrikeVel; // 0xf18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flStartHeight; // 0xf24            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_LashDownStrike) == 0xf28);
    };
};
