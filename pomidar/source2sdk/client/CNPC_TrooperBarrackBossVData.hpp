#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CNPC_TrooperBossVData.hpp"

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
        // Size: 0x1940
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperBarrackBossVData : public source2sdk::client::CNPC_TrooperBossVData
        {
        public:
            float m_flBackDoorProtectionRange; // 0x1908            
            float m_flEnemyTrooperProtectionRange; // 0x190c            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BackdoorProtectionModifier;
            char m_BackdoorProtectionModifier[0x10]; // 0x1910            
            // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BackdoorBulletResistModifier;
            char m_BackdoorBulletResistModifier[0x10]; // 0x1920            
            // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ObjectiveRegen;
            char m_ObjectiveRegen[0x10]; // 0x1930            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperBarrackBossVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_TrooperBarrackBossVData) == 0x1940);
    };
};
