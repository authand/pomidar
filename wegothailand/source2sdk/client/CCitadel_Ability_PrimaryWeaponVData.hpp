#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1748
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeaponVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyDescription "The DOF settings to apply while zoomed in."
            source2sdk::client::DOFDesc_t m_DOFWhileZoomed; // 0x16f8            
            // metadata: MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
            bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x1708            
            uint8_t _pad1709[0x7]; // 0x1709
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyFriendlyName "Fire while disarmed sound"
            CSoundEventName m_sDisarmedSound; // 0x1710            
            float m_flMinDisarmedSoundInterval; // 0x1720            
            uint8_t _pad1724[0x4]; // 0x1724
            CSoundEventName m_sObstructedShotSound; // 0x1728            
            // metadata: MPropertyStartGroup "Action Reload"
            // metadata: MPropertyAttributeRange "0 1"
            // metadata: MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
            float m_flActionReloadTimingStart; // 0x1738            
            // metadata: MPropertyDescription "If we have action reloads, how long is the window"
            float m_flActionReloadTimingDuration; // 0x173c            
            // metadata: MPropertyStartGroup "UI"
            CUtlString m_strCrosshairCSSClass; // 0x1740            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeaponVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeaponVData) == 0x1748);
    };
};
