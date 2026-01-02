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
        // Size: 0xde8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_vecPulseTargets"
        #pragma pack(push, 1)
        class CCitadel_Ability_PsychicPulse : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x40]; // 0xd90
            // metadata: MNetworkEnable
            // m_vecPulseTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecPulseTargets;
            char m_vecPulseTargets[0x18]; // 0xdd0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PsychicPulse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PsychicPulse) == 0xde8);
    };
};
