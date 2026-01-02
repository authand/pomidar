#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityBeam_t.hpp"
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
        // Size: 0x1638
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
        #pragma pack(push, 1)
        class CCitadel_Ability_IceBeam : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x204]; // 0xba0
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0xda4            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam; // 0xda8            
            uint8_t _pad15e8[0x38]; // 0x15e8
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x1620            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IceBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_IceBeam) == 0x1638);
    };
};
