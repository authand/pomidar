#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xf18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hDummyForCamera"
        #pragma pack(push, 1)
        class CCitadel_Ability_Mirage_Teleport : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x14]; // 0xd90
            // metadata: MNetworkEnable
            // m_hDummyForCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hDummyForCamera;
            char m_hDummyForCamera[0x4]; // 0xda4            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xda8            
            Vector m_vCastStartPosition; // 0xdac            
            Vector m_vTargetPosition; // 0xdb8            
            QAngle m_vTargetAngles; // 0xdc4            
            uint8_t _pad0dd0[0x148];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Mirage_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Mirage_Teleport) == 0xf18);
    };
};
