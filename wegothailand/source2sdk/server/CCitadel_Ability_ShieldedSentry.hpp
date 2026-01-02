#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CNPC_SimpleAnimatingAI;
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
        // Size: 0xf60
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_ShieldedSentry : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecDeployedSentries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CNPC_SimpleAnimatingAI>> m_vecDeployedSentries;
            char m_vecDeployedSentries[0x18]; // 0xba0            
            uint8_t _pad0bb8[0x3a8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ShieldedSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ShieldedSentry) == 0xf60);
    };
};
