#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0xce0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHoldingBall"
        #pragma pack(push, 1)
        class CCitadel_Ability_WreckingBall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x14]; // 0xba0
            source2sdk::client::ParticleIndex_t m_nBallParticle; // 0xbb4            
            source2sdk::client::ParticleIndex_t m_nCastCompleteParticle; // 0xbb8            
            uint8_t _pad0bbc[0x4]; // 0xbbc
            // m_vecTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTargetsHit;
            char m_vecTargetsHit[0x18]; // 0xbc0            
            uint8_t _pad0bd8[0x100]; // 0xbd8
            // metadata: MNetworkEnable
            bool m_bHoldingBall; // 0xcd8            
            uint8_t _pad0cd9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_WreckingBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_WreckingBall) == 0xce0);
    };
};
