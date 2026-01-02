#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/FuncDoorSpawnPos_t.hpp"
#include "source2sdk/server/locksound_t.hpp"

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
        // Size: 0xa98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsUsable"
        #pragma pack(push, 1)
        class CBaseDoor : public source2sdk::server::CBaseToggle
        {
        public:
            uint8_t _pad0888[0x10]; // 0x888
            QAngle m_angMoveEntitySpace; // 0x898            
            Vector m_vecMoveDirParentSpace; // 0x8a4            
            source2sdk::server::locksound_t m_ls; // 0x8b0            
            bool m_bForceClosed; // 0x8d0            
            bool m_bDoorGroup; // 0x8d1            
            bool m_bLocked; // 0x8d2            
            bool m_bIgnoreDebris; // 0x8d3            
            bool m_bNoNPCs; // 0x8d4            
            uint8_t _pad08d5[0x3]; // 0x8d5
            source2sdk::server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x8d8            
            float m_flBlockDamage; // 0x8dc            
            CUtlSymbolLarge m_NoiseMoving; // 0x8e0            
            CUtlSymbolLarge m_NoiseArrived; // 0x8e8            
            CUtlSymbolLarge m_NoiseMovingClosed; // 0x8f0            
            CUtlSymbolLarge m_NoiseArrivedClosed; // 0x8f8            
            CUtlSymbolLarge m_ChainTarget; // 0x900            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0x908            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0x930            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x958            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x980            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x9a8            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x9d0            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0x9f8            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0xa20            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0xa48            
            bool m_bLoopMoveSound; // 0xa70            
            uint8_t _pad0a71[0x1f]; // 0xa71
            bool m_bCreateNavObstacle; // 0xa90            
            bool m_isChaining; // 0xa91            
            // metadata: MNetworkEnable
            bool m_bIsUsable; // 0xa92            
            uint8_t _pad0a93[0x5];
            
            // Datamap fields:
            // void m_nMovingSoundGUID; // 0xa74
            //  m_ls.sLockedSound; // 0x8b8
            //  m_ls.sUnlockedSound; // 0x8c0
            // void InputOpen; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetToggleState; // 0x0
            // bool InputSetNoNPCs; // 0x0
            // void CBaseDoorDoorTouch; // 0x0
            // void CBaseDoorDoorGoUp; // 0x0
            // void CBaseDoorDoorGoDown; // 0x0
            // void CBaseDoorDoorHitTop; // 0x0
            // void CBaseDoorDoorHitBottom; // 0x0
            // void CBaseDoorMovingSoundThink; // 0x0
            // void CBaseDoorCloseAreaPortalsThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseDoor) == 0xa98);
    };
};
