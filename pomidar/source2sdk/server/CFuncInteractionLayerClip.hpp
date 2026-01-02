#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x820
        // Has VTable
        #pragma pack(push, 1)
        class CFuncInteractionLayerClip : public source2sdk::server::CBaseModelEntity
        {
        public:
            bool m_bDisabled; // 0x808            
            uint8_t _pad0809[0x7]; // 0x809
            CUtlSymbolLarge m_iszInteractsAs; // 0x810            
            CUtlSymbolLarge m_iszInteractsWith; // 0x818            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncInteractionLayerClip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncInteractionLayerClip) == 0x820);
    };
};
