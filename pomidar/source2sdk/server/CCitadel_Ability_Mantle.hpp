#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xc18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flVertOffset"
        // static metadata: MNetworkVarNames "float m_flHorizGap"
        // static metadata: MNetworkVarNames "Vector m_vStartPos"
        // static metadata: MNetworkVarNames "Vector m_vTargetPos"
        // static metadata: MNetworkVarNames "QAngle m_angFacing"
        // static metadata: MNetworkVarNames "int m_nMantleTypeIndex"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Mantle : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flVertOffset; // 0xba0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flHorizGap; // 0xba4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPos; // 0xba8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vTargetPos; // 0xbb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            QAngle m_angFacing; // 0xbc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nMantleTypeIndex; // 0xbcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xbd0            
            uint8_t _pad0bd4[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Mantle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Mantle) == 0xc18);
    };
};
