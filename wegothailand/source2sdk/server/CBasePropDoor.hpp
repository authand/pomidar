#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DoorState_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/locksound_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1020
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "DoorState_t m_eDoorState"
        // static metadata: MNetworkVarNames "bool m_bLocked"
        // static metadata: MNetworkVarNames "bool m_bNoNPCs"
        // static metadata: MNetworkVarNames "Vector m_closedPosition"
        // static metadata: MNetworkVarNames "QAngle m_closedAngles"
        // static metadata: MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
        #pragma pack(push, 1)
        class CBasePropDoor : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0d80[0x10]; // 0xd80
            float m_flAutoReturnDelay; // 0xd90            
            uint8_t _pad0d94[0x4]; // 0xd94
            // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePropDoor>> m_hDoorList;
            char m_hDoorList[0x18]; // 0xd98            
            std::int32_t m_nHardwareType; // 0xdb0            
            bool m_bNeedsHardware; // 0xdb4            
            uint8_t _pad0db5[0x3]; // 0xdb5
            // metadata: MNetworkEnable
            source2sdk::client::DoorState_t m_eDoorState; // 0xdb8            
            // metadata: MNetworkEnable
            bool m_bLocked; // 0xdbc            
            // metadata: MNetworkEnable
            bool m_bNoNPCs; // 0xdbd            
            uint8_t _pad0dbe[0x2]; // 0xdbe
            // metadata: MNetworkEnable
            Vector m_closedPosition; // 0xdc0            
            // metadata: MNetworkEnable
            QAngle m_closedAngles; // 0xdcc            
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBlocker;
            char m_hBlocker[0x4]; // 0xdd8            
            bool m_bFirstBlocked; // 0xddc            
            uint8_t _pad0ddd[0x3]; // 0xddd
            source2sdk::server::locksound_t m_ls; // 0xde0            
            bool m_bForceClosed; // 0xe00            
            uint8_t _pad0e01[0x3]; // 0xe01
            Vector m_vecLatchWorldPosition; // 0xe04            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0xe10            
            uint8_t _pad0e14[0x14]; // 0xe14
            CUtlSymbolLarge m_SoundMoving; // 0xe28            
            CUtlSymbolLarge m_SoundOpen; // 0xe30            
            CUtlSymbolLarge m_SoundClose; // 0xe38            
            CUtlSymbolLarge m_SoundLock; // 0xe40            
            CUtlSymbolLarge m_SoundUnlock; // 0xe48            
            CUtlSymbolLarge m_SoundLatch; // 0xe50            
            CUtlSymbolLarge m_SoundPound; // 0xe58            
            CUtlSymbolLarge m_SoundJiggle; // 0xe60            
            CUtlSymbolLarge m_SoundLockedAnim; // 0xe68            
            std::int32_t m_numCloseAttempts; // 0xe70            
            CUtlStringToken m_nPhysicsMaterial; // 0xe74            
            CUtlSymbolLarge m_SlaveName; // 0xe78            
            // metadata: MNetworkEnable
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0xe80            
            uint8_t _pad0e84[0x4]; // 0xe84
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0xe88            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0xeb0            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xed8            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xf00            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0xf28            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0xf50            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0xf78            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0xfa0            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0xfc8            
            source2sdk::entity2::CEntityIOOutput m_OnAjarOpen; // 0xff0            
            uint8_t _pad1018[0x8];
            
            // Datamap fields:
            // void m_hSoundMoving; // 0xe14
            //  m_ls.sLockedSound; // 0xde8
            //  m_ls.sUnlockedSound; // 0xdf0
            // void InputOpen; // 0x0
            // CUtlSymbolLarge InputOpenAwayFrom; // 0x0
            // float InputOpenAwayFromActivator; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPlayerOpen; // 0x0
            // void InputPlayerClose; // 0x0
            // bool InputSetNoNPCs; // 0x0
            // void CBasePropDoorDoorOpenMoveDone; // 0x0
            // void CBasePropDoorDoorCloseMoveDone; // 0x0
            // void CBasePropDoorDoorAutoCloseThink; // 0x0
            // void CBasePropDoorDisableAreaPortalThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePropDoor) == 0x1020);
    };
};
