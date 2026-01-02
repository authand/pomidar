#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"

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
        // Size: 0x17d0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPunkgoatGoatFlipVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Motion"
            CPiecewiseCurve m_ChargingSpeedCurve; // 0x16f8            
            CPiecewiseCurve m_GoingUpSpeedCurve; // 0x1738            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_Charging has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_Charging;
            char m_Charging[0x10]; // 0x1778            
            // m_GoatGoingUp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GoatGoingUp;
            char m_GoatGoingUp[0x10]; // 0x1788            
            // m_DamageBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DamageBuff;
            char m_DamageBuff[0x10]; // 0x1798            
            // m_EmpowerMelee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_EmpowerMelee;
            char m_EmpowerMelee[0x10]; // 0x17a8            
            // m_LingeringAirControl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LingeringAirControl;
            char m_LingeringAirControl[0x10]; // 0x17b8            
            // metadata: MPropertyStartGroup "Motion"
            float m_flDelayBeforeCasterRegainsControlAfterFlip; // 0x17c8            
            uint8_t _pad17cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPunkgoatGoatFlipVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityPunkgoatGoatFlipVData) == 0x17d0);
    };
};
