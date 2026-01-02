#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CurrencySound_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
#include "source2sdk/client/DamageFlashSettings_t.hpp"
#include "source2sdk/client/DamageIndicatorSounds_t.hpp"
#include "source2sdk/client/DamageReceivedSounds_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/ECurrencyType.hpp"
#include "source2sdk/client/EDamageFlashType.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/GlitchSettings_t.hpp"
#include "source2sdk/client/HealingReceivedSounds_t.hpp"
#include "source2sdk/client/HeroAbilityResourceDef_t.hpp"
#include "source2sdk/client/IdolParams_t.hpp"
#include "source2sdk/client/LaneDesc_t.hpp"
#include "source2sdk/client/MinimapOffsetDesc_t.hpp"
#include "source2sdk/client/NewPlayerMetrics_t.hpp"
#include "source2sdk/client/ObjectivesParams_t.hpp"
#include "source2sdk/client/RejuvinatorParams_t.hpp"
#include "source2sdk/client/ShopGroups_t.hpp"
#include "source2sdk/client/TeleporterParams_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1108
        // 
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelGenericData_t
        {
        public:
            // m_mapDamageFlash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EDamageFlashType,source2sdk::client::DamageFlashSettings_t> m_mapDamageFlash;
            char m_mapDamageFlash[0x28]; // 0x0            
            source2sdk::client::GlitchSettings_t m_GlitchSettings; // 0x28            
            uint8_t _pad0054[0x4]; // 0x54
            // metadata: MPropertyStartGroup "Currency Sounds"
            // m_CurrencyTypeSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECurrencyType,source2sdk::client::CurrencySound_t> m_CurrencyTypeSounds;
            char m_CurrencyTypeSounds[0x28]; // 0x58            
            source2sdk::client::DamageReceivedSounds_t m_DamageReceivedSounds; // 0x80            
            source2sdk::client::HealingReceivedSounds_t m_HealingReceivedSounds; // 0xe0            
            source2sdk::client::DamageIndicatorSounds_t m_DamageIndicatorSounds; // 0x120            
            CSoundEventName m_strExitCombatSound; // 0x180            
            // metadata: MPropertyStartGroup "Particles and Visuals"
            // m_ShoppingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShoppingEffect;
            char m_ShoppingEffect[0xe0]; // 0x190            
            // m_MinimapZiplinesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MinimapZiplinesParticle;
            char m_MinimapZiplinesParticle[0xe0]; // 0x270            
            // m_KillStreakFireParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillStreakFireParticle;
            char m_KillStreakFireParticle[0xe0]; // 0x350            
            // m_MidbossIndicatorRespawningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MidbossIndicatorRespawningParticle;
            char m_MidbossIndicatorRespawningParticle[0xe0]; // 0x430            
            // m_MidbossIndicatorSpawnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MidbossIndicatorSpawnedParticle;
            char m_MidbossIndicatorSpawnedParticle[0xe0]; // 0x510            
            // metadata: MPropertyStartGroup "MiniMap"
            Color m_MinimapTeamRebelsColor; // 0x5f0            
            Color m_MinimapTeamCombineColor; // 0x5f4            
            // m_MiniMapOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::MinimapOffsetDesc_t> m_MiniMapOffsets;
            char m_MiniMapOffsets[0x18]; // 0x5f8            
            // metadata: MPropertyStartGroup
            source2sdk::client::LaneDesc_t m_LaneInfo[6]; // 0x610            
            source2sdk::client::LaneDesc_t m_NoLaneZip; // 0x6d0            
            Color m_enemyZiplineColor; // 0x6f0            
            Color m_enemyObjectivesColor; // 0x6f4            
            source2sdk::client::NewPlayerMetrics_t m_NewPlayerMetrics[4]; // 0x6f8            
            std::int32_t m_nItemPricePerTier[6]; // 0x7b8            
            float m_flTrooperKillGoldShareFrac[6]; // 0x7d0            
            float m_flHeroKillGoldShareFrac[6]; // 0x7e8            
            // m_HeroTestingTargetDummyUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_HeroTestingTargetDummyUpgrades;
            char m_HeroTestingTargetDummyUpgrades[0x18]; // 0x800            
            uint8_t _pad0818[0x50]; // 0x818
            source2sdk::client::DOFDesc_t m_DefaultDOF; // 0x868            
            source2sdk::client::RejuvinatorParams_t m_RejuvParams; // 0x878            
            source2sdk::client::IdolParams_t m_IdolParams; // 0x8d8            
            source2sdk::client::TeleporterParams_t m_TeleporterParams; // 0xe30            
            source2sdk::client::ObjectivesParams_t m_ObjectiveParams; // 0x1020            
            // m_mapStatTypeImages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,CUtlString> m_mapStatTypeImages;
            char m_mapStatTypeImages[0x28]; // 0x1050            
            // metadata: MPropertyDescription "Remap camera angle delta to aim spring strength"
            source2sdk::client::CRemapFloat m_AimSpringStrength; // 0x1078            
            // metadata: MPropertyDescription "Remap camera angle delta to ability targeting spring strength"
            source2sdk::client::CRemapFloat m_TargetingSpringStrength; // 0x1088            
            // m_mapResourceTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilityResourceType,source2sdk::client::HeroAbilityResourceDef_t> m_mapResourceTypes;
            char m_mapResourceTypes[0x28]; // 0x1098            
            // metadata: MPropertyStartGroup "New Shop Groups"
            // m_vecWeaponGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShopGroups_t> m_vecWeaponGroups;
            char m_vecWeaponGroups[0x18]; // 0x10c0            
            // m_vecArmorGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShopGroups_t> m_vecArmorGroups;
            char m_vecArmorGroups[0x18]; // 0x10d8            
            // m_vecSpiritGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShopGroups_t> m_vecSpiritGroups;
            char m_vecSpiritGroups[0x18]; // 0x10f0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_mapDamageFlash) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_GlitchSettings) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_CurrencyTypeSounds) == 0x58);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_DamageReceivedSounds) == 0x80);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_HealingReceivedSounds) == 0xe0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_DamageIndicatorSounds) == 0x120);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_strExitCombatSound) == 0x180);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_ShoppingEffect) == 0x190);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MinimapZiplinesParticle) == 0x270);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_KillStreakFireParticle) == 0x350);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MidbossIndicatorRespawningParticle) == 0x430);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MidbossIndicatorSpawnedParticle) == 0x510);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MinimapTeamRebelsColor) == 0x5f0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MinimapTeamCombineColor) == 0x5f4);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MiniMapOffsets) == 0x5f8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_LaneInfo) == 0x610);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_NoLaneZip) == 0x6d0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_enemyZiplineColor) == 0x6f0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_enemyObjectivesColor) == 0x6f4);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_NewPlayerMetrics) == 0x6f8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_nItemPricePerTier) == 0x7b8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_flTrooperKillGoldShareFrac) == 0x7d0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_flHeroKillGoldShareFrac) == 0x7e8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_HeroTestingTargetDummyUpgrades) == 0x800);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_DefaultDOF) == 0x868);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_RejuvParams) == 0x878);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_IdolParams) == 0x8d8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_TeleporterParams) == 0xe30);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_ObjectiveParams) == 0x1020);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_mapStatTypeImages) == 0x1050);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_AimSpringStrength) == 0x1078);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_TargetingSpringStrength) == 0x1088);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_mapResourceTypes) == 0x1098);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_vecWeaponGroups) == 0x10c0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_vecArmorGroups) == 0x10d8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_vecSpiritGroups) == 0x10f0);
        
        static_assert(sizeof(source2sdk::client::CitadelGenericData_t) == 0x1108);
    };
};
