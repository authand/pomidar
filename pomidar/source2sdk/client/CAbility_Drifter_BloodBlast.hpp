#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x10f0
        // Has VTable
        #pragma pack(push, 1)
        class CAbility_Drifter_BloodBlast : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x340]; // 0xd90
            source2sdk::client::ParticleIndex_t m_SandEffect; // 0x10d0            
            uint8_t _pad10d4[0x4]; // 0x10d4
            // m_vecHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitTargets;
            char m_vecHitTargets[0x18]; // 0x10d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Drifter_BloodBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Drifter_BloodBlast) == 0x10f0);
    };
};
