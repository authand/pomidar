#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xf60
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
        // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
        #pragma pack(push, 1)
        class C_DynamicProp : public source2sdk::client::C_BreakableProp
        {
        public:
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0xe40            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0xe41            
            uint8_t _pad0e42[0x6]; // 0xe42
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xe48            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xe70            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xe98            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xec0            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xee8            
            CUtlSymbolLarge m_iszIdleAnim; // 0xf10            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xf18            
            bool m_bRandomizeCycle; // 0xf1c            
            bool m_bStartDisabled; // 0xf1d            
            bool m_bFiredStartEndOutput; // 0xf1e            
            bool m_bForceNpcExclude; // 0xf1f            
            bool m_bCreateNonSolid; // 0xf20            
            bool m_bIsOverrideProp; // 0xf21            
            uint8_t _pad0f22[0x2]; // 0xf22
            std::int32_t m_iInitialGlowState; // 0xf24            
            std::int32_t m_nGlowRange; // 0xf28            
            std::int32_t m_nGlowRangeMin; // 0xf2c            
            Color m_glowColor; // 0xf30            
            std::int32_t m_nGlowTeam; // 0xf34            
            std::int32_t m_iCachedFrameCount; // 0xf38            
            Vector m_vecCachedRenderMins; // 0xf3c            
            Vector m_vecCachedRenderMaxs; // 0xf48            
            uint8_t _pad0f54[0xc];
            
            // Datamap fields:
            // CUtlSymbolLarge StartingAnim; // 0x7fffffff
            // CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
            // CUtlSymbolLarge InputSetAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimation; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimation; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputEnableCollision; // 0x0
            // void InputDisableCollision; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // void C_DynamicPropAnimThink; // 0x0
            // int32_t health; // 0x7fffffff
            // bool HoldAnimation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicProp) == 0xf60);
    };
};
