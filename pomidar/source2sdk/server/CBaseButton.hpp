#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/locksound_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
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
        // Size: 0x9d8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
        // static metadata: MNetworkVarNames "bool m_usable"
        // static metadata: MNetworkVarNames "string_t m_szDisplayText"
        #pragma pack(push, 1)
        class CBaseButton : public source2sdk::server::CBaseToggle
        {
        public:
            QAngle m_angMoveEntitySpace; // 0x888            
            bool m_fStayPushed; // 0x894            
            bool m_fRotating; // 0x895            
            uint8_t _pad0896[0x2]; // 0x896
            source2sdk::server::locksound_t m_ls; // 0x898            
            CUtlSymbolLarge m_sUseSound; // 0x8b8            
            CUtlSymbolLarge m_sLockedSound; // 0x8c0            
            CUtlSymbolLarge m_sUnlockedSound; // 0x8c8            
            CUtlSymbolLarge m_sOverrideAnticipationName; // 0x8d0            
            bool m_bLocked; // 0x8d8            
            bool m_bDisabled; // 0x8d9            
            uint8_t _pad08da[0x2]; // 0x8da
            source2sdk::entity2::GameTime_t m_flUseLockedTime; // 0x8dc            
            bool m_bSolidBsp; // 0x8e0            
            uint8_t _pad08e1[0x7]; // 0x8e1
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x8e8            
            source2sdk::entity2::CEntityIOOutput m_OnPressed; // 0x910            
            source2sdk::entity2::CEntityIOOutput m_OnUseLocked; // 0x938            
            source2sdk::entity2::CEntityIOOutput m_OnIn; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnOut; // 0x988            
            std::int32_t m_nState; // 0x9b0            
            CEntityHandle m_hConstraint; // 0x9b4            
            CEntityHandle m_hConstraintParent; // 0x9b8            
            bool m_bForceNpcExclude; // 0x9bc            
            uint8_t _pad09bd[0x3]; // 0x9bd
            CUtlSymbolLarge m_sGlowEntity; // 0x9c0            
            // metadata: MNetworkEnable
            // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseModelEntity> m_glowEntity;
            char m_glowEntity[0x4]; // 0x9c8            
            // metadata: MNetworkEnable
            bool m_usable; // 0x9cc            
            uint8_t _pad09cd[0x3]; // 0x9cd
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_szDisplayText; // 0x9d0            
            
            // Datamap fields:
            //  m_ls.sLockedSound; // 0x8a0
            //  m_ls.sUnlockedSound; // 0x8a8
            // void CBaseButtonButtonTouch; // 0x0
            // void CBaseButtonButtonSpark; // 0x0
            // void CBaseButtonTriggerAndWait; // 0x0
            // void CBaseButtonButtonReturn; // 0x0
            // void CBaseButtonButtonBackHome; // 0x0
            // void CBaseButtonButtonUse; // 0x0
            // void CBaseButtonActivateTouch; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPress; // 0x0
            // void InputPressIn; // 0x0
            // void InputPressOut; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlString displaytext; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseButton because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseButton) == 0x9d8);
    };
};
