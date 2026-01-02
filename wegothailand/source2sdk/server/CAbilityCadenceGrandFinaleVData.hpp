#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x17f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityCadenceGrandFinaleVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_StageModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_StageModel;
            char m_StageModel[0xe0]; // 0x16f8            
            float m_flStageModelHeight; // 0x17d8            
            float m_flStageModelWidth; // 0x17dc            
            float m_flStageModelLength; // 0x17e0            
            float m_flStageModelScale; // 0x17e4            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GrandFinaleAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GrandFinaleAOEModifier;
            char m_GrandFinaleAOEModifier[0x10]; // 0x17e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityCadenceGrandFinaleVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityCadenceGrandFinaleVData) == 0x17f8);
    };
};
