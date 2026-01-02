#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x360
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_IcePath : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c8[0x280]; // 0xc8
            std::int32_t m_iShardCount; // 0x348            
            Vector m_vLastShardPosition; // 0x34c            
            // m_hSurfShard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_hSurfShard;
            char m_hSurfShard[0x4]; // 0x358            
            uint8_t _pad035c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_IcePath) == 0x360);
    };
};
