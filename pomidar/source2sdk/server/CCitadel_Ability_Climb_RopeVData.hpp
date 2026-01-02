#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1780
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Climb_RopeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flMinButtonHoldTimeToActivate; // 0x16f8            
            float m_flClimbSpeedUp; // 0x16fc            
            float m_flClimbSpeedDown; // 0x1700            
            float m_flClimbSpeedDownMax; // 0x1704            
            float m_flClimbDownAccelTime; // 0x1708            
            float m_flLatchSpeed; // 0x170c            
            float m_flAttachOffset; // 0x1710            
            float m_flMinReconnectTime; // 0x1714            
            float m_flSideMoveReduction; // 0x1718            
            float m_flTopOffset; // 0x171c            
            float m_flBottomOffset; // 0x1720            
            float m_flTraceRadiusSize; // 0x1724            
            float m_flStopTimeToShoot; // 0x1728            
            float m_flJumpOffVertical; // 0x172c            
            float m_flJumpOffHorizontal; // 0x1730            
            float m_flDuckOffVertical; // 0x1734            
            float m_flDuckOffHorizontal; // 0x1738            
            float m_flActivateRange; // 0x173c            
            float m_flJumpToRoofRayCheckDist; // 0x1740            
            float m_flMinTimeToRoofCheck; // 0x1744            
            float m_flTimeToHintRefresh; // 0x1748            
            float m_iMaxHintCount; // 0x174c            
            float m_flClimbRopeSlowDurationOnHit; // 0x1750            
            float m_flCameraRotateSpeed; // 0x1754            
            float m_flCameraRotateMaxTime; // 0x1758            
            uint8_t _pad175c[0x4]; // 0x175c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ClimbRopeSlowOnHitModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ClimbRopeSlowOnHitModifier;
            char m_ClimbRopeSlowOnHitModifier[0x10]; // 0x1760            
            // m_ClimbRopeSlowFromRecentDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ClimbRopeSlowFromRecentDamageModifier;
            char m_ClimbRopeSlowFromRecentDamageModifier[0x10]; // 0x1770            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Climb_RopeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Climb_RopeVData) == 0x1780);
    };
};
