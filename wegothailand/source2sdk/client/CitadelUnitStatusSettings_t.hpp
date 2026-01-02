#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // 
        // static metadata: MModelGameData
        // static metadata: MFgdHelper
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelUnitStatusSettings_t
        {
        public:
            Vector m_vOffset; // 0x0            
            uint8_t _pad000c[0x4]; // 0xc
            CGlobalSymbol m_sName; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelUnitStatusSettings_t, m_vOffset) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelUnitStatusSettings_t, m_sName) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CitadelUnitStatusSettings_t) == 0x18);
    };
};
