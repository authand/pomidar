#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xbf8
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Synth_Grasp : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecTetheredEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTetheredEnemies;
            char m_vecTetheredEnemies[0x18]; // 0xba0            
            uint8_t _pad0bb8[0x40];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Grasp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Synth_Grasp) == 0xbf8);
    };
};
