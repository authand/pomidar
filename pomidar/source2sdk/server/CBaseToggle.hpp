#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TOGGLE_STATE.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x888
        // Has VTable
        #pragma pack(push, 1)
        class CBaseToggle : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::server::TOGGLE_STATE m_toggle_state; // 0x808            
            float m_flMoveDistance; // 0x80c            
            float m_flWait; // 0x810            
            float m_flLip; // 0x814            
            bool m_bAlwaysFireBlockedOutputs; // 0x818            
            uint8_t _pad0819[0x3]; // 0x819
            Vector m_vecPosition1; // 0x81c            
            Vector m_vecPosition2; // 0x828            
            QAngle m_vecMoveAng; // 0x834            
            QAngle m_vecAngle1; // 0x840            
            QAngle m_vecAngle2; // 0x84c            
            float m_flHeight; // 0x858            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0x85c            
            Vector m_vecFinalDest; // 0x860            
            QAngle m_vecFinalAngle; // 0x86c            
            std::int32_t m_movementType; // 0x878            
            uint8_t _pad087c[0x4]; // 0x87c
            CUtlSymbolLarge m_sMaster; // 0x880            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseToggle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseToggle) == 0x888);
    };
};
