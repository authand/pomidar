#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"
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
        // Size: 0xdd8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Upgrade_StabilizingTripod : public source2sdk::server::CCitadel_Item
        {
        public:
            // m_vecDeployedSentries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecDeployedSentries;
            char m_vecDeployedSentries[0x18]; // 0xba8            
            Vector m_vDeployPosition; // 0xbc0            
            QAngle m_vDeployAngles; // 0xbcc            
            uint8_t _pad0bd8[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Upgrade_StabilizingTripod because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Upgrade_StabilizingTripod) == 0xdd8);
    };
};
