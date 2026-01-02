#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFlexSlotTypes_t.hpp"
#include "source2sdk/server/CTeam.hpp"
#include "source2sdk/server/STeamFOWEntity.hpp"
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
        // Size: 0x660
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flBaseObjectiveHealth"
        // static metadata: MNetworkVarNames "int m_vecBaseLocationX"
        // static metadata: MNetworkVarNames "int m_vecBaseLocationY"
        // static metadata: MNetworkVarNames "bool m_bHasValidBaseLocation"
        // static metadata: MNetworkVarNames "EHANDLE m_hPayload"
        // static metadata: MNetworkVarNames "int m_nBossesAlive"
        // static metadata: MNetworkVarNames "int m_nBossesMax"
        // static metadata: MNetworkVarNames "EFlexSlotTypes_t m_nFlexSlotsUnlocked"
        // static metadata: MNetworkVarNames "int m_nBaseGuardianLanesCleared"
        // static metadata: MNetworkVarNames "STeamFOWEntity m_vecFOWEntities"
        #pragma pack(push, 1)
        class CCitadelTeam : public source2sdk::server::CTeam
        {
        public:
            uint8_t _pad05a8[0xc]; // 0x5a8
            // metadata: MNetworkEnable
            float m_flBaseObjectiveHealth; // 0x5b4            
            // metadata: MNetworkEnable
            std::int32_t m_vecBaseLocationX; // 0x5b8            
            // metadata: MNetworkEnable
            std::int32_t m_vecBaseLocationY; // 0x5bc            
            // metadata: MNetworkEnable
            bool m_bHasValidBaseLocation; // 0x5c0            
            uint8_t _pad05c1[0x1f]; // 0x5c1
            // metadata: MNetworkEnable
            // m_hPayload has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPayload;
            char m_hPayload[0x4]; // 0x5e0            
            // metadata: MNetworkEnable
            std::int32_t m_nBossesAlive; // 0x5e4            
            // metadata: MNetworkEnable
            std::int32_t m_nBossesMax; // 0x5e8            
            // metadata: MNetworkEnable
            source2sdk::client::EFlexSlotTypes_t m_nFlexSlotsUnlocked; // 0x5ec            
            uint8_t _pad05ee[0x2]; // 0x5ee
            // metadata: MNetworkEnable
            std::int32_t m_nBaseGuardianLanesCleared; // 0x5f0            
            uint8_t _pad05f4[0x4]; // 0x5f4
            // metadata: MNetworkEnable
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkPriority "32"
            // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::STeamFOWEntity> m_vecFOWEntities;
            char m_vecFOWEntities[0x68]; // 0x5f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTeam) == 0x660);
    };
};
