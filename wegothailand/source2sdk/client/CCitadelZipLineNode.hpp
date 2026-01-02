#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
        // Size: 0xa88
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
        class CCitadelZipLineNode : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09d0[0x68]; // 0x9d0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "connectionsChanged"
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CCitadelZipLineNode>> m_vecConnections;
            char m_vecConnections[0x18]; // 0xa38            
            // metadata: MNetworkEnable
            Vector m_vTangentIn; // 0xa50            
            // metadata: MNetworkEnable
            Vector m_vTangentOut; // 0xa5c            
            // metadata: MNetworkEnable
            float m_flCumulativeDistance; // 0xa68            
            // metadata: MNetworkEnable
            std::int16_t m_iNodeIndex; // 0xa6c            
            // metadata: MNetworkEnable
            std::int16_t m_eCaptureState; // 0xa6e            
            // metadata: MNetworkEnable
            std::int16_t m_iPrimaryLane; // 0xa70            
            // metadata: MNetworkEnable
            std::int16_t m_nRopesParity; // 0xa72            
            // metadata: MNetworkEnable
            bool m_bCornerNode; // 0xa74            
            // metadata: MNetworkEnable
            bool m_bCapturable; // 0xa75            
            // metadata: MNetworkEnable
            bool m_bAlwaysUsable; // 0xa76            
            // metadata: MNetworkEnable
            bool m_bOneWay; // 0xa77            
            // metadata: MNetworkEnable
            bool m_bDisableZippingToByPlayers; // 0xa78            
            // metadata: MNetworkEnable
            bool m_bUseForMinimapDrawing; // 0xa79            
            uint8_t _pad0a7a[0x2]; // 0xa7a
            // metadata: MNetworkEnable
            // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGuardingBoss;
            char m_hGuardingBoss[0x4]; // 0xa7c            
            // metadata: MNetworkEnable
            float m_flRopeRadius; // 0xa80            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xa84            
            uint8_t _pad0a85[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelZipLineNode) == 0xa88);
    };
};
