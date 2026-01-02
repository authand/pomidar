#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFishPool;
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
        // Size: 0xbc0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_nModelIndex"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkVarNames "float32 m_x"
        // static metadata: MNetworkVarNames "float32 m_y"
        // static metadata: MNetworkVarNames "float32 m_z"
        // static metadata: MNetworkVarNames "float32 m_angle"
        // static metadata: MNetworkVarNames "Vector m_poolOrigin"
        // static metadata: MNetworkVarNames "float32 m_waterLevel"
        #pragma pack(push, 1)
        class CFish : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // m_pool has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFishPool> m_pool;
            char m_pool[0x4]; // 0xab8            
            std::uint32_t m_id; // 0xabc            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_x"
            float m_x; // 0xac0            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_y"
            float m_y; // 0xac4            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_z"
            float m_z; // 0xac8            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "angle_normalize_positive"
            // metadata: MNetworkBitCount "7"
            // metadata: MNetworkMinValue "0.000000"
            // metadata: MNetworkMaxValue "360.000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_angle; // 0xacc            
            float m_angleChange; // 0xad0            
            Vector m_forward; // 0xad4            
            Vector m_perp; // 0xae0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_poolOrigin; // 0xaec            
            // metadata: MNetworkEnable
            float m_waterLevel; // 0xaf8            
            float m_speed; // 0xafc            
            float m_desiredSpeed; // 0xb00            
            float m_calmSpeed; // 0xb04            
            float m_panicSpeed; // 0xb08            
            float m_avoidRange; // 0xb0c            
            source2sdk::server::CountdownTimer m_turnTimer; // 0xb10            
            bool m_turnClockwise; // 0xb28            
            uint8_t _pad0b29[0x7]; // 0xb29
            source2sdk::server::CountdownTimer m_goTimer; // 0xb30            
            source2sdk::server::CountdownTimer m_moveTimer; // 0xb48            
            source2sdk::server::CountdownTimer m_panicTimer; // 0xb60            
            source2sdk::server::CountdownTimer m_disperseTimer; // 0xb78            
            source2sdk::server::CountdownTimer m_proximityTimer; // 0xb90            
            // m_visible has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CFish*> m_visible;
            char m_visible[0x18]; // 0xba8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFish because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFish) == 0xbc0);
    };
};
