#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1030
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasTurretReady"
        // static metadata: MNetworkVarNames "int m_iCurrentSwapCount"
        // static metadata: MNetworkVarNames "GameTime_t m_flTurretExpireTime"
        // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
        #pragma pack(push, 1)
        class CCitadel_Ability_TurretClone : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x140]; // 0xd90
            // metadata: MNetworkEnable
            bool m_bHasTurretReady; // 0xed0            
            uint8_t _pad0ed1[0x3]; // 0xed1
            // metadata: MNetworkEnable
            std::int32_t m_iCurrentSwapCount; // 0xed4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTurretExpireTime; // 0xed8            
            uint8_t _pad0edc[0x4]; // 0xedc
            source2sdk::client::ShotID_t m_nLastBulletShotID; // 0xee0            
            // metadata: MNetworkEnable
            // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_pActiveTurret;
            char m_pActiveTurret[0x4]; // 0xee4            
            source2sdk::client::ParticleIndex_t m_nTurretFXIndex; // 0xee8            
            uint8_t _pad0eec[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_TurretClone) == 0x1030);
    };
};
