#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0xd30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_BulletFlurry : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flFlurryEndTime; // 0xba0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0xbb8            
            uint8_t _pad0bbc[0x144]; // 0xbbc
            // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecShootTargets;
            char m_vecShootTargets[0x18]; // 0xd00            
            std::int32_t m_nNumPlayersKilled; // 0xd18            
            std::int32_t m_nShootIndex; // 0xd1c            
            std::int32_t m_nShootIndexNPC; // 0xd20            
            std::int32_t m_nBurstShots; // 0xd24            
            bool m_bHasCameraOverride; // 0xd28            
            uint8_t _pad0d29[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_BulletFlurry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_BulletFlurry) == 0xd30);
    };
};
