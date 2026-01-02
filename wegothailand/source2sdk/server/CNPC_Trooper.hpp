#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CInfoTrooperBossSpawn;
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
        // Size: 0x1b20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "float m_flHealingChargeParticlePct"
        #pragma pack(push, 1)
        class CNPC_Trooper : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1a08[0x18]; // 0x1a08
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x1a20            
            std::int32_t m_iLaneSlot; // 0x1a24            
            uint8_t _pad1a28[0x24]; // 0x1a28
            // m_hSpawnWaveController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoTrooperBossSpawn> m_hSpawnWaveController;
            char m_hSpawnWaveController[0x4]; // 0x1a4c            
            // m_hTrooperSpawnPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrooperSpawnPoint;
            char m_hTrooperSpawnPoint[0x4]; // 0x1a50            
            uint8_t _pad1a54[0x1c]; // 0x1a54
            // m_hNearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hNearDeathModifier;
            char m_hNearDeathModifier[0x18]; // 0x1a70            
            uint8_t _pad1a88[0x8]; // 0x1a88
            // metadata: MNetworkEnable
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x1a90            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "1.000000"
            float m_flHealingChargeParticlePct; // 0x1a94            
            uint8_t _pad1a98[0x88];
            
            // Datamap fields:
            // int32_t m_iCoverGroupID; // 0x1938
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Trooper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Trooper) == 0x1b20);
    };
};
