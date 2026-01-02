#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1120
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "bool m_bIsDashing"
        // static metadata: MNetworkVarNames "bool m_bStartedInAir"
        #pragma pack(push, 1)
        class CCitadel_Ability_NanoDash : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPosition; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xd9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsDashing; // 0xda8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0xda9            
            uint8_t _pad0daa[0x6]; // 0xdaa
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xdb0            
            Vector m_vecLastPosition; // 0xdc8            
            uint8_t _pad0dd4[0x344]; // 0xdd4
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x1118            
            uint8_t _pad111c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_NanoDash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_NanoDash) == 0x1120);
    };
};
