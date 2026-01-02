#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/MovementGaitId_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x48
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct PathAccompanyNode_t
        {
        public:
            Vector m_vInitialPosition; // 0x0            
            float m_flRadius; // 0xc            
            float m_flRoll; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            source2sdk::modellib::MovementGaitId_t m_eMovementGaitOverride; // 0x18            
            Vector m_vWorldPosition; // 0x20            
            Vector m_vForward; // 0x2c            
            Vector m_vLeft; // 0x38            
            float m_flDistToNext; // 0x44            
            
            // Datamap fields:
            // CUtlSymbolLarge gaitOverride; // 0x7fffffff
            // CUtlSymbolLarge customGaitOverride; // 0x7fffffff
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vInitialPosition) == 0x0);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flRadius) == 0xc);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flRoll) == 0x10);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_eMovementGaitOverride) == 0x18);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vWorldPosition) == 0x20);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vForward) == 0x2c);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vLeft) == 0x38);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flDistToNext) == 0x44);
        
        static_assert(sizeof(source2sdk::server::PathAccompanyNode_t) == 0x48);
    };
};
