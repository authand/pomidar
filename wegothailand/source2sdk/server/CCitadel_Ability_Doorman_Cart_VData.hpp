#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1bb0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Cart_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "+Gameplay"
            float m_flTraceRadius; // 0x16f8            
            float m_flDistanceAboveGround; // 0x16fc            
            float m_flFloatDownRate; // 0x1700            
            float m_flClimbHeight; // 0x1704            
            float m_flStepDownHeight; // 0x1708            
            float m_flMinPitch; // 0x170c            
            float m_flMaxPitch; // 0x1710            
            float m_flJumpHeight; // 0x1714            
            float m_flQAngleSmoothRate; // 0x1718            
            uint8_t _pad171c[0x4]; // 0x171c
            CPiecewiseCurve m_flGroundHitPitchCurve; // 0x1720            
            CPiecewiseCurve m_flGroundHitRollCurve; // 0x1760            
            CPiecewiseCurve m_flGroundHitYawCurve; // 0x17a0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ModifierDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ModifierDrag;
            char m_ModifierDrag[0x10]; // 0x17e0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_CartExpireSound; // 0x17f0            
            CSoundEventName m_CartHitSound; // 0x1800            
            CSoundEventName m_CartHitAllySound; // 0x1810            
            CSoundEventName m_strWallSlamSound; // 0x1820            
            // metadata: MPropertyStartGroup "Visuals"
            // m_FriendlyCastProjectileTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FriendlyCastProjectileTrailParticle;
            char m_FriendlyCastProjectileTrailParticle[0xe0]; // 0x1830            
            // m_FriendlyCastProjectileModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_FriendlyCastProjectileModel;
            char m_FriendlyCastProjectileModel[0xe0]; // 0x1910            
            // m_CartCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CartCastParticle;
            char m_CartCastParticle[0xe0]; // 0x19f0            
            // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
            char m_WallImpactParticle[0xe0]; // 0x1ad0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Cart_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Doorman_Cart_VData) == 0x1bb0);
    };
};
