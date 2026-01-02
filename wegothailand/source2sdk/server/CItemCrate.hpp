#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CPhysicsProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xe60
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "int m_eLootType"
        #pragma pack(push, 1)
        class CItemCrate : public source2sdk::server::CPhysicsProp
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xe30            
            uint8_t _pad0e48[0x14]; // 0xe48
            // metadata: MNetworkEnable
            std::int32_t m_eLootType; // 0xe5c            
            
            // Datamap fields:
            // CHandle< CBaseEntity > m_hSpawner; // 0xe48
            // int32_t m_eObjectivePosition; // 0xe54
            // void InputAttachedToParachute; // 0x0
            // void InputDetachedFromParachute; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemCrate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemCrate) == 0xe60);
    };
};
