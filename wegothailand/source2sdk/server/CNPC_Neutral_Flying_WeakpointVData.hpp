#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x228
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Neutral_Flying_WeakpointVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flFrequencyY; // 0x28            
            float m_flMinY; // 0x2c            
            float m_flMaxY; // 0x30            
            float m_flFrequencyR; // 0x34            
            float m_flOrbitRadius; // 0x38            
            float m_flBonusDamageMult; // 0x3c            
            float m_flDamagePctOnDeath; // 0x40            
            float m_flMaxDamagePct; // 0x44            
            float m_flCollisionRadius; // 0x48            
            float m_flParticleRadius; // 0x4c            
            // m_AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle;
            char m_AmbientParticle[0xe0]; // 0x50            
            // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
            char m_DestroyParticle[0xe0]; // 0x130            
            CSoundEventName m_strDestroySound; // 0x210            
            float m_flOffSetScaler; // 0x220            
            uint8_t _pad0224[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Neutral_Flying_WeakpointVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_Flying_WeakpointVData) == 0x228);
    };
};
