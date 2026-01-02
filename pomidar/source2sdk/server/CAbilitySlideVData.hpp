#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x1a38
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilitySlideVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyDescription "The minimum angle we consider to be a slope.  Less than this we will consider flat ground."
            float m_flMinAngleToConsiderASlope; // 0x16f8            
            // metadata: MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the steepest slope."
            float m_flSlideMaxSlopeMaxAccSpeed; // 0x16fc            
            // metadata: MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the shallowest slope."
            float m_flSlideMinSlopeMaxAccSpeed; // 0x1700            
            // metadata: MPropertyDescription "When checking for a drop-slide, how long ago can the activate button have been pressed."
            float m_flButtonPressWindow; // 0x1704            
            // metadata: MPropertyDescription "When fast you can turn while sliding."
            float m_flTurnSpeed; // 0x1708            
            // metadata: MPropertyDescription "Amount of acceleration to apply on the shallowest slope"
            float m_flSlideMinSlopeAcceleration; // 0x170c            
            // metadata: MPropertyDescription "Amount of acceleration to apply on the steepest slope"
            float m_flSlideMaxSlopeAcceleration; // 0x1710            
            // metadata: MPropertyDescription "When pressing forward, how far to the side you need to look to start turning in that direction."
            float m_flTurnMinAngDiff; // 0x1714            
            // metadata: MPropertyDescription "When pressing forward, how far to the side you need to look to apply maximum turning."
            float m_flTurnMaxAngDiff; // 0x1718            
            // metadata: MPropertyDescription "For how long after landing and starting a slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
            float m_flLandedFlatGroundFrictionGraceTime; // 0x171c            
            // metadata: MPropertyDescription "For how long after starting to slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
            float m_flFlatGroundFrictionGraceTime; // 0x1720            
            // metadata: MPropertyDescription "The friction the player uses while sliding on flat ground."
            float m_flFrictionFlatGroundGrace; // 0x1724            
            // metadata: MPropertyDescription "The friction the player uses while sliding on flat ground."
            float m_flFrictionFlatGround; // 0x1728            
            // metadata: MPropertyDescription "The friction the player uses while sliding on our minimum slope."
            float m_flFrictionMinSlope; // 0x172c            
            // metadata: MPropertyDescription "The friction the player uses while sliding on our maximum slope."
            float m_flFrictionMaxSlope; // 0x1730            
            // metadata: MPropertyDescription "How much friction to apply when trying to slide up our minimum slope."
            float m_flFrictionUphillMinSlope; // 0x1734            
            // metadata: MPropertyDescription "How much friction to apply when trying to slide up our maximum slope."
            float m_flFrictionUphillMaxSlope; // 0x1738            
            // metadata: MPropertyDescription "When applying the landing speed boost, bias the scale based on slope by this much."
            float m_flLandingSlopeScaleBias; // 0x173c            
            // metadata: MPropertyDescription "Minimum speed to trigger a boost when landing and trying to slide."
            float m_flBoostMinTriggerSpeed; // 0x1740            
            // metadata: MPropertyDescription "Maximum speed used to determine speed boost when landing and trying to slide."
            float m_flBoostMaxTriggerSpeed; // 0x1744            
            // metadata: MPropertyDescription "Minimum speed boost to apply when landing and initiating a slide."
            float m_flBoostMinSpeed; // 0x1748            
            // metadata: MPropertyDescription "Maximumm speed boost to apply when landing and initiating a slide."
            float m_flBoostMaxSpeed; // 0x174c            
            // metadata: MPropertyDescription "How fast you have to be moving on flat ground to be able to initiate a slide."
            float m_flMinActivationSpeed; // 0x1750            
            // metadata: MPropertyDescription "If your slide speed falls below this on flat ground, you will stop sliding."
            float m_flMinSustainSpeed; // 0x1754            
            // metadata: MPropertyDescription "The amount of speed boost to apply when running forward and initiating a slide."
            float m_flSprintBoostSpeed; // 0x1758            
            // metadata: MPropertyDescription "The time after dashing to start a slide to get the full speed dash slide"
            float m_flDashSlideStartTime; // 0x175c            
            // metadata: MPropertyDescription "The speed to start a slide out of a dash."
            float m_flDashSlideSpeed; // 0x1760            
            // metadata: MPropertyDescription "The speed to start a slide out of a dash if the timing was incorrect."
            float m_flDashSlideFailSpeed; // 0x1764            
            // metadata: MPropertyDescription "Sound for succesfully executing a dash-slide"
            CSoundEventName m_strDashSlideActivate; // 0x1768            
            // metadata: MPropertyDescription "How long to apply 'Dash Boost Friction' after starting a slide out of a dash."
            float m_flDashSlideFrictionTime; // 0x1778            
            // metadata: MPropertyDescription "The friction to apply after starting a slide out of a dash."
            float m_flDashSlideFriction; // 0x177c            
            // metadata: MPropertyDescription "How fast you have to be moving while dashing to initiate a slide.  Mainly to prevent slowed-dash flowing into a weirdly fast slides."
            float m_flDashMinActivationSpeed; // 0x1780            
            // metadata: MPropertyDescription "The shallowest slope degree to start applying downhill acceleration."
            float m_flAccMinSlopeDeg; // 0x1784            
            // metadata: MPropertyDescription "The angle we consider the most extreme slope for applying downhill acceleration."
            float m_flAccMaxSlopeDeg; // 0x1788            
            // metadata: MPropertyDescription "How much of the downhill acceleration to apply at the minimum angle."
            float m_flAccMinSlopeScale; // 0x178c            
            // metadata: MPropertyDescription "When sliding, how far forward to look when determining our averaged current slope"
            float m_flSlideProbeForwardOffset; // 0x1790            
            // metadata: MPropertyDescription "When running on flat ground and trying to initiate a slide, how far forward to look for a slope that will let's us trigger a slide early."
            float m_flSlideActivationProbeForwardOffset; // 0x1794            
            // metadata: MPropertyDescription "Maximum distance between probe samples"
            float m_flMaxDistanceBetweenProbeSamples; // 0x1798            
            // metadata: MPropertyDescription "If activating via the lookahead probe's normal, use that normal for this long after activating to help us get over that slope."
            float m_flInitialSlideUseForwardProbeTime; // 0x179c            
            // metadata: MPropertyDescription "When trying to determine what slope we're currently only, sample this far around the player"
            float m_flCurrentSlopeSampleDistance; // 0x17a0            
            // metadata: MPropertyDescription "Ignore slopes whose angle different from our velocity is this many std deviations out when sampling for current slope"
            float m_flSampleVelDiffStdDevScaleCutoff; // 0x17a4            
            // metadata: MPropertyDescription "If facing further than this angle away from the direction of the slope, dont initiate a slide on it."
            float m_flSlopeFacingAngleToActivate; // 0x17a8            
            // metadata: MPropertyDescription "Maximum air-drag to apply when jumping out of a slide."
            float m_flAirDragAfterJump; // 0x17ac            
            // metadata: MPropertyDescription "How long to apply air-drag after jumping out of a slide."
            float m_flAirDragAfterJumpTime; // 0x17b0            
            // metadata: MPropertyDescription "Air-drag applied when jumping out of a slide linearly ramps from 100% to 0% from 0' to this angle."
            float m_flAirDragMaxAngle; // 0x17b4            
            // metadata: MPropertyDescription "How long you have to be walking around, not sliding until we clear the air-drag flag on jumps."
            float m_flAirDragResetTime; // 0x17b8            
            // metadata: MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
            float m_flLateSlideJumpWindow; // 0x17bc            
            // metadata: MPropertyDescription "Speed remap to slide effect intensity"
            source2sdk::client::CRemapFloat m_SlideEffectRemap; // 0x17c0            
            // metadata: MPropertyDescription "The curve defining the getup anim's speed penalty duration(x) and severity(y)."
            CPiecewiseCurve m_GetupSpeedCurve; // 0x17d0            
            // metadata: MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
            float m_flGetupBusyDuration; // 0x1810            
            // metadata: MPropertyDescription "The amount that sliding reduces recoil. 100 = no recoil at all."
            float m_flSlidingRecoilReduction; // 0x1814            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // 0x1818            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // 0x18a0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_SlideParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlideParticle;
            char m_SlideParticle[0xe0]; // 0x1928            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strStartSound; // 0x1a08            
            CSoundEventName m_strLoopingSound; // 0x1a18            
            CSoundEventName m_strStopSound; // 0x1a28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilitySlideVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilitySlideVData) == 0x1a38);
    };
};
