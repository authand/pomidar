#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x1000
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_ViperHookblade : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_vecOutgoingHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecOutgoingHitList;
            char m_vecOutgoingHitList[0x18]; // 0xd90            
            // m_vecReturningHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecReturningHitList;
            char m_vecReturningHitList[0x18]; // 0xda8            
            uint8_t _pad0dc0[0x240];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ViperHookblade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ViperHookblade) == 0x1000);
    };
};
