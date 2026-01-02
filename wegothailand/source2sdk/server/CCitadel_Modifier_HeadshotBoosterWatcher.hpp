#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseBulletPreRollProc.hpp"

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
        // Size: 0x1e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HeadshotBoosterWatcher : public source2sdk::server::CCitadel_Modifier_BaseBulletPreRollProc
        {
        public:
            source2sdk::client::ShotID_t m_ShotId; // 0x1a0            
            uint8_t _pad01a4[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HeadshotBoosterWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HeadshotBoosterWatcher) == 0x1e8);
    };
};
