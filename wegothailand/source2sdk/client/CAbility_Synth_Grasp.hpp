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
        // Size: 0xde8
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Synth_Grasp : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_vecTetheredEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecTetheredEnemies;
            char m_vecTetheredEnemies[0x18]; // 0xd90            
            uint8_t _pad0da8[0x40];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Grasp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Synth_Grasp) == 0xde8);
    };
};
