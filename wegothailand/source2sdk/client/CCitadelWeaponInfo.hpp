#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelSpreadPerShotNormalization_t.hpp"
#include "source2sdk/client/CitadelWeaponRecoilData_t.hpp"
#include "source2sdk/client/EAttachmentSourceType.hpp"
#include "source2sdk/client/PerSurfaceImpactEffects_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"

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
        // Standard-layout class: true
        // Size: 0x758
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelWeaponInfo
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyStartGroup "Firing Behavior"
            // metadata: MPropertyDescription "Bullet Damage"
            float m_flBulletDamage; // 0x8            
            // metadata: MPropertyDescription "Number of bullets to fire per shot"
            std::int32_t m_iBullets; // 0xc            
            // metadata: MPropertyDescription "Max to fire upon SplitShot (-1 = use default)"
            std::int32_t m_iSplitShotsMax; // 0x10            
            // metadata: MPropertyDescription "If true, take full damage when hit by any of the bullets rather than being split across all bullets."
            bool m_bHitOnceAcrossAllBullets; // 0x14            
            uint8_t _pad0015[0x3]; // 0x15
            // metadata: MPropertyDescription "How many bullets must hit an orb in order to fully claim it."
            std::int32_t m_iBulletsToFullyClaimOrb; // 0x18            
            // metadata: MPropertyDescription "If > 0, this bullet will apply its damage in a radius where it impacts (this is how to make something like a rocket)."
            float m_flExplosionRadius; // 0x1c            
            // metadata: MPropertyDescription "Damage scale at the extent of the explosion radius."
            // metadata: MPropertySuppressExpr "m_flExplosionRadius == 0"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flExplosionDamageScaleAtMaxRadius; // 0x20            
            // metadata: MPropertySuppressExpr "m_flExplosionRadius == 0"
            // metadata: MPropertyDescription "Does the explosion collect gold (i.e soul orbs)?"
            bool m_bAllowExplosionToCollectGold; // 0x24            
            uint8_t _pad0025[0x3]; // 0x25
            // metadata: MPropertyDescription "Clip Size"
            std::int32_t m_iClipSize; // 0x28            
            // metadata: MPropertyDescription "The time between shots. In burst it's the time between starting a new burst."
            float m_flCycleTime; // 0x2c            
            // metadata: MPropertyDescription "A delay after triggering a shot when the bullets comes out."
            float m_flBulletCreationDelay; // 0x30            
            // metadata: MPropertyDescription "How many shots to fire per burst"
            std::int32_t m_iBurstShotCount; // 0x34            
            // metadata: MPropertyDescription "The time between shoots within a burst"
            // metadata: MPropertySuppressExpr "m_iBurstShotCount == 1"
            float m_flIntraBurstCycleTime; // 0x38            
            // metadata: MPropertyDescription "How much ammo to consume to shoot this gun."
            std::int32_t m_iAmmoConsumedPerShot; // 0x3c            
            // metadata: MPropertyDescription "The maximum distance bullets will travel"
            float m_flRange; // 0x40            
            // metadata: MPropertyDescription "The maximum distance bullets will travel while zoomed. If 0, uses Range."
            float m_flRangeWhileZoomed; // 0x44            
            // metadata: MPropertyDescription "The distance where damage falloff begins. Damage scale before this is clamped to 'Damage Falooff Start Scale'."
            float m_flDamageFalloffStartRange; // 0x48            
            // metadata: MPropertyDescription "The distance where damage falloff ends.  Beyond this range, damage scale is clamped to 'Damage Falloff End Scale'"
            float m_flDamageFalloffEndRange; // 0x4c            
            // metadata: MPropertyDescription "The bias in the damage falloff range"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flDamageFalloffBias; // 0x50            
            // metadata: MPropertyDescription "Damage falloff start range."
            float m_flDamageFalloffStartScale; // 0x54            
            // metadata: MPropertyDescription "Damage falloff end range"
            float m_flDamageFalloffEndScale; // 0x58            
            // metadata: MPropertyDescription "If true, this bullet will not pass through portals.  It will impact them instead"
            bool m_bDontPassThroughPortals; // 0x5c            
            uint8_t _pad005d[0x3]; // 0x5d
            // metadata: MPropertyDescription "If > 0, bullets will continue through thin surfaces with their damage scaled by this amount"
            float m_flPenetrationPercent; // 0x60            
            // metadata: MPropertyDescription "How long does it takes to aim down sights. "
            float m_flIronSightsTime; // 0x64            
            // metadata: MPropertyStartGroup "Firing Behavior/+Reload"
            // metadata: MPropertyDescription "How long a reload takes"
            // metadata: MPropertyFriendlyName "Reload Duration"
            float m_reloadDuration; // 0x68            
            // metadata: MPropertyDescription "Compute duration from the active weapon info, instead of the stat value. Used when overloading GetWeaponInfo()"
            bool m_bReloadUseActiveWeaponInfoDuration; // 0x6c            
            // metadata: MPropertyDescription "Reload a single bullet when the reload duration completes rather than the entire clip"
            bool m_bReloadSingleBullets; // 0x6d            
            // metadata: MPropertyDescription "Allows canceling out of the reload at any time by firing your gun."
            bool m_bReloadSingleBulletsAllowCancel; // 0x6e            
            uint8_t _pad006f[0x1]; // 0x6f
            // metadata: MPropertyDescription "Initial Delay before starting to reload bullets when using single bullet reload."
            float m_flReloadSingleBulletsInitialDelay; // 0x70            
            // metadata: MPropertyStartGroup "Firing Behavior/Crits"
            // metadata: MPropertyDescription "Are we allowed to crit via headshots and weakpoints"
            bool m_bCanCrit; // 0x74            
            uint8_t _pad0075[0x3]; // 0x75
            // metadata: MPropertyDescription "The distance where crit bonus damage begins to change"
            // metadata: MPropertySuppressExpr "m_bCanCrit == false"
            float m_flCritBonusStartRange; // 0x78            
            // metadata: MPropertyDescription "The distance where crit bonus damage ends its change"
            // metadata: MPropertySuppressExpr "m_bCanCrit == false"
            float m_flCritBonusEndRange; // 0x7c            
            // metadata: MPropertyDescription "Crit multiplier up to the 'Crit Bonus Start Range'"
            // metadata: MPropertySuppressExpr "m_bCanCrit == false"
            float m_flCritBonusStart; // 0x80            
            // metadata: MPropertyDescription "Crit multiplier at and beyond  'Crit Bonus End Range'"
            // metadata: MPropertySuppressExpr "m_bCanCrit == false"
            float m_flCritBonusEnd; // 0x84            
            // metadata: MPropertyDescription "Bonus on top of the multiplier when critting NPCs"
            // metadata: MPropertySuppressExpr "m_bCanCrit == false"
            float m_flCritBonusAgainstNPCs; // 0x88            
            // metadata: MPropertyStartGroup "Firing Behavior/Spinup"
            // metadata: MPropertyDescription "Does the cycle time of this weapon change the more you fire it?"
            bool m_bSpinsUp; // 0x8c            
            uint8_t _pad008d[0x3]; // 0x8d
            // metadata: MPropertyDescription "-1 means use m_flCycleTime"
            // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
            float m_flMaxSpinCycleTime; // 0x90            
            // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
            float m_flSpinIncreaseRate; // 0x94            
            // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
            float m_flSpinDecayRate; // 0x98            
            // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
            float m_flBuildUpRate; // 0x9c            
            // metadata: MPropertyStartGroup "Firing Behavior/SemiAuto"
            // metadata: MPropertyDescription "Does this weapon function as semi-auto, i.e you have to release the key to fire again"
            bool m_bIsSemiAuto; // 0xa0            
            uint8_t _pad00a1[0x3]; // 0xa1
            // metadata: MPropertyStartGroup "Bullet Travel"
            float m_flBulletSpeed; // 0xa4            
            float m_flBulletSpeedRandomFactor; // 0xa8            
            float m_flBulletGravityScale; // 0xac            
            float m_flBulletRadius; // 0xb0            
            float m_flBulletRadiusVsWorld; // 0xb4            
            float m_flBulletLifetime; // 0xb8            
            float m_flVerticalAimBias; // 0xbc            
            // metadata: MPropertyDescription "Scale of how much of the owner's currenty velocity to apply to the bullet (think Tribes discs)"
            float m_flBulletInheritShooterVelocityScale; // 0xc0            
            // metadata: MPropertyStartGroup "Zoom"
            // metadata: MPropertyDescription "Do we zoom on right-click?"
            bool m_bCanZoom; // 0xc4            
            uint8_t _pad00c5[0x3]; // 0xc5
            // metadata: MPropertyDescription "What our FOV goes to when zoomed"
            // metadata: MPropertySuppressExpr "m_bCanZoom == false"
            float m_flZoomFOV; // 0xc8            
            // metadata: MPropertyStartGroup "Movement Speeds"
            // metadata: MPropertyDescription "How fast we can walk when zoomed/shooting/reloading"
            float m_flZoomMoveSpeedPercent; // 0xcc            
            float m_flShootMoveSpeedPercent; // 0xd0            
            float m_flReloadMoveSpeedPercent; // 0xd4            
            // metadata: MPropertyStartGroup "Spread"
            // metadata: MPropertyDescription "Base spread when shooting down sights"
            float m_Spread; // 0xd8            
            // metadata: MPropertyDescription "Does the first shot ( e.g. at min decay ) ignore spread?"
            bool m_bFirstShotPerfectAccuracy; // 0xdc            
            uint8_t _pad00dd[0x3]; // 0xdd
            // metadata: MPropertyDescription "Shooting spread penalty when shooting down sights "
            source2sdk::tier2::CRangeFloat m_AimingShootSpreadPenalty; // 0xe0            
            // metadata: MPropertyDescription "Scale of multi-bullet (shotgun) spread in Y-axis"
            float m_flScatterYawScale; // 0xe8            
            // metadata: MPropertyDescription "Spread increase per shot. 0-1, % of max shoot penalty to add per shot."
            float m_flShootSpreadPenaltyPerShot; // 0xec            
            // metadata: MPropertyDescription "How much to normalize shoot spread penalty per shot based on fire rate pct. Y values between 0.0-1.0"
            source2sdk::client::CitadelSpreadPerShotNormalization_t m_ShootSpreadPenaltyPerShotNormalization; // 0xf0            
            // metadata: MPropertyDescription "Delay after shooting stops to start decaying shooting spread penalty.  -1 means use Cycle Time"
            float m_flShootSpreadPenaltyDecayDelay; // 0x104            
            // metadata: MPropertyDescription "How much shoot spread penalty to decay per second"
            float m_flShootSpreadPenaltyDecay; // 0x108            
            // metadata: MPropertyDescription "Spread penalty decay. This is used for things like mantle and dash."
            float m_flSpreadPenaltyDecay; // 0x10c            
            // metadata: MPropertyDescription "NPCS ONLY. Spread penalty when aiming up"
            float m_flShootingUpSpreadPenalty; // 0x110            
            // metadata: MPropertyDescription "NPCS ONLY. The amount of time the weapon is idle befoer we fully replenish the clip (0 means don't do it)"
            float m_flAutoReplenishClip; // 0x114            
            // metadata: MPropertyDescription "NPCS ONLY. Aiming spread for npc guns. "
            source2sdk::tier2::CRangeFloat m_NpcAimingSpread; // 0x118            
            // metadata: MPropertyDescription "Shotgun Scatter offsets. Allows you to manually define where pellets from shotguns go. "
            // m_vecScatterOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector2D> m_vecScatterOffsets;
            char m_vecScatterOffsets[0x18]; // 0x120            
            // metadata: MPropertyDescription "Shotgun Scatter pellet factor. Spread for shotguns is used to determine per pellet spread. This control the overall spread of the pattern."
            float m_flPelletScatterFactor; // 0x138            
            // metadata: MPropertyDescription "Shotgun Scatter pellet spread factor. Before applying spread to individual pellets, this factor is applied. No pellet spread is applied to the first bullet."
            float m_flPelletScatterSpreadFactor; // 0x13c            
            // metadata: MPropertyDescription "Shotgun Scatter only. Should spread be applied to the first pellet?"
            bool m_bApplySpreadToFirstPellet; // 0x140            
            uint8_t _pad0141[0x7]; // 0x141
            // metadata: MPropertyDescription "Shotgun Pellet Spawn Origin Offsets. Allows you to manually define where pellets can be created."
            // m_vecOriginOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector2D> m_vecOriginOffsets;
            char m_vecOriginOffsets[0x18]; // 0x148            
            // metadata: MPropertyStartGroup "Recoil"
            // metadata: MPropertyDescription "Vertical view punch per shot"
            float m_flVerticalPunch; // 0x160            
            // metadata: MPropertyDescription "Horizontal view punch per shot"
            float m_flHorizontalPunch; // 0x164            
            source2sdk::client::CitadelWeaponRecoilData_t m_HorizontalRecoil; // 0x168            
            source2sdk::client::CitadelWeaponRecoilData_t m_VerticallRecoil; // 0x17c            
            // metadata: MPropertyDescription "Factor for how much faster than cycle time it should take for recoil to reach it's peak. 1 = cycle time, 2 = 1/2 * cycletime, etc."
            float m_flRecoilSpeed; // 0x190            
            // metadata: MPropertyDescription "Factor for how much faster than cycle time before we should start recovering from recoil."
            float m_flRecoilRecoveryDelayFactor; // 0x194            
            // metadata: MPropertyDescription "How fast does recoil recovery down to the original crosshair position."
            float m_flRecoilRecoverySpeed; // 0x198            
            // metadata: MPropertyDescription "What % of cycletime does it take to reduce recoil index by 1."
            float m_flRecoilShotIndexRecoveryTimeFactor; // 0x19c            
            std::int32_t m_nRecoilSeed; // 0x1a0            
            uint8_t _pad01a4[0x4]; // 0x1a4
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Effect to actually fire into the world from this weapon. CP3.X = radius, CP3.Y = fire rate, CP3.Z = DPS."
            // m_szBulletTravelTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szBulletTravelTracerParticle;
            char m_szBulletTravelTracerParticle[0xe0]; // 0x1a8            
            // m_szSelfBulletTravelTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szSelfBulletTravelTracerParticle;
            char m_szSelfBulletTravelTracerParticle[0xe0]; // 0x288            
            // m_szBulletLinkParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szBulletLinkParticle;
            char m_szBulletLinkParticle[0xe0]; // 0x368            
            bool m_bUseDesatForFriendlyNonHeroTracer; // 0x448            
            uint8_t _pad0449[0x3]; // 0x449
            // metadata: MPropertyDescription "What attachments to use when shooting this weapon.  By default we use the gun muzzles of the model.  Change to 'Custom' to allow specifying a custom attachment."
            source2sdk::client::EAttachmentSourceType m_eAttachmentSourceType; // 0x44c            
            // metadata: MPropertySuppressExpr "m_eAttachmentSourceType != EAttachmentSource_Custom"
            CUtlString m_strCustomAttachmentSource; // 0x450            
            // m_szMuzzleFlashEffectName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashEffectName;
            char m_szMuzzleFlashEffectName[0xe0]; // 0x458            
            // metadata: MPropertyDescription "Bullet impact effect.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
            // m_strWeaponImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strWeaponImpactEffect;
            char m_strWeaponImpactEffect[0xe0]; // 0x538            
            // metadata: MPropertyFriendlyName "Surface Impact Effects"
            // metadata: MPropertyDescription "Per surface impact effects.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
            // m_mapImpactEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringToken,source2sdk::client::PerSurfaceImpactEffects_t> m_mapImpactEffects;
            char m_mapImpactEffects[0x28]; // 0x618            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strShootSound; // 0x640            
            CSoundEventName m_strFirstShotSound; // 0x650            
            CSoundEventName m_strShotReleaseSound; // 0x660            
            CSoundEventName m_strBulletLoopingSound; // 0x670            
            CSoundEventName m_strBulletWhizSound; // 0x680            
            CSoundEventName m_strBulletImpactSound; // 0x690            
            float m_flBulletWhizDistance; // 0x6a0            
            uint8_t _pad06a4[0x4]; // 0x6a4
            CSoundEventName m_strReloadSound; // 0x6a8            
            CSoundEventName m_strReloadEndSound; // 0x6b8            
            CSoundEventName m_strLocalPlayerBulletImpactSound; // 0x6c8            
            CSoundEventName m_strLocalPlayerBulletImpactHeavySound; // 0x6d8            
            CSoundEventName m_strZoomInSound; // 0x6e8            
            CSoundEventName m_strZoomOutSound; // 0x6f8            
            CSoundEventName m_strSpinUpSound; // 0x708            
            CSoundEventName m_strSpinDownSound; // 0x718            
            CSoundEventName m_strSpinUpLoopSound; // 0x728            
            uint8_t _pad0738[0x1c]; // 0x738
            // metadata: MPropertyStartGroup "Networking"
            // metadata: MPropertyDescription "Max Lag Compensation. Reduces favor-the-shooter is lower than sv_maxunlag"
            float m_flMaxLagCompensation; // 0x754            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletDamage) == 0x8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_iBullets) == 0xc);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_iSplitShotsMax) == 0x10);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bHitOnceAcrossAllBullets) == 0x14);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_iBulletsToFullyClaimOrb) == 0x18);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flExplosionRadius) == 0x1c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flExplosionDamageScaleAtMaxRadius) == 0x20);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bAllowExplosionToCollectGold) == 0x24);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_iClipSize) == 0x28);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flCycleTime) == 0x2c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletCreationDelay) == 0x30);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_iBurstShotCount) == 0x34);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flIntraBurstCycleTime) == 0x38);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_iAmmoConsumedPerShot) == 0x3c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flRange) == 0x40);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flRangeWhileZoomed) == 0x44);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flDamageFalloffStartRange) == 0x48);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flDamageFalloffEndRange) == 0x4c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flDamageFalloffBias) == 0x50);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flDamageFalloffStartScale) == 0x54);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flDamageFalloffEndScale) == 0x58);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bDontPassThroughPortals) == 0x5c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flPenetrationPercent) == 0x60);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flIronSightsTime) == 0x64);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_reloadDuration) == 0x68);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bReloadUseActiveWeaponInfoDuration) == 0x6c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bReloadSingleBullets) == 0x6d);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bReloadSingleBulletsAllowCancel) == 0x6e);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flReloadSingleBulletsInitialDelay) == 0x70);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bCanCrit) == 0x74);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flCritBonusStartRange) == 0x78);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flCritBonusEndRange) == 0x7c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flCritBonusStart) == 0x80);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flCritBonusEnd) == 0x84);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flCritBonusAgainstNPCs) == 0x88);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bSpinsUp) == 0x8c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flMaxSpinCycleTime) == 0x90);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flSpinIncreaseRate) == 0x94);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flSpinDecayRate) == 0x98);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBuildUpRate) == 0x9c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bIsSemiAuto) == 0xa0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletSpeed) == 0xa4);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletSpeedRandomFactor) == 0xa8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletGravityScale) == 0xac);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletRadius) == 0xb0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletRadiusVsWorld) == 0xb4);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletLifetime) == 0xb8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flVerticalAimBias) == 0xbc);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletInheritShooterVelocityScale) == 0xc0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bCanZoom) == 0xc4);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flZoomFOV) == 0xc8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flZoomMoveSpeedPercent) == 0xcc);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flShootMoveSpeedPercent) == 0xd0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flReloadMoveSpeedPercent) == 0xd4);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_Spread) == 0xd8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bFirstShotPerfectAccuracy) == 0xdc);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_AimingShootSpreadPenalty) == 0xe0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flScatterYawScale) == 0xe8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flShootSpreadPenaltyPerShot) == 0xec);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_ShootSpreadPenaltyPerShotNormalization) == 0xf0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flShootSpreadPenaltyDecayDelay) == 0x104);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flShootSpreadPenaltyDecay) == 0x108);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flSpreadPenaltyDecay) == 0x10c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flShootingUpSpreadPenalty) == 0x110);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flAutoReplenishClip) == 0x114);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_NpcAimingSpread) == 0x118);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_vecScatterOffsets) == 0x120);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flPelletScatterFactor) == 0x138);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flPelletScatterSpreadFactor) == 0x13c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bApplySpreadToFirstPellet) == 0x140);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_vecOriginOffsets) == 0x148);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flVerticalPunch) == 0x160);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flHorizontalPunch) == 0x164);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_HorizontalRecoil) == 0x168);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_VerticallRecoil) == 0x17c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flRecoilSpeed) == 0x190);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flRecoilRecoveryDelayFactor) == 0x194);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flRecoilRecoverySpeed) == 0x198);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flRecoilShotIndexRecoveryTimeFactor) == 0x19c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_nRecoilSeed) == 0x1a0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_szBulletTravelTracerParticle) == 0x1a8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_szSelfBulletTravelTracerParticle) == 0x288);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_szBulletLinkParticle) == 0x368);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_bUseDesatForFriendlyNonHeroTracer) == 0x448);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_eAttachmentSourceType) == 0x44c);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strCustomAttachmentSource) == 0x450);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_szMuzzleFlashEffectName) == 0x458);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strWeaponImpactEffect) == 0x538);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_mapImpactEffects) == 0x618);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strShootSound) == 0x640);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strFirstShotSound) == 0x650);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strShotReleaseSound) == 0x660);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strBulletLoopingSound) == 0x670);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strBulletWhizSound) == 0x680);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strBulletImpactSound) == 0x690);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flBulletWhizDistance) == 0x6a0);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strReloadSound) == 0x6a8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strReloadEndSound) == 0x6b8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strLocalPlayerBulletImpactSound) == 0x6c8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strLocalPlayerBulletImpactHeavySound) == 0x6d8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strZoomInSound) == 0x6e8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strZoomOutSound) == 0x6f8);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strSpinUpSound) == 0x708);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strSpinDownSound) == 0x718);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_strSpinUpLoopSound) == 0x728);
        static_assert(offsetof(source2sdk::client::CCitadelWeaponInfo, m_flMaxLagCompensation) == 0x754);
        
        static_assert(sizeof(source2sdk::client::CCitadelWeaponInfo) == 0x758);
    };
};
