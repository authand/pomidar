#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xff0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
        #pragma pack(push, 1)
        class CCitadel_Ability_GooGrenade : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_vecPuddleModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecPuddleModifiers;
            char m_vecPuddleModifiers[0x18]; // 0xd90            
            uint8_t _pad0da8[0x240]; // 0xda8
            source2sdk::entity2::GameTime_t m_LastDetonateTime; // 0xfe8            
            uint8_t _pad0fec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GooGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_GooGrenade) == 0xff0);
    };
};
