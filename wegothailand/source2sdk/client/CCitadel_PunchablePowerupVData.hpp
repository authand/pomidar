#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_BreakablePropModifierPickupVData.hpp"
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
        // Standard-layout class: false
        // Size: 0xa90
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_PunchablePowerupVData : public source2sdk::client::CCitadel_BreakablePropModifierPickupVData
        {
        public:
            // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AuraModifier;
            char m_AuraModifier[0x10]; // 0x980            
            std::int32_t m_iHitsRequired; // 0x990            
            float m_flCollisionRadius; // 0x994            
            float m_flCenterHeightOffset; // 0x998            
            uint8_t _pad099c[0x4]; // 0x99c
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyFriendlyName "Damaged Particle"
            // m_DamagedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamagedParticle;
            char m_DamagedParticle[0xe0]; // 0x9a0            
            // metadata: MPropertyGroupName "Audio"
            CSoundEventName m_sHitSound; // 0xa80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_PunchablePowerupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_PunchablePowerupVData) == 0xa90);
    };
};
