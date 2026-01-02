#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"

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
        // Size: 0xb60
        // Has VTable
        #pragma pack(push, 1)
        class C_Precipitation : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_flDensity; // 0xb10            
            uint8_t _pad0b14[0xc]; // 0xb14
            float m_flParticleInnerDist; // 0xb20            
            uint8_t _pad0b24[0x4]; // 0xb24
            char* m_pParticleDef; // 0xb28            
            uint8_t _pad0b30[0x20]; // 0xb30
            source2sdk::client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xb50            
            bool m_bActiveParticlePrecipEmitter[1]; // 0xb58            
            bool m_bParticlePrecipInitialized; // 0xb59            
            bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xb5a            
            uint8_t _pad0b5b[0x1]; // 0xb5b
            std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0xb5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Precipitation) == 0xb60);
    };
};
