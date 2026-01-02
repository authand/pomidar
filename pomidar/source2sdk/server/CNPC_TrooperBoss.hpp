#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelPlayerClipComponent.hpp"
#include "source2sdk/server/CNPC_Trooper.hpp"
#include "source2sdk/server/LaneSide_t.hpp"

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
        // Size: 0x1d68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        #pragma pack(push, 1)
        class CNPC_TrooperBoss : public source2sdk::server::CNPC_Trooper
        {
        public:
            uint8_t _pad1b20[0x18]; // 0x1b20
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
            // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
            // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
            source2sdk::server::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1b38            
            uint8_t _pad1b58[0x8]; // 0x1b58
            source2sdk::server::LaneSide_t m_LaneSide; // 0x1b60            
            uint8_t _pad1b61[0x1ff]; // 0x1b61
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x1d60            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x1d64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperBoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperBoss) == 0x1d68);
    };
};
