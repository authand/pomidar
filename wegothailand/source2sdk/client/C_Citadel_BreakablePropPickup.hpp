#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelPlayerPawn;
    };
};

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
        // Size: 0xde8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
        // static metadata: MNetworkVarNames "int m_nNameOffset"
        // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
        // static metadata: MNetworkVarNames "Vector m_vVacuumStartPos"
        // static metadata: MNetworkVarNames "Vector m_vInitialVacuumVel"
        // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hVacuumTarget"
        #pragma pack(push, 1)
        class C_Citadel_BreakablePropPickup : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnActiveChanged"
            bool m_bActive; // 0xc98            
            uint8_t _pad0c99[0x7]; // 0xc99
            // metadata: MNetworkEnable
            CUtlString m_sPickupName; // 0xca0            
            // metadata: MNetworkEnable
            std::int32_t m_nNameOffset; // 0xca8            
            uint8_t _pad0cac[0x4]; // 0xcac
            // metadata: MNetworkEnable
            CUtlString m_sAmbientNoise; // 0xcb0            
            // metadata: MNetworkEnable
            Vector m_vVacuumStartPos; // 0xcb8            
            // metadata: MNetworkEnable
            Vector m_vInitialVacuumVel; // 0xcc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnVacuumTargetChanged"
            // m_hVacuumTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelPlayerPawn> m_hVacuumTarget;
            char m_hVacuumTarget[0x4]; // 0xcd0            
            uint8_t _pad0cd4[0xfc]; // 0xcd4
            source2sdk::entity2::GameTime_t m_flVacuumStartTime; // 0xdd0            
            uint8_t _pad0dd4[0xc]; // 0xdd4
            float m_flLastFrameTime; // 0xde0            
            bool m_bVacuumFinished; // 0xde4            
            uint8_t _pad0de5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_BreakablePropPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_BreakablePropPickup) == 0xde8);
    };
};
