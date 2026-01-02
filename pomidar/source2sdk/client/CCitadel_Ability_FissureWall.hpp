#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xec0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecPosition"
        // static metadata: MNetworkVarNames "Vector m_vecTravellingPosition"
        // static metadata: MNetworkVarNames "Vector m_vecInitialPosition"
        // static metadata: MNetworkVarNames "GameTime_t m_CastTime"
        // static metadata: MNetworkVarNames "Vector m_vecDirection"
        // static metadata: MNetworkVarNames "Vector m_vecLeft"
        // static metadata: MNetworkVarNames "float m_Length"
        // static metadata: MNetworkVarNames "bool m_bTraveling"
        // static metadata: MNetworkVarNames "bool m_bPreview"
        #pragma pack(push, 1)
        class CCitadel_Ability_FissureWall : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x10]; // 0xd90
            // m_vecWallPreviewParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_vecWallPreviewParticles;
            char m_vecWallPreviewParticles[0x18]; // 0xda0            
            uint8_t _pad0db8[0xc0]; // 0xdb8
            // metadata: MNetworkEnable
            Vector m_vecPosition; // 0xe78            
            // metadata: MNetworkEnable
            Vector m_vecTravellingPosition; // 0xe84            
            // metadata: MNetworkEnable
            Vector m_vecInitialPosition; // 0xe90            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_CastTime; // 0xe9c            
            // metadata: MNetworkEnable
            Vector m_vecDirection; // 0xea0            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0xeac            
            // metadata: MNetworkEnable
            float m_Length; // 0xeb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PreviewModeChanged"
            bool m_bTraveling; // 0xebc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "PreviewModeChanged"
            bool m_bPreview; // 0xebd            
            uint8_t _pad0ebe[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FissureWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_FissureWall) == 0xec0);
    };
};
