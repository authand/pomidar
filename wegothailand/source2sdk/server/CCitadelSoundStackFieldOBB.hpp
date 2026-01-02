#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x528
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        // static metadata: MNetworkVarNames "uint32 m_nMaxDistance"
        // static metadata: MNetworkVarNames "CUtlString m_nStackName"
        // static metadata: MNetworkVarNames "CUtlString m_nOperatorName"
        // static metadata: MNetworkVarNames "CUtlString m_nOperatorFieldName"
        #pragma pack(push, 1)
        class CCitadelSoundStackFieldOBB : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x4f0            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x4fc            
            // metadata: MNetworkEnable
            std::uint32_t m_nMaxDistance; // 0x508            
            uint8_t _pad050c[0x4]; // 0x50c
            // metadata: MNetworkEnable
            CUtlString m_nStackName; // 0x510            
            // metadata: MNetworkEnable
            CUtlString m_nOperatorName; // 0x518            
            // metadata: MNetworkEnable
            CUtlString m_nOperatorFieldName; // 0x520            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundStackFieldOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelSoundStackFieldOBB) == 0x528);
    };
};
