#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
        // Size: 0xe40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasTurretReady"
        // static metadata: MNetworkVarNames "int m_iCurrentSwapCount"
        // static metadata: MNetworkVarNames "GameTime_t m_flTurretExpireTime"
        // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
        #pragma pack(push, 1)
        class CCitadel_Ability_TurretClone : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x140]; // 0xba0
            // metadata: MNetworkEnable
            bool m_bHasTurretReady; // 0xce0            
            uint8_t _pad0ce1[0x3]; // 0xce1
            // metadata: MNetworkEnable
            std::int32_t m_iCurrentSwapCount; // 0xce4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTurretExpireTime; // 0xce8            
            uint8_t _pad0cec[0x4]; // 0xcec
            source2sdk::client::ShotID_t m_nLastBulletShotID; // 0xcf0            
            // metadata: MNetworkEnable
            // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pActiveTurret;
            char m_pActiveTurret[0x4]; // 0xcf4            
            source2sdk::client::ParticleIndex_t m_nTurretFXIndex; // 0xcf8            
            uint8_t _pad0cfc[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_TurretClone) == 0xe40);
    };
};
