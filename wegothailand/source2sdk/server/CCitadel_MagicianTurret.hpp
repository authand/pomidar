#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
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
        // Size: 0xc70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
        #pragma pack(push, 1)
        class CCitadel_MagicianTurret : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0c18[0x50]; // 0xc18
            // metadata: MNetworkEnable
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0xc68            
            uint8_t _pad0c6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_MagicianTurret because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_MagicianTurret) == 0xc70);
    };
};
