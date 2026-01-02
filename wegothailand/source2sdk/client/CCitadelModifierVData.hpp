#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierResponseRules_t.hpp"
#include "source2sdk/client/CCitadelTrackedAnimGraphModifierState_t.hpp"
#include "source2sdk/client/CCitadelTrackedBodygroupModifierState_t.hpp"
#include "source2sdk/client/CModifierVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/FootstepSound_t.hpp"
#include "source2sdk/client/HudDisplayLocation_t.hpp"
#include "source2sdk/client/ModifierBarrierBehavior_t.hpp"
#include "source2sdk/client/ModifierOverheadDrawType_t.hpp"
#include "source2sdk/client/ModifierTimeScaleSource_t.hpp"
#include "source2sdk/client/ModifiersDisplayLocation_t.hpp"
#include "source2sdk/client/ParamAndPriority_t.hpp"
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
        // Size: 0x760
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CCitadelModifierVData : public source2sdk::client::CModifierVData
        {
        public:
            bool m_bIsBuildup; // 0x3f8            
            // metadata: MPropertySuppressField
            bool m_bNetworkValuesForStatsPreview; // 0x3f9            
            uint8_t _pad03fa[0x6]; // 0x3fa
            // m_vecAutoRegisterModifierValueFromAbilityPropertyName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecAutoRegisterModifierValueFromAbilityPropertyName;
            char m_vecAutoRegisterModifierValueFromAbilityPropertyName[0x18]; // 0x400            
            // metadata: MPropertyStartGroup "Kill & Assist Credit"
            bool m_bCasterCountsAsAssister; // 0x418            
            uint8_t _pad0419[0x3]; // 0x419
            // metadata: MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
            float m_flLingeringAssistWindow; // 0x41c            
            // metadata: MPropertyStartGroup "Time"
            // metadata: MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
            bool m_bDurationCanBeTimeScaled; // 0x420            
            bool m_bDurationReducible; // 0x421            
            uint8_t _pad0422[0x2]; // 0x422
            // metadata: MPropertyDescription "Whose timescale to use when adjusting duration."
            source2sdk::client::ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x424            
            // metadata: MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
            bool m_bDurationAffectedByEffectiveness; // 0x428            
            uint8_t _pad0429[0x7]; // 0x429
            // metadata: MPropertyStartGroup "AnimGraph1"
            // metadata: MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
            // m_vecSetAndTrackedAnimGraphParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCitadelTrackedAnimGraphModifierState_t> m_vecSetAndTrackedAnimGraphParams;
            char m_vecSetAndTrackedAnimGraphParams[0x18]; // 0x430            
            // metadata: MPropertyStartGroup "AnimGraph2"
            // metadata: MPropertyFriendlyName "base_action value"
            // metadata: MPropertyDescription "The value to set the parameter "base_action" to.  Should be used for actions that are common to all heroes (ex. lifted)."
            source2sdk::client::ParamAndPriority_t m_AG2BaseAction; // 0x448            
            // metadata: MPropertyFriendlyName "base_state value"
            // metadata: MPropertyDescription "The value to set the parameter "base_state" to.  Should be used for states that are common to all heroes (ex. asleep)."
            source2sdk::client::ParamAndPriority_t m_AG2BaseState; // 0x458            
            // metadata: MPropertyFriendlyName "hero_state value"
            // metadata: MPropertyDescription "The value to set the parameter "hero_state" to.  Should be used for states that are custom for the casting hero (ex. icepathing, flamedashing)."
            source2sdk::client::ParamAndPriority_t m_AG2HeroState; // 0x468            
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
            // m_vecSetAndTrackedBodyGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CCitadelTrackedBodygroupModifierState_t> m_vecSetAndTrackedBodyGroups;
            char m_vecSetAndTrackedBodyGroups[0x18]; // 0x478            
            // metadata: MPropertyStartGroup "UI"
            source2sdk::client::ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x490            
            bool m_bReverseHudProgressBar; // 0x494            
            uint8_t _pad0495[0x3]; // 0x495
            CUtlString m_strSmallIconCssClass; // 0x498            
            CUtlString m_strHintText; // 0x4a0            
            // metadata: MPropertyDescription "When set, different modifiers from the same ability will collapse based on this ID."
            CUtlString m_strModifierOverrideStatusID; // 0x4a8            
            CPanoramaImageName m_strHudIcon; // 0x4b0            
            source2sdk::client::HudDisplayLocation_t m_eHudDisplayLocation; // 0x4c0            
            source2sdk::client::ModifiersDisplayLocation_t m_eModifierDisplayLocaiton; // 0x4c4            
            // metadata: MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
            CUtlString m_strHudMessageText; // 0x4c8            
            // metadata: MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
            bool m_bIsHiddenOverhead; // 0x4d0            
            uint8_t _pad04d1[0x7]; // 0x4d1
            // metadata: MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
            // m_vecAlwaysShowInStatModifierUI has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::EModifierValue> m_vecAlwaysShowInStatModifierUI;
            char m_vecAlwaysShowInStatModifierUI[0x18]; // 0x4d8            
            // metadata: MPropertyStartGroup "Responses"
            source2sdk::client::CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4f0            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x528            
            // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
            bool m_bEndCreatedSequenceOnRemove; // 0x5b0            
            uint8_t _pad05b1[0x7]; // 0x5b1
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x5b8            
            // metadata: MPropertyStartGroup "Barrier"
            source2sdk::client::ModifierBarrierBehavior_t m_BarrierBehavior; // 0x640            
            uint8_t _pad0644[0x4]; // 0x644
            // m_BarrierCreateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrierCreateParticle;
            char m_BarrierCreateParticle[0xe0]; // 0x648            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sExpiredSound; // 0x728            
            // metadata: MPropertyDescription "Overrides the default footstep. The footstep with the greatest Priority is selected. It must have a priority greater than -1 to be selected!"
            source2sdk::client::FootstepSound_t m_FootstepOverride; // 0x738            
            // metadata: MPropertyDescription "Plays alongside the default footstep."
            CSoundEventName m_FootstepAdditional; // 0x750            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifierVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifierVData) == 0x760);
    };
};
