#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x1d78
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_ProximityRitual_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_PredatoryStatueModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel;
            char m_PredatoryStatueModel[0xe0]; // 0x16f8            
            // m_CatReappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatReappearParticle;
            char m_CatReappearParticle[0xe0]; // 0x17d8            
            // m_CatDisappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatDisappearParticle;
            char m_CatDisappearParticle[0xe0]; // 0x18b8            
            // m_CatEyesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatEyesParticle;
            char m_CatEyesParticle[0xe0]; // 0x1998            
            // m_CatSummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatSummonParticle;
            char m_CatSummonParticle[0xe0]; // 0x1a78            
            // m_CatRecallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatRecallParticle;
            char m_CatRecallParticle[0xe0]; // 0x1b58            
            // m_RecallLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RecallLineParticle;
            char m_RecallLineParticle[0xe0]; // 0x1c38            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strRecallSound; // 0x1d18            
            CSoundEventName m_strKilledSound; // 0x1d28            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_PredatoryStatueModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PredatoryStatueModifier;
            char m_PredatoryStatueModifier[0x10]; // 0x1d38            
            // m_RecentDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RecentDamageModifier;
            char m_RecentDamageModifier[0x10]; // 0x1d48            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flHeavyMeleeDmg; // 0x1d58            
            float m_flLightMeleeDmg; // 0x1d5c            
            float m_flAbilityDamageScale; // 0x1d60            
            float m_flNPCDamageScale; // 0x1d64            
            float m_flCastDelayMin; // 0x1d68            
            float m_flCastDelayMax; // 0x1d6c            
            float m_flCastDelayMaxDist; // 0x1d70            
            float m_flPostCastCooldown; // 0x1d74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ProximityRitual_VData) == 0x1d78);
    };
};
