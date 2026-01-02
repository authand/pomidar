#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
        // Size: 0x18d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityBullChargeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x16f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ModifierTossAirControlLockout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ModifierTossAirControlLockout;
            char m_ModifierTossAirControlLockout[0x10]; // 0x1780            
            // m_ModifierWeaponPowerIncrease has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ModifierWeaponPowerIncrease;
            char m_ModifierWeaponPowerIncrease[0x10]; // 0x1790            
            // m_ModifierChargeDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ModifierChargeDragEnemy;
            char m_ModifierChargeDragEnemy[0x10]; // 0x17a0            
            // m_ModifierBullCharging has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ModifierBullCharging;
            char m_ModifierBullCharging[0x10]; // 0x17b0            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x17c0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
            char m_WallImpactParticle[0xe0]; // 0x17d0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWallSlamSound; // 0x18b0            
            CSoundEventName m_strHitEnemySound; // 0x18c0            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flWallStunLookAheadDist; // 0x18d0            
            float m_flEndChargeVelocityScale; // 0x18d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityBullChargeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityBullChargeVData) == 0x18d8);
    };
};
