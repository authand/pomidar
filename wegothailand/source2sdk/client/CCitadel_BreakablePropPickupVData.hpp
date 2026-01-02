#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/TimeScalingValue_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Size: 0x970
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_BreakablePropPickupVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyFriendlyName "Spawn Particle"
            // m_friendlyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_friendlyParticle;
            char m_friendlyParticle[0xe0]; // 0x28            
            // m_enemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_enemyParticle;
            char m_enemyParticle[0xe0]; // 0x108            
            // m_friendlyModelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_friendlyModelParticle;
            char m_friendlyModelParticle[0xe0]; // 0x1e8            
            // m_enemyModelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_enemyModelParticle;
            char m_enemyModelParticle[0xe0]; // 0x2c8            
            // m_friendlyInteractiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_friendlyInteractiveParticle;
            char m_friendlyInteractiveParticle[0xe0]; // 0x3a8            
            // m_enemyInteractiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_enemyInteractiveParticle;
            char m_enemyInteractiveParticle[0xe0]; // 0x488            
            // m_gainedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_gainedParticle;
            char m_gainedParticle[0xe0]; // 0x568            
            // m_vacuumStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_vacuumStartParticle;
            char m_vacuumStartParticle[0xe0]; // 0x648            
            // metadata: MPropertyFriendlyName "Spawn Particle Color"
            // metadata: MPropertyDescription "Spawn Particle Color"
            Color m_Color; // 0x728            
            uint8_t _pad072c[0x4]; // 0x72c
            // metadata: MPropertyDescription "Model"
            // metadata: MPropertyProvidesEditContextString
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x730            
            // metadata: MPropertyFriendlyName "Material group"
            // metadata: MPropertyDescription "Which material group of the model should be used?"
            CModelMaterialGroupName m_sDefaultMaterialGroupName; // 0x810            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Pickup Name Loc String"
            CUtlString m_sNameLocString; // 0x818            
            std::int32_t m_nNameOffset; // 0x820            
            // metadata: MPropertyFriendlyName "Show On Minimap"
            bool m_bShowOnMinimap; // 0x824            
            bool m_bIsPermanentPickup; // 0x825            
            uint8_t _pad0826[0x2]; // 0x826
            std::int32_t m_iTempParticleSheetIndex; // 0x828            
            uint8_t _pad082c[0x4]; // 0x82c
            CUtlString m_sMiniMapCssClass; // 0x830            
            float m_flParticleRadius; // 0x838            
            uint8_t _pad083c[0x4]; // 0x83c
            // metadata: MPropertyStartGroup "Audio"
            // metadata: MPropertyFriendlyName "Pickup Sound"
            CSoundEventName m_sPickupSound; // 0x840            
            // metadata: MPropertyFriendlyName "Spawn Sound"
            CSoundEventName m_sSpawnSound; // 0x850            
            // metadata: MPropertyFriendlyName "Vacuum Start Sound"
            // metadata: MPropertyDescription "Sound that plays when vacuuming starts and only for the vacuuming player"
            CSoundEventName m_strVacuumStartSound; // 0x860            
            // metadata: MPropertyFriendlyName "Ambient Sound"
            CSoundEventName m_sAmbientSound; // 0x870            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyFriendlyName "Pickup Radius"
            source2sdk::client::TimeScalingValue_t m_flPickupRadius; // 0x880            
            // metadata: MPropertyFriendlyName "Pickup Expiration Duration"
            source2sdk::client::TimeScalingValue_t m_flPickupExpirationDuration; // 0x890            
            // metadata: MPropertyDescription "When true, don't allow pickup until we've fallen to the ground"
            bool bPhysicallyDropToTheGroundOnSpawn; // 0x8a0            
            uint8_t _pad08a1[0x3]; // 0x8a1
            // metadata: MPropertyStartGroup "Fall To Ground Settings"
            // metadata: MPropertyDescription "Radius when solid and falling to the ground"
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            float m_flSolidRadius; // 0x8a4            
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            source2sdk::tier2::CRangeFloat m_fInitialSpawnXYSpeed; // 0x8a8            
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            source2sdk::tier2::CRangeFloat m_fInitialSpawnZSpeed; // 0x8b0            
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            float m_flFallGravity; // 0x8b8            
            // metadata: MPropertyDescription "Optionally how far to hover off the ground"
            // metadata: MPropertySuppressExpr "bPhysicallyDropToTheGroundOnSpawn == false"
            float m_flHoverOffset; // 0x8bc            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyDescription "When true, the pickup will vacuum to the first player that gets within the pickup radius"
            bool m_bPicupIsVacuum; // 0x8c0            
            uint8_t _pad08c1[0x3]; // 0x8c1
            // metadata: MPropertyStartGroup "Vacuum Settings"
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            source2sdk::tier2::CRangeFloat m_flInitialVacuumSideSpeed; // 0x8c4            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            source2sdk::tier2::CRangeFloat m_flInitialVacuumUpSpeed; // 0x8cc            
            uint8_t _pad08d4[0x4]; // 0x8d4
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            CPiecewiseCurve m_VacuumToPlayerSpeedCurve; // 0x8d8            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            CPiecewiseCurve m_VacuumInitialVelSpeedCurve; // 0x918            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            float m_flVacuumCloseEnoughToPickup; // 0x958            
            // metadata: MPropertySuppressExpr "m_bPicupIsVacuum == false"
            source2sdk::client::CRemapFloat m_EffectDistanceToRadiusRemap; // 0x95c            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyDescription "When set, only exists for the team the pickup is on"
            bool m_bSameTeamOnly; // 0x96c            
            uint8_t _pad096d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropPickupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_BreakablePropPickupVData) == 0x970);
    };
};
