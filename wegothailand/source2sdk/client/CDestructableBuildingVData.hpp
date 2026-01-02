#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"

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
        // Size: 0x88
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CDestructableBuildingVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flEnemyTrooperProtectionRange; // 0x28            
            // metadata: MPropertyStartGroup "GamePlay"
            std::int32_t m_iMaxHealthFinal; // 0x2c            
            std::int32_t m_iMaxHealthGenerator; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ObjectiveRegen;
            char m_ObjectiveRegen[0x10]; // 0x38            
            // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BackdoorBulletResistModifier;
            char m_BackdoorBulletResistModifier[0x10]; // 0x48            
            // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BackdoorProtectionModifier;
            char m_BackdoorProtectionModifier[0x10]; // 0x58            
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x68            
            // m_EnemyTrooperDamageReduction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_EnemyTrooperDamageReduction;
            char m_EnemyTrooperDamageReduction[0x10]; // 0x78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDestructableBuildingVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDestructableBuildingVData) == 0x88);
    };
};
