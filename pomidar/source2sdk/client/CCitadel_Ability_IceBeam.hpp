#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityBeam_t.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1938
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
        #pragma pack(push, 1)
        class CCitadel_Ability_IceBeam : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x204]; // 0xd90
            source2sdk::entity2::GameTime_t m_flNextDamageTick; // 0xf94            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAbilityBeam_t m_beam; // 0xf98            
            uint8_t _pad18e8[0x38]; // 0x18e8
            // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecEntitiesHit;
            char m_vecEntitiesHit[0x18]; // 0x1920            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IceBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_IceBeam) == 0x1938);
    };
};
