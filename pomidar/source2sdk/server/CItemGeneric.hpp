#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CItemGenericTriggerHelper;
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
        // Size: 0xd08
        // Has VTable
        #pragma pack(push, 1)
        class CItemGeneric : public source2sdk::server::CItem
        {
        public:
            uint8_t _pad0b90[0x14]; // 0xb90
            bool m_bHasTriggerRadius; // 0xba4            
            bool m_bHasPickupRadius; // 0xba5            
            uint8_t _pad0ba6[0x2]; // 0xba6
            float m_flPickupRadiusSqr; // 0xba8            
            float m_flTriggerRadiusSqr; // 0xbac            
            source2sdk::entity2::GameTime_t m_flLastPickupCheck; // 0xbb0            
            bool m_bPlayerCounterListenerAdded; // 0xbb4            
            bool m_bPlayerInTriggerRadius; // 0xbb5            
            uint8_t _pad0bb6[0x2]; // 0xbb6
            // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
            char m_hSpawnParticleEffect[0x8]; // 0xbb8            
            CUtlSymbolLarge m_pAmbientSoundEffect; // 0xbc0            
            bool m_bAutoStartAmbientSound; // 0xbc8            
            uint8_t _pad0bc9[0x7]; // 0xbc9
            CUtlSymbolLarge m_pSpawnScriptFunction; // 0xbd0            
            // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
            char m_hPickupParticleEffect[0x8]; // 0xbd8            
            CUtlSymbolLarge m_pPickupSoundEffect; // 0xbe0            
            CUtlSymbolLarge m_pPickupScriptFunction; // 0xbe8            
            // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
            char m_hTimeoutParticleEffect[0x8]; // 0xbf0            
            CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xbf8            
            CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xc00            
            CUtlSymbolLarge m_pPickupFilterName; // 0xc08            
            // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hPickupFilter;
            char m_hPickupFilter[0x4]; // 0xc10            
            uint8_t _pad0c14[0x4]; // 0xc14
            source2sdk::entity2::CEntityIOOutput m_OnPickup; // 0xc18            
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0xc40            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xc68            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerTouch; // 0xc90            
            source2sdk::entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xcb8            
            CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xce0            
            float m_flPickupRadius; // 0xce8            
            float m_flTriggerRadius; // 0xcec            
            CUtlSymbolLarge m_pTriggerSoundEffect; // 0xcf0            
            bool m_bGlowWhenInTrigger; // 0xcf8            
            Color m_glowColor; // 0xcf9            
            bool m_bUseable; // 0xcfd            
            uint8_t _pad0cfe[0x2]; // 0xcfe
            // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGenericTriggerHelper> m_hTriggerHelper;
            char m_hTriggerHelper[0x4]; // 0xd00            
            uint8_t _pad0d04[0x4];
            
            // Datamap fields:
            // void CItemGenericItemGenericTouch; // 0x0
            // void InputStartAmbientSound; // 0x0
            // void InputStopAmbientSound; // 0x0
            // void InputToggleAmbientSound; // 0x0
            // void m_hAmbientSound; // 0xb90
            // float auto_remove_timeout; // 0x7fffffff
            // float drag_override; // 0x7fffffff
            // float damping_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGeneric) == 0xd08);
    };
};
