#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/PathAccompanyNode_t.hpp"
#include "source2sdk/server/PathAccompanyProperties_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        #pragma pack(push, 1)
        class CPathAccompany : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flPathLength; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::PathAccompanyNode_t> m_vecNodes;
            char m_vecNodes[0x18]; // 0x4f8            
            source2sdk::entity2::GameTime_t m_flLastPathRecalc; // 0x510            
            uint8_t _pad0514[0xc]; // 0x514
            CTransform m_xLastParentTransform; // 0x520            
            source2sdk::server::PathAccompanyProperties_t m_properties; // 0x540            
            source2sdk::entity2::CEntityIOOutput m_OnNpcStartedPath; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_OnNpcCompletedPath; // 0x580            
            source2sdk::entity2::CEntityIOOutput m_OnNpcBreakFromPath; // 0x5a8            
            
            // Datamap fields:
            // CUtlSymbolLarge pathNodes; // 0x7fffffff
            // CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
            // CUtlSymbolLarge deformable_prop; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathAccompany because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathAccompany) == 0x5d0);
    };
};
