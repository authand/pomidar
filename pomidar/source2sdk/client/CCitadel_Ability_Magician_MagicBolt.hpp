#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelProjectile;
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
        // Size: 0x1078
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Magician_MagicBolt : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x8]; // 0xd90
            // m_vecDeployedProjectiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_CitadelProjectile>> m_vecDeployedProjectiles;
            char m_vecDeployedProjectiles[0x18]; // 0xd98            
            std::int32_t m_iCurrentRedirects; // 0xdb0            
            uint8_t _pad0db4[0x2c4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Magician_MagicBolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Magician_MagicBolt) == 0x1078);
    };
};
