#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CRemapFloat.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityJumpVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            float m_flShootingLockoutAfterJump; // 0x16f8            
            float m_flShootingInaccuracyPercentageAfterJump; // 0x16fc            
            float m_flShootingInaccuracyDurationAfterJump; // 0x1700            
            uint8_t _pad1704[0x4]; // 0x1704
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashJumpParticle;
            char m_DashJumpParticle[0xe0]; // 0x1708            
            // m_AirJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AirJumpParticle;
            char m_AirJumpParticle[0xe0]; // 0x17e8            
            // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
            char m_WallJumpParticle[0xe0]; // 0x18c8            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_GroundJumpExecutedSound; // 0x19a8            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_AirJumpSound; // 0x19b8            
            // metadata: MPropertyStartGroup "Air Jump"
            float m_flMantleRefundWindow; // 0x19c8            
            float m_flZiplineRefundWindow; // 0x19cc            
            float m_flLateJumpGraceWindow; // 0x19d0            
            // metadata: MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
            float m_flMaxSpeedDelta; // 0x19d4            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strDashJumpSound; // 0x19d8            
            // metadata: MPropertyStartGroup "Roll Jump"
            float m_flDashJumpStartTime; // 0x19e8            
            float m_flDashJumpEndTime; // 0x19ec            
            // metadata: MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
            float m_flDashJumpDistanceInMeters; // 0x19f0            
            uint8_t _pad19f4[0x4]; // 0x19f4
            float m_flDashJumpVerticalSpeed; // 0x19f8            
            float m_flDashJumpMissMaxSpeed; // 0x19fc            
            float m_flDashJumpMantleDisableTime; // 0x1a00            
            uint8_t _pad1a04[0x4]; // 0x1a04
            // metadata: MPropertyStartGroup "Wall Jump"
            // metadata: MPropertyDescription "Basic wall jump sound"
            CSoundEventName m_WallJumpExecutedSound; // 0x1a08            
            // metadata: MPropertyDescription "Corner Boost sound - a tricky to execute wall jump, off of an upward turned collision contact"
            CSoundEventName m_CornerBoostExecutedSound; // 0x1a18            
            // metadata: MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
            float m_flCollidedWallMaxDist; // 0x1a28            
            // metadata: MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
            source2sdk::client::CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x1a2c            
            // metadata: MPropertyDescription "Fatigue recovery: How long after the last wall jump does it take to recover a full wall jump. Seconds."
            float m_flWallJumpFullPowerRechargeTime; // 0x1a3c            
            // metadata: MPropertyDescription "Smallest possible fraction of a full wall jump you can perform regardless of really small times since last button press."
            float m_flWallJumpPowerMin; // 0x1a40            
            // metadata: MPropertyDescription "How much does fatigue affect the power of the wall jump. 0.0 = aggressive (full power earlier) 0.5 = linear. 1.0 = gentle (full power later)"
            float m_flWallJumpPowerBias; // 0x1a44            
            // metadata: MPropertyDescription "How much vertical speed do we give the player, before fatigue is applied. Fatigue only applies to vertical speed."
            float m_flWallJumpUpSpeed; // 0x1a48            
            // metadata: MPropertyDescription "Extra velocity along the wall, either direction, based on wish direction."
            float m_flWallJumpMaxLateralSpeed; // 0x1a4c            
            // metadata: MPropertyDescription "How does the power of 'Wall Jump Max Lateral Speed' fall off with speed along the wall (so that players can't stack this speed forever). X axis is speed along the wall in meters per second (using METERS_PER_INCH). Values from this curve are clamped to 0..1 output. "
            CPiecewiseCurve m_WallJumpLateralSpeedFalloffVsAlongSpeed; // 0x1a50            
            // metadata: MPropertyDescription "Velocity away from the wall when pressing wish direction toward the wall"
            float m_flWallJumpMinOutSpeed; // 0x1a90            
            // metadata: MPropertyDescription "Velocity away from the wall when pressing wish direction away from the wall"
            float m_flWallJumpMaxOutSpeed; // 0x1a94            
            // metadata: MPropertyDescription "Shortly after a wall jump, acceleration back toward the wall is increased. This is the period this exists for. Strength fades over this time to zero."
            float m_flWallJumpLateralInputSuppressTime; // 0x1a98            
            // metadata: MPropertyDescription "Shortly after a wall jump, acceleration back toward the wall is increased. This is the maximum bonus (immediately after the wall jump). "
            float m_flWallJumpReturnToWallBonusAccel; // 0x1a9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityJumpVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityJumpVData) == 0x1aa0);
    };
};
