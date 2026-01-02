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
        // Size: 0xe08
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
        class CCitadel_Ability_Mantle : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flVertOffset; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flHorizGap; // 0xd94            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPos; // 0xd98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vTargetPos; // 0xda4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            QAngle m_angFacing; // 0xdb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nMantleTypeIndex; // 0xdbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xdc0            
            uint8_t _pad0dc4[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Mantle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Mantle) == 0xe08);
    };
};
