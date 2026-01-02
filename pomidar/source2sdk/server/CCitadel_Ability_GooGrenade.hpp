#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xe00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
        #pragma pack(push, 1)
        class CCitadel_Ability_GooGrenade : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_vecPuddleModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecPuddleModifiers;
            char m_vecPuddleModifiers[0x18]; // 0xba0            
            uint8_t _pad0bb8[0x240]; // 0xbb8
            source2sdk::entity2::GameTime_t m_LastDetonateTime; // 0xdf8            
            uint8_t _pad0dfc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GooGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GooGrenade) == 0xe00);
    };
};
