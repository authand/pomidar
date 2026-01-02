#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleLiquidContents_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x218
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_GameLiquidSpill : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Liquid Contents"
            // metadata: MPropertySuppressExpr "mod != hlx"
            source2sdk::particles::ParticleLiquidContents_t m_liquidContents; // 0x210            
            uint8_t _pad0214[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_GameLiquidSpill because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_GameLiquidSpill) == 0x218);
    };
};
