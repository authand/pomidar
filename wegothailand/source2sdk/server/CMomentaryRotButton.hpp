#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRotButton.hpp"

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
        // Size: 0xad8
        // Has VTable
        #pragma pack(push, 1)
        class CMomentaryRotButton : public source2sdk::server::CRotButton
        {
        public:
            // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Position;
            char m_Position[0x28]; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnUnpressed; // 0xa00            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0xa28            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0xa50            
            source2sdk::entity2::CEntityIOOutput m_OnReachedPosition; // 0xa78            
            std::int32_t m_lastUsed; // 0xaa0            
            QAngle m_start; // 0xaa4            
            QAngle m_end; // 0xab0            
            float m_IdealYaw; // 0xabc            
            CUtlSymbolLarge m_sNoise; // 0xac0            
            bool m_bUpdateTarget; // 0xac8            
            uint8_t _pad0ac9[0x3]; // 0xac9
            std::int32_t m_direction; // 0xacc            
            float m_returnSpeed; // 0xad0            
            float m_flStartPosition; // 0xad4            
            
            // Datamap fields:
            // bool m_bSolidBsp; // 0x8e0
            // void CMomentaryRotButtonUseMoveDone; // 0x0
            // void CMomentaryRotButtonReturnMoveDone; // 0x0
            // void CMomentaryRotButtonSetPositionMoveDone; // 0x0
            // void CMomentaryRotButtonUpdateThink; // 0x0
            // float InputSetPosition; // 0x0
            // float InputSetPositionImmediately; // 0x0
            // void InputDisableUpdateTarget; // 0x0
            // void InputEnableUpdateTarget; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMomentaryRotButton because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMomentaryRotButton) == 0xad8);
    };
};
