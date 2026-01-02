#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0xe38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
        // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
        #pragma pack(push, 1)
        class CAbility_Fathom_LurkersAmbush : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x240]; // 0xba0
            // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hRegenModifier;
            char m_hRegenModifier[0x18]; // 0xde0            
            // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hInvisModifier;
            char m_hInvisModifier[0x18]; // 0xdf8            
            // metadata: MNetworkEnable
            bool m_bIsVisibleOnMinimap; // 0xe10            
            uint8_t _pad0e11[0x3]; // 0xe11
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStoppedMovingStartTime; // 0xe14            
            Vector m_vLastPos; // 0xe18            
            float m_flDebuffDuration; // 0xe24            
            source2sdk::entity2::GameTime_t m_flChannelTimeStarted; // 0xe28            
            bool m_bWasLatchedWhenCast; // 0xe2c            
            uint8_t _pad0e2d[0x3]; // 0xe2d
            source2sdk::client::ParticleIndex_t m_ChargeUpParticle; // 0xe30            
            uint8_t _pad0e34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fathom_LurkersAmbush) == 0xe38);
    };
};
