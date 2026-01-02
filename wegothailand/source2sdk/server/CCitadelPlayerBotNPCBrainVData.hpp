#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"

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
        // Size: 0x1248
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelPlayerBotNPCBrainVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            // metadata: MPropertyStartGroup "Movement"
            float m_flJumpMaxRise; // 0x11d8            
            float m_flAirJumpMin; // 0x11dc            
            float m_flJumpMaxDrop; // 0x11e0            
            float m_flJumpMaxDist; // 0x11e4            
            float m_flJumpMinDist; // 0x11e8            
            float m_flClimbUpCostBase; // 0x11ec            
            float m_flClimbUpCostScalar; // 0x11f0            
            float m_flFaceTargetDistance; // 0x11f4            
            float m_flNavGoalTolerance; // 0x11f8            
            float m_flVerticalAttachOffset; // 0x11fc            
            float m_flStuckTime; // 0x1200            
            float m_flStuckTimeAir; // 0x1204            
            float m_flMajorStuckTime; // 0x1208            
            std::int32_t m_unMajorStuckAttemptCount; // 0x120c            
            float m_flStuckDistance; // 0x1210            
            float m_flMaxPathDistance; // 0x1214            
            float m_flMinLanePathDistance; // 0x1218            
            float m_flEnemyDistanceForReload; // 0x121c            
            float m_flReloadEnemyFarPct; // 0x1220            
            float m_flReloadEnemyLoSPct; // 0x1224            
            float m_flReloadEnemyLosTime; // 0x1228            
            float m_flMinShootTimeToReload; // 0x122c            
            float m_flDashDamageThreshold; // 0x1230            
            float m_flDashDamageTickDown; // 0x1234            
            float m_flMinDesiredDashDist; // 0x1238            
            float m_flMinAbilityAimTime; // 0x123c            
            float m_flDisengageFromEnemyToLaneDist; // 0x1240            
            float m_flDefendBaseSearchRadius; // 0x1244            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerBotNPCBrainVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerBotNPCBrainVData) == 0x1248);
    };
};
