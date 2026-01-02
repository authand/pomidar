#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1928
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Mirage_Teleport_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x16f8            
            // m_ImmunityModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ImmunityModifier;
            char m_ImmunityModifier[0x10]; // 0x1708            
            // m_FireRateModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_FireRateModifier;
            char m_FireRateModifier[0x10]; // 0x1718            
            // m_DummyCameraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DummyCameraModifier;
            char m_DummyCameraModifier[0x10]; // 0x1728            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TeleportStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportStartParticle;
            char m_TeleportStartParticle[0xe0]; // 0x1738            
            // m_TeleportEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportEndParticle;
            char m_TeleportEndParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strArriveSound; // 0x18f8            
            CSoundEventName m_strDepartSound; // 0x1908            
            CSoundEventName m_strChannelDestinationSound; // 0x1918            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_Teleport_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Mirage_Teleport_VData) == 0x1928);
    };
};
