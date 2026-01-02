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
        // Size: 0x1e48
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Doorway_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_DoorOpenStartSound; // 0x16f8            
            CSoundEventName m_DoorOpenEndSound; // 0x1708            
            CSoundEventName m_DoorPlaceSound; // 0x1718            
            CSoundEventName m_DoorPlacementClearedSound; // 0x1728            
            CSoundEventName m_DoorStartCastSound; // 0x1738            
            CSoundEventName m_DoorEndCastSound; // 0x1748            
            CSoundEventName m_DoorExpireSound; // 0x1758            
            CSoundEventName m_DoorLoopSound; // 0x1768            
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x1778            
            // m_PendingDoorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PendingDoorParticle;
            char m_PendingDoorParticle[0xe0]; // 0x1858            
            // m_PlaceDoorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PlaceDoorParticle;
            char m_PlaceDoorParticle[0xe0]; // 0x1938            
            // m_DoorDurationParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DoorDurationParticle;
            char m_DoorDurationParticle[0xe0]; // 0x1a18            
            // m_DoorDestructionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DoorDestructionParticle;
            char m_DoorDestructionParticle[0xe0]; // 0x1af8            
            // m_hDoorModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hDoorModel;
            char m_hDoorModel[0xe0]; // 0x1bd8            
            // m_hPortalModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hPortalModel;
            char m_hPortalModel[0xe0]; // 0x1cb8            
            // metadata: MPropertyStartGroup "UI"
            CPanoramaImageName m_strSingleDoorAbilityImage; // 0x1d98            
            // metadata: MPropertyFriendlyName "Door Spawn Particle Color"
            // metadata: MPropertyDescription "Door Spawn Particle Color"
            Color m_ColorStart; // 0x1da8            
            // metadata: MPropertyFriendlyName "Door End Particle Color"
            // metadata: MPropertyDescription "Door End Particle Color"
            Color m_ColorEnd; // 0x1dac            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_PlacementTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PlacementTimerModifier;
            char m_PlacementTimerModifier[0x10]; // 0x1db0            
            // m_PortalBarrierModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PortalBarrierModifier;
            char m_PortalBarrierModifier[0x10]; // 0x1dc0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flPlacementWallTestDistance; // 0x1dd0            
            float m_flPlacementWallTestExtentsSolidScale; // 0x1dd4            
            float m_flPlacementWallTestExtentsWallScale; // 0x1dd8            
            float m_flPlacementWallTestSphereRadius; // 0x1ddc            
            Vector m_vPlacementOffset; // 0x1de0            
            float m_flPlacementCooldown; // 0x1dec            
            float m_flPlacementRangeHintDuration; // 0x1df0            
            float m_flPlacementSphereMaxDesat; // 0x1df4            
            Color m_colorPlacementSphereSat; // 0x1df8            
            Color m_colorPlacementSphereDesat; // 0x1dfc            
            Color m_colorPlacementSphereOutline; // 0x1e00            
            uint8_t _pad1e04[0x4]; // 0x1e04
            CPiecewiseCurve m_curvePlacementFail; // 0x1e08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Doorman_Doorway_VData) == 0x1e48);
    };
};
