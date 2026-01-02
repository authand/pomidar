#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/C_AI_BaseNPC.hpp"
#include "source2sdk/client/WeakPoint_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x16c8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iTeam"
        // static metadata: MNetworkIncludeByName "m_vecViewOffset"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkOverride "m_lifeState"
        // static metadata: MNetworkVarNames "bool m_bBeamActive"
        // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
        // static metadata: MNetworkVarNames "bool m_bMinion"
        // static metadata: MNetworkVarNames "EHANDLE m_hLookTarget"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        #pragma pack(push, 1)
        class C_AI_CitadelNPC : public source2sdk::client::C_AI_BaseNPC
        {
        public:
            uint8_t _pad0f38[0x34]; // 0xf38
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEyeBeamActiveChanged"
            bool m_bBeamActive; // 0xf6c            
            uint8_t _pad0f6d[0x3]; // 0xf6d
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnEyeBeamTargetChanged"
            Vector m_vEyeBeamTarget; // 0xf70            
            uint8_t _pad0f7c[0x4a4]; // 0xf7c
            std::int32_t m_nPlayerTeamEvent; // 0x1420            
            uint8_t _pad1424[0x6c]; // 0x1424
            // metadata: MNetworkEnable
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0x1490            
            // metadata: MNetworkEnable
            bool m_bMinion; // 0x14f8            
            uint8_t _pad14f9[0x3]; // 0x14f9
            // metadata: MNetworkEnable
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x14fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1500            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_AI_CitadelNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_AI_CitadelNPC) == 0x16c8);
    };
};
