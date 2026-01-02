#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
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
        // Size: 0xc30
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iTeam"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flPoseParameter"
        // static metadata: MNetworkVarNames "EHANDLE m_hEnemy"
        // static metadata: MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
        #pragma pack(push, 1)
        class CNPC_SimpleAnimatingAI : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ab8[0x14]; // 0xab8
            // metadata: MNetworkEnable
            // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemy;
            char m_hEnemy[0x4]; // 0xacc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelRegenComponent"
            // metadata: MNetworkAlias "CCitadelRegenComponent"
            // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
            source2sdk::server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0xad0            
            
            // Datamap fields:
            // CHandle< CBaseEntity > m_hAbilityOwner; // 0xac0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_SimpleAnimatingAI because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_SimpleAnimatingAI) == 0xc30);
    };
};
