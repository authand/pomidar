#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/DynamicContinuousContactBehavior_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp_CrateType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xe30
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bAwake"
        #pragma pack(push, 1)
        class CPhysicsProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0c80[0x8]; // 0xc80
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0xc88            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0xcb0            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0xcd8            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0xd00            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xd28            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xd50            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xd78            
            bool m_bForceNavIgnore; // 0xda0            
            bool m_bNoNavmeshBlocker; // 0xda1            
            bool m_bForceNpcExclude; // 0xda2            
            uint8_t _pad0da3[0x1]; // 0xda3
            float m_massScale; // 0xda4            
            float m_buoyancyScale; // 0xda8            
            std::int32_t m_damageType; // 0xdac            
            std::int32_t m_damageToEnableMotion; // 0xdb0            
            float m_flForceToEnableMotion; // 0xdb4            
            bool m_bThrownByPlayer; // 0xdb8            
            bool m_bDroppedByPlayer; // 0xdb9            
            bool m_bTouchedByPlayer; // 0xdba            
            bool m_bFirstCollisionAfterLaunch; // 0xdbb            
            bool m_bHasBeenAwakened; // 0xdbc            
            bool m_bIsOverrideProp; // 0xdbd            
            uint8_t _pad0dbe[0x2]; // 0xdbe
            source2sdk::entity2::GameTime_t m_flLastBurn; // 0xdc0            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xdc4            
            uint8_t _pad0dc5[0x3]; // 0xdc5
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xdc8            
            std::int32_t m_iInitialGlowState; // 0xdcc            
            std::int32_t m_nGlowRange; // 0xdd0            
            std::int32_t m_nGlowRangeMin; // 0xdd4            
            Color m_glowColor; // 0xdd8            
            bool m_bShouldAutoConvertBackFromDebris; // 0xddc            
            bool m_bMuteImpactEffects; // 0xddd            
            uint8_t _pad0dde[0x9]; // 0xdde
            bool m_bAcceptDamageFromHeldObjects; // 0xde7            
            bool m_bEnableUseOutput; // 0xde8            
            uint8_t _pad0de9[0x3]; // 0xde9
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xdec            
            CUtlSymbolLarge m_strItemClass[4]; // 0xdf0            
            std::int32_t m_nItemCount[4]; // 0xe10            
            bool m_bRemovableForAmmoBalancing; // 0xe20            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0xe21            
            bool m_bAttachedToReferenceFrame; // 0xe22            
            uint8_t _pad0e23[0xd];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputWake; // 0x0
            // bool InputSetAutoConvertBackFromDebris; // 0x0
            // void InputSleep; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // float InputSetMass; // 0x0
            // void InputEnableGravity; // 0x0
            // void InputDisableGravity; // 0x0
            // void InputEnableDrag; // 0x0
            // void InputDisableDrag; // 0x0
            // void InputEnableCollisions; // 0x0
            // void InputDisableCollisions; // 0x0
            // bool forcemotiondisabled; // 0x7fffffff
            // bool phys_start_asleep; // 0x7fffffff
            // void CPhysicsPropClearFlagsThink; // 0x0
            // int32_t m_nNavObstacleType; // 0xde0
            // bool m_bUpdateNavWhenMoving; // 0xde4
            // bool m_bForceNavObstacleCut; // 0xde5
            // bool m_bAllowObstacleConvexHullMerging; // 0xde6
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xe30);
    };
};
