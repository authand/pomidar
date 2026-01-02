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
        // Size: 0x10f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nKillsEarned"
        // static metadata: MNetworkVarNames "int m_nAssistsEarned"
        #pragma pack(push, 1)
        class CCitadel_Ability_Drifter_Hunger : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_vecCurrentTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecCurrentTargets;
            char m_vecCurrentTargets[0x18]; // 0xd90            
            uint8_t _pad0da8[0x4]; // 0xda8
            // metadata: MNetworkEnable
            std::int32_t m_nKillsEarned; // 0xdac            
            // metadata: MNetworkEnable
            std::int32_t m_nAssistsEarned; // 0xdb0            
            uint8_t _pad0db4[0x344];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Drifter_Hunger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Drifter_Hunger) == 0x10f8);
    };
};
