#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CInfoFan;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vFanOrigin"
        // static metadata: MNetworkVarNames "Vector m_vFanOriginOffset"
        // static metadata: MNetworkVarNames "Vector m_vFanEnd"
        // static metadata: MNetworkVarNames "Vector m_vNoiseDirectionTarget"
        // static metadata: MNetworkVarNames "Vector m_vDirection"
        // static metadata: MNetworkVarNames "bool m_bPushTowardsInfoTarget"
        // static metadata: MNetworkVarNames "bool m_bPushAwayFromInfoTarget"
        // static metadata: MNetworkVarNames "Quaternion m_qNoiseDelta"
        // static metadata: MNetworkVarNames "CHandle< CInfoFan> m_hInfoFan"
        // static metadata: MNetworkVarNames "float m_flForce"
        // static metadata: MNetworkVarNames "bool m_bFalloff"
        // static metadata: MNetworkVarNames "CountdownTimer m_RampTimer"
        #pragma pack(push, 1)
        class CTriggerFan : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vFanOrigin; // 0x9d8            
            // metadata: MNetworkEnable
            Vector m_vFanOriginOffset; // 0x9e4            
            // metadata: MNetworkEnable
            Vector m_vFanEnd; // 0x9f0            
            // metadata: MNetworkEnable
            Vector m_vNoiseDirectionTarget; // 0x9fc            
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0xa08            
            // metadata: MNetworkEnable
            bool m_bPushTowardsInfoTarget; // 0xa14            
            // metadata: MNetworkEnable
            bool m_bPushAwayFromInfoTarget; // 0xa15            
            uint8_t _pad0a16[0xa]; // 0xa16
            // metadata: MNetworkEnable
            Quaternion m_qNoiseDelta; // 0xa20            
            // metadata: MNetworkEnable
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0xa30            
            // metadata: MNetworkEnable
            float m_flForce; // 0xa34            
            // metadata: MNetworkEnable
            bool m_bFalloff; // 0xa38            
            uint8_t _pad0a39[0x7]; // 0xa39
            // metadata: MNetworkEnable
            source2sdk::server::CountdownTimer m_RampTimer; // 0xa40            
            CUtlSymbolLarge m_iszInfoFan; // 0xa58            
            float m_flRopeForceScale; // 0xa60            
            float m_flParticleForceScale; // 0xa64            
            float m_flPlayerForce; // 0xa68            
            bool m_bPlayerWindblock; // 0xa6c            
            uint8_t _pad0a6d[0x3]; // 0xa6d
            float m_flNPCForce; // 0xa70            
            float m_flRampTime; // 0xa74            
            float m_fNoiseDegrees; // 0xa78            
            float m_fNoiseSpeed; // 0xa7c            
            bool m_bPushPlayer; // 0xa80            
            bool m_bRampDown; // 0xa81            
            uint8_t _pad0a82[0x2]; // 0xa82
            std::int32_t m_nManagerFanIdx; // 0xa84            
            uint8_t _pad0a88[0x8];
            
            // Datamap fields:
            // void CTriggerFanPushThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerFan) == 0xa90);
    };
};
