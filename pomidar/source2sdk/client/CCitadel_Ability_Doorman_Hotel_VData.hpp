#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_Doorman_Hotel_Imposter.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1980
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Hotel_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_NoDrawModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NoDrawModifier;
            char m_NoDrawModifier[0x10]; // 0x16f8            
            // m_FreezeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_FreezeModifier;
            char m_FreezeModifier[0x10]; // 0x1708            
            // m_HotelModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HotelModifier;
            char m_HotelModifier[0x10]; // 0x1718            
            // m_DamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DamageModifier;
            char m_DamageModifier[0x10]; // 0x1728            
            // m_TeleportFXModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_TeleportFXModifier;
            char m_TeleportFXModifier[0x10]; // 0x1738            
            // m_PreTeleportModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_PreTeleportModifier;
            char m_PreTeleportModifier[0x10]; // 0x1748            
            // m_UnstoppableWhileChannelingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_UnstoppableWhileChannelingModifier;
            char m_UnstoppableWhileChannelingModifier[0x10]; // 0x1758            
            // m_ImposterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadel_Modifier_Doorman_Hotel_Imposter> m_ImposterModifier;
            char m_ImposterModifier[0x10]; // 0x1768            
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x1778            
            // m_ChannelStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelStartParticle;
            char m_ChannelStartParticle[0xe0]; // 0x1858            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLateHitConfirmSound; // 0x1938            
            CSoundEventName m_strEscapeHitConfirmSound; // 0x1948            
            // metadata: MPropertyStartGroup "Gameplay"
            // metadata: MPropertyDescription "How long to delay triggering the relay in the hotel after cast on a target"
            float m_flSequenceTriggerOffset; // 0x1958            
            // metadata: MPropertyDescription "Delay after casting before teleporting to the hotel"
            float m_flTeleportToHotelDelay; // 0x195c            
            // metadata: MPropertyDescription "Delay after reaching the exit (or failing to) before teleporting back to source"
            float m_flTeleportToSourceDelay; // 0x1960            
            // metadata: MPropertyDescription "Delay after teleporting to the source before control is given back to the player. This period is for the player to get their bearings"
            float m_flPostSourceTeleportHold; // 0x1964            
            // metadata: MPropertyDescription "How long the face to black should be for the teleports"
            float m_flFadeToBlackDuration; // 0x1968            
            // metadata: MPropertyDescription "Doorman's max speed while channeling.  The victim's is specified in the pre-teleport modifier."
            float m_flDoormanGroundSpeedMax; // 0x196c            
            // metadata: MPropertyDescription "Doorman's max air speed while channeling.  The victim's is specified in the pre-teleport modifier."
            float m_flDoormanAirSpeedMax; // 0x1970            
            // metadata: MPropertyDescription "Doorman's fall speed while channeling.  The victim's is specified in the pre-teleport modifier."
            float m_flDoormanFallSpeedMax; // 0x1974            
            // metadata: MPropertyDescription "Doorman's air drag while channeling.  The victim's is specified in the pre-teleport modifier."
            float m_flDoormanAirDrag; // 0x1978            
            uint8_t _pad197c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Hotel_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Hotel_VData) == 0x1980);
    };
};
