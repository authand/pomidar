#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"

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
        // Size: 0x11e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_HeroCloneTrooperVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            bool m_bMeleeOnly; // 0x11d8            
            bool m_bChargeForward; // 0x11d9            
            uint8_t _pad11da[0x2]; // 0x11da
            float m_flMeleeChargeRange; // 0x11dc            
            bool m_bCloneOwnerWeapon; // 0x11e0            
            uint8_t _pad11e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_HeroCloneTrooperVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_HeroCloneTrooperVData) == 0x11e8);
    };
};
