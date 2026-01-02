#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1028
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
        // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
        #pragma pack(push, 1)
        class CAbility_Fathom_LurkersAmbush : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x240]; // 0xd90
            // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::client::CCitadelModifier> m_hRegenModifier;
            char m_hRegenModifier[0x18]; // 0xfd0            
            // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::client::CCitadelModifier> m_hInvisModifier;
            char m_hInvisModifier[0x18]; // 0xfe8            
            // metadata: MNetworkEnable
            bool m_bIsVisibleOnMinimap; // 0x1000            
            uint8_t _pad1001[0x3]; // 0x1001
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStoppedMovingStartTime; // 0x1004            
            Vector m_vLastPos; // 0x1008            
            float m_flDebuffDuration; // 0x1014            
            source2sdk::entity2::GameTime_t m_flChannelTimeStarted; // 0x1018            
            bool m_bWasLatchedWhenCast; // 0x101c            
            uint8_t _pad101d[0x3]; // 0x101d
            source2sdk::client::ParticleIndex_t m_ChargeUpParticle; // 0x1020            
            uint8_t _pad1024[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fathom_LurkersAmbush) == 0x1028);
    };
};
