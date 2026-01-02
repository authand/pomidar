#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0xbf8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ItemPunchable_RejuvVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            std::int32_t m_iRejuvBossKill01; // 0x760            
            std::int32_t m_iRejuvBossKill02; // 0x764            
            float m_flPhysicsRadius; // 0x768            
            float m_flParryCheckRadius; // 0x76c            
            float m_flMaxDistForHeal; // 0x770            
            uint8_t _pad0774[0x4]; // 0x774
            // metadata: MPropertyStartGroup "Visuals"
            // m_IsDroppingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle;
            char m_IsDroppingParticle[0xe0]; // 0x778            
            // m_IsPunchableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsPunchableParticle;
            char m_IsPunchableParticle[0xe0]; // 0x858            
            // m_IsFrozenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsFrozenParticle;
            char m_IsFrozenParticle[0xe0]; // 0x938            
            // m_DamagedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamagedParticle;
            char m_DamagedParticle[0xe0]; // 0xa18            
            // m_AoEHealParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEHealParticle;
            char m_AoEHealParticle[0xe0]; // 0xaf8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_NearRejuvAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NearRejuvAuraModifier;
            char m_NearRejuvAuraModifier[0x10]; // 0xbd8            
            // metadata: MPropertyGroupName "Audio"
            CSoundEventName m_sHitSound; // 0xbe8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ItemPunchable_RejuvVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ItemPunchable_RejuvVData) == 0xbf8);
    };
};
