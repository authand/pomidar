#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xda0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nFastFireBulletsLeft"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBlitzEndTime"
        #pragma pack(push, 1)
        class CAbility_Synth_Blitz : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecSpecialShots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShotID_t> m_vecSpecialShots;
            char m_vecSpecialShots[0x18]; // 0xba0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nFastFireBulletsLeft; // 0xbb8            
            uint8_t _pad0bbc[0x4]; // 0xbbc
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::server::CCitadelAutoScaledTime m_flBlitzEndTime; // 0xbc0            
            bool m_bCanApplyTechAmp; // 0xbd8            
            bool m_bCanLifesteal; // 0xbd9            
            uint8_t _pad0bda[0x1c6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Blitz because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Synth_Blitz) == 0xda0);
    };
};
