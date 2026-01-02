#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerPawn;
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
        // Size: 0xb48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
        // static metadata: MNetworkVarNames "int m_nNameOffset"
        // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
        // static metadata: MNetworkVarNames "Vector m_vVacuumStartPos"
        // static metadata: MNetworkVarNames "Vector m_vInitialVacuumVel"
        // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hVacuumTarget"
        #pragma pack(push, 1)
        class CCitadel_BreakablePropPickup : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xab8            
            // metadata: MNetworkEnable
            bool m_bActive; // 0xad0            
            uint8_t _pad0ad1[0x7]; // 0xad1
            // metadata: MNetworkEnable
            CUtlString m_sPickupName; // 0xad8            
            // metadata: MNetworkEnable
            std::int32_t m_nNameOffset; // 0xae0            
            uint8_t _pad0ae4[0x4]; // 0xae4
            // metadata: MNetworkEnable
            CUtlString m_sAmbientNoise; // 0xae8            
            // metadata: MNetworkEnable
            Vector m_vVacuumStartPos; // 0xaf0            
            // metadata: MNetworkEnable
            Vector m_vInitialVacuumVel; // 0xafc            
            // metadata: MNetworkEnable
            // m_hVacuumTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPlayerPawn> m_hVacuumTarget;
            char m_hVacuumTarget[0x4]; // 0xb08            
            uint8_t _pad0b0c[0x1c]; // 0xb0c
            source2sdk::entity2::GameTime_t m_flVacuumStartTime; // 0xb28            
            Vector m_vImpactVel; // 0xb2c            
            Vector m_vImpactPos; // 0xb38            
            source2sdk::entity2::GameTime_t m_flImpactTime; // 0xb44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakablePropPickup) == 0xb48);
    };
};
