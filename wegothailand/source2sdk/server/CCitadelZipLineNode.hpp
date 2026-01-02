#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // Size: 0x8e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
        // static metadata: MNetworkVarNames "Vector m_vTangentIn"
        // static metadata: MNetworkVarNames "Vector m_vTangentOut"
        // static metadata: MNetworkVarNames "float m_flCumulativeDistance"
        // static metadata: MNetworkVarNames "int16 m_iNodeIndex"
        // static metadata: MNetworkVarNames "int16 m_eCaptureState"
        // static metadata: MNetworkVarNames "int16 m_iPrimaryLane"
        // static metadata: MNetworkVarNames "int16 m_nRopesParity"
        // static metadata: MNetworkVarNames "bool m_bCornerNode"
        // static metadata: MNetworkVarNames "bool m_bCapturable"
        // static metadata: MNetworkVarNames "bool m_bAlwaysUsable"
        // static metadata: MNetworkVarNames "bool m_bOneWay"
        // static metadata: MNetworkVarNames "bool m_bDisableZippingToByPlayers"
        // static metadata: MNetworkVarNames "bool m_bUseForMinimapDrawing"
        // static metadata: MNetworkVarNames "EHANDLE m_hGuardingBoss"
        // static metadata: MNetworkVarNames "float m_flRopeRadius"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        #pragma pack(push, 1)
        class CCitadelZipLineNode : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0808[0x38]; // 0x808
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "connectionsChanged"
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CCitadelZipLineNode>> m_vecConnections;
            char m_vecConnections[0x18]; // 0x840            
            // metadata: MNetworkEnable
            Vector m_vTangentIn; // 0x858            
            // metadata: MNetworkEnable
            Vector m_vTangentOut; // 0x864            
            // metadata: MNetworkEnable
            float m_flCumulativeDistance; // 0x870            
            uint8_t _pad0874[0x3c]; // 0x874
            CUtlSymbolLarge m_strGuardBossName; // 0x8b0            
            CUtlSymbolLarge m_strGuardBossName2; // 0x8b8            
            CUtlSymbolLarge m_strGuardBossName3; // 0x8c0            
            // metadata: MNetworkEnable
            std::int16_t m_iNodeIndex; // 0x8c8            
            // metadata: MNetworkEnable
            std::int16_t m_eCaptureState; // 0x8ca            
            // metadata: MNetworkEnable
            std::int16_t m_iPrimaryLane; // 0x8cc            
            // metadata: MNetworkEnable
            std::int16_t m_nRopesParity; // 0x8ce            
            // metadata: MNetworkEnable
            bool m_bCornerNode; // 0x8d0            
            // metadata: MNetworkEnable
            bool m_bCapturable; // 0x8d1            
            // metadata: MNetworkEnable
            bool m_bAlwaysUsable; // 0x8d2            
            // metadata: MNetworkEnable
            bool m_bOneWay; // 0x8d3            
            // metadata: MNetworkEnable
            bool m_bDisableZippingToByPlayers; // 0x8d4            
            // metadata: MNetworkEnable
            bool m_bUseForMinimapDrawing; // 0x8d5            
            uint8_t _pad08d6[0x2]; // 0x8d6
            // metadata: MNetworkEnable
            // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGuardingBoss;
            char m_hGuardingBoss[0x4]; // 0x8d8            
            // metadata: MNetworkEnable
            float m_flRopeRadius; // 0x8dc            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x8e0            
            uint8_t _pad08e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZipLineNode) == 0x8e8);
    };
};
