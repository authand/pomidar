#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_CitadelNPC.hpp"
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
        // Size: 0x1b68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastWeakpointHitTime"
        // static metadata: MNetworkVarNames "Vector m_vecElectricBeamLookTarget"
        // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
        #pragma pack(push, 1)
        class CNPC_Boss_Tier2 : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1a08[0x30]; // 0x1a08
            Vector m_vecStartingPosition; // 0x1a38            
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x1a44            
            uint8_t _pad1a48[0x8]; // 0x1a48
            // metadata: MNetworkEnable
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x1a50            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x1a54            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x1a58            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastWeakpointHitTime; // 0x1a5c            
            uint8_t _pad1a60[0x20]; // 0x1a60
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecElectricBeamLookTarget; // 0x1a80            
            // metadata: MNetworkEnable
            std::int32_t m_nElectricBeamCasts; // 0x1a8c            
            uint8_t _pad1a90[0x10]; // 0x1a90
            source2sdk::entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1aa0            
            uint8_t _pad1ac8[0xa0];
            
            // Datamap fields:
            // CUtlSymbolLarge m_strBossEntityName; // 0x1ad0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier2) == 0x1b68);
    };
};
