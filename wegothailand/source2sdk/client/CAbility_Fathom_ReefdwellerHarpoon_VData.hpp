#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"

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
        // Size: 0x17b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Fathom_ReefdwellerHarpoon_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DetachBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff> m_DetachBuff;
            char m_DetachBuff[0x10]; // 0x16f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSwapStarted; // 0x1708            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1718            
            // metadata: MPropertyStartGroup "+Harpoon Properties"
            float m_flAirSpeedMax; // 0x17a0            
            float m_flFallSpeedMax; // 0x17a4            
            float m_flAirDrag; // 0x17a8            
            float m_flInitialSlowSpeed; // 0x17ac            
            float m_flInitialSpeedBias; // 0x17b0            
            float m_flMaxSurfacePitch; // 0x17b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fathom_ReefdwellerHarpoon_VData) == 0x17b8);
    };
};
