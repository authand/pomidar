#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/EStatsType.hpp"

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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        class CScaleFunctionVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            source2sdk::client::EStatsType m_eSpecificStatScaleType; // 0x28            
            float m_flStatScale; // 0x2c            
            bool m_bFunctionDisabled; // 0x30            
            uint8_t _pad0031[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScaleFunctionVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScaleFunctionVData) == 0x40);
    };
};
