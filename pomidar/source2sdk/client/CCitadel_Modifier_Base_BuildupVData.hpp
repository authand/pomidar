#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BuildupMode_t.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x778
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Base_BuildupVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            bool m_bUseBaseWeaponCycleTimeForDelay; // 0x760            
            uint8_t _pad0761[0x3]; // 0x761
            float m_flCycleTimeDelayAdd; // 0x764            
            float m_flBuildUpDecayDelay; // 0x768            
            source2sdk::client::BuildupMode_t m_eBuildupMode; // 0x76c            
            // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
            bool m_bBuildupAffectedByEffectiveness; // 0x770            
            // metadata: MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
            bool m_bPassBuildupEffectivenessToFillModifier; // 0x771            
            uint8_t _pad0772[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Base_BuildupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Base_BuildupVData) == 0x778);
    };
};
