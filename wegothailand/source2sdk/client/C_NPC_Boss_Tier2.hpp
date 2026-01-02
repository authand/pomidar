#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1790
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastWeakpointHitTime"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
        #pragma pack(push, 1)
        class C_NPC_Boss_Tier2 : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            uint8_t _pad16c8[0x18]; // 0x16c8
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x16e0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x16e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x16e8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastWeakpointHitTime; // 0x16ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBossTargetedEnemyChanged"
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x16f0            
            uint8_t _pad16f4[0x4]; // 0x16f4
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnLookTargetChanged"
            Vector m_vecElectricBeamLookTarget; // 0x16f8            
            uint8_t _pad1704[0x84]; // 0x1704
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnElectricBeamCastsChanged"
            std::int32_t m_nElectricBeamCasts; // 0x1788            
            uint8_t _pad178c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_Boss_Tier2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_Boss_Tier2) == 0x1790);
    };
};
