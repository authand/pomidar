#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelItemPunchableNeutralGoldVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flGroundOffset; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_PunchPickupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PunchPickupModifier;
            char m_PunchPickupModifier[0x10]; // 0x30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemPunchableNeutralGoldVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelItemPunchableNeutralGoldVData) == 0x40);
    };
};
