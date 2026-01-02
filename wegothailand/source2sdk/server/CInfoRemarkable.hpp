#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x500
        // Has VTable
        #pragma pack(push, 1)
        class CInfoRemarkable : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_iTimesRemarkedUpon; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            CUtlSymbolLarge m_szRemarkContext; // 0x4f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoRemarkable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoRemarkable) == 0x500);
    };
};
