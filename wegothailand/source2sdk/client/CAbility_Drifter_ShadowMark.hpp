#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0xeb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hTeleportTarget"
        // static metadata: MNetworkVarNames "bool m_bTeleported"
        // static metadata: MNetworkVarNames "QAngle m_qPostTeleportAngles"
        #pragma pack(push, 1)
        class CAbility_Drifter_ShadowMark : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0xd90            
            // metadata: MNetworkEnable
            bool m_bTeleported; // 0xd94            
            uint8_t _pad0d95[0x3]; // 0xd95
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnTeleportAnglesChanged"
            QAngle m_qPostTeleportAngles; // 0xd98            
            uint8_t _pad0da4[0x4]; // 0xda4
            source2sdk::entity2::GameTime_t m_flExpireTime; // 0xda8            
            source2sdk::entity2::GameTime_t m_flTeleportedTime; // 0xdac            
            uint8_t _pad0db0[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Drifter_ShadowMark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Drifter_ShadowMark) == 0xeb0);
    };
};
