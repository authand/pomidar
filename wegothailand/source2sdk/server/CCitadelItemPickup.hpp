#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
        // Size: 0x6530
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "int32 m_eLootType"
        // static metadata: MNetworkVarNames "int32 m_nCurrencyValue"
        // static metadata: MNetworkVarNames "string_t m_iszModelName"
        // static metadata: MNetworkVarNames "float m_flModelScale"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetPlayer"
        // static metadata: MNetworkVarNames "float m_flFallRate"
        #pragma pack(push, 1)
        class CCitadelItemPickup : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0c18[0x18]; // 0xc18
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc30            
            // metadata: MNetworkEnable
            std::int32_t m_eLootType; // 0xc48            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrencyValue; // 0xc4c            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszModelName; // 0xc50            
            // metadata: MNetworkEnable
            float m_flModelScale; // 0xc58            
            // metadata: MNetworkEnable
            // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetPlayer;
            char m_hTargetPlayer[0x4]; // 0xc5c            
            // metadata: MNetworkEnable
            float m_flFallRate; // 0xc60            
            uint8_t _pad0c64[0xc]; // 0xc64
            Vector m_vHomePosition; // 0xc70            
            Vector m_vDropPosition; // 0xc7c            
            source2sdk::entity2::GameTime_t m_tFirstPickupTime; // 0xc88            
            uint8_t _pad0c8c[0x58a4];
            
            // Datamap fields:
            // bool m_bRequireGroundForPickup; // 0xc68
            // bool from_crate; // 0x7fffffff
            // int32_t m_eObjectivePosition; // 0xc64
            // int32_t m_nKillingTeamNumber; // 0xc6c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelItemPickup) == 0x6530);
    };
};
