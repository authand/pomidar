#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"

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
        // Size: 0x8e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierKnockdownVData : public source2sdk::server::CCitadel_Modifier_StunnedVData
        {
        public:
            float m_flSatVolumeRadius; // 0x840            
            float m_flSatVolumeFadeOut; // 0x844            
            float m_flGravityScale; // 0x848            
            float m_flDesatAmount; // 0x84c            
            Color m_satColorDesat; // 0x850            
            Color m_satColorSat; // 0x854            
            Color m_satColorOutline; // 0x858            
            // metadata: MPropertyStartGroup "Camera"
            float m_flGetUpSeqDuration; // 0x85c            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x860            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierKnockdownVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierKnockdownVData) == 0x8e8);
    };
};
