#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct PathAccompanyProperties_t
        {
        public:
            bool m_bInvertLeadDistance; // 0x0            
            bool m_bCanAlwaysBacktrack; // 0x1            
            uint8_t _pad0002[0x2]; // 0x2
            float m_flDesiredDistanceOverride; // 0x4            
            bool m_bIsSticky; // 0x8            
            uint8_t _pad0009[0x3]; // 0x9
            float m_flStickyRange; // 0xc            
            float m_flStickyBreakRange; // 0x10            
            bool m_bCanRepeatedlyStick; // 0x14            
            bool m_bInvertIfStickToEnd; // 0x15            
            uint8_t _pad0016[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bInvertLeadDistance) == 0x0);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bCanAlwaysBacktrack) == 0x1);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_flDesiredDistanceOverride) == 0x4);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bIsSticky) == 0x8);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_flStickyRange) == 0xc);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_flStickyBreakRange) == 0x10);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bCanRepeatedlyStick) == 0x14);
        static_assert(offsetof(source2sdk::server::PathAccompanyProperties_t, m_bInvertIfStickToEnd) == 0x15);
        
        static_assert(sizeof(source2sdk::server::PathAccompanyProperties_t) == 0x18);
    };
};
