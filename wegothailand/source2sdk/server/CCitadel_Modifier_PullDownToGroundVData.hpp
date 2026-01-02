#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x778
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_PullDownToGroundVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            float m_flMaxHeight; // 0x760            
            float m_flPullDownSpeedMin; // 0x764            
            float m_flPullDownSpeedScale; // 0x768            
            float m_flFullPullDistance; // 0x76c            
            float m_flDampenVelocityRate; // 0x770            
            uint8_t _pad0774[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PullDownToGroundVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PullDownToGroundVData) == 0x778);
    };
};
