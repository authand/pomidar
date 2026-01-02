#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/MantleType_t.hpp"

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
        // Size: 0x1728
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityMantleVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // m_vecMantleTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::MantleType_t> m_vecMantleTypes;
            char m_vecMantleTypes[0x18]; // 0x16f8            
            // metadata: MPropertyStartGroup "Modifiers"
            float m_flMantleSlowOnHitDuration; // 0x1710            
            uint8_t _pad1714[0x4]; // 0x1714
            // m_MantleSlowOnHitModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_MantleSlowOnHitModifier;
            char m_MantleSlowOnHitModifier[0x10]; // 0x1718            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityMantleVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityMantleVData) == 0x1728);
    };
};
