#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFireMode_t.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd78
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flLastReloadStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
        // static metadata: MNetworkVarNames "int32 m_iClip"
        // static metadata: MNetworkVarNames "int32 m_iBonusClip"
        // static metadata: MNetworkVarNames "int32 m_nNumContinuousShots"
        // static metadata: MNetworkVarNames "GameTime_t m_flContinuousShotStartTime"
        // static metadata: MNetworkVarNames "float m_flSpreadPenalty"
        // static metadata: MNetworkVarNames "GameTime_t m_flZoomTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flZoomOutTime"
        // static metadata: MNetworkVarNames "int8 m_iSpreadIndex"
        // static metadata: MNetworkVarNames "int16 m_nShotRecoilIndex"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
        // static metadata: MNetworkVarNames "bool m_bIsZoomed"
        // static metadata: MNetworkVarNames "uint8 m_nBurstShotsRemaining"
        // static metadata: MNetworkVarNames "uint32 m_nShotNumber"
        // static metadata: MNetworkVarNames "bool m_bInReload"
        // static metadata: MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
        // static metadata: MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
        // static metadata: MNetworkVarNames "bool m_bCanActiveReload"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastAttackTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
        // static metadata: MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
        // static metadata: MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
        // static metadata: MNetworkVarNames "bool m_bInputPressedWhileSelected"
        // static metadata: MNetworkVarNames "EFireMode_t m_eActiveFireMode"
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastReloadStartTime; // 0xba0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextPrimaryAttack; // 0xba4            
            source2sdk::entity2::GameTime_t m_flDelayedShotCreateTime; // 0xba8            
            uint8_t _pad0bac[0x104]; // 0xbac
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iClip; // 0xcb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iBonusClip; // 0xcb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkPriority "32"
            std::int32_t m_nNumContinuousShots; // 0xcb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flContinuousShotStartTime; // 0xcbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpreadPenalty; // 0xcc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomTime; // 0xcc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomOutTime; // 0xcc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int8_t m_iSpreadIndex; // 0xccc            
            uint8_t _pad0ccd[0x1]; // 0xccd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int16_t m_nShotRecoilIndex; // 0xcce            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xcd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsZoomed; // 0xcd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nBurstShotsRemaining; // 0xcd5            
            uint8_t _pad0cd6[0x2]; // 0xcd6
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint32_t m_nShotNumber; // 0xcd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInReload; // 0xcdc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSingleShotReloadFirstBullet; // 0xcdd            
            uint8_t _pad0cde[0x2]; // 0xcde
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_reloadQueuedStartTime; // 0xce0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flReloadAvailableTime; // 0xce4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanActiveReload; // 0xce8            
            uint8_t _pad0ce9[0x3]; // 0xce9
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xcec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xcf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xcf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flAttackDelayPauseTotalTime; // 0xcf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xcfc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xd00            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInputPressedWhileSelected; // 0xd04            
            uint8_t _pad0d05[0x3]; // 0xd05
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFireMode_t m_eActiveFireMode; // 0xd08            
            QAngle m_angRecoilAngles; // 0xd0c            
            QAngle m_angRecoilToAdd; // 0xd18            
            QAngle m_angRecoilRecovery; // 0xd24            
            source2sdk::entity2::GameTime_t m_flRecoilStartTime; // 0xd30            
            float m_flRecoilRecoverySpeed; // 0xd34            
            float m_flAddApproachSpeed; // 0xd38            
            float m_currentSpread; // 0xd3c            
            float m_currentMaxSpread; // 0xd40            
            float m_currentFireSpread; // 0xd44            
            float m_flCurrentSpinRate; // 0xd48            
            uint8_t _pad0d4c[0x4]; // 0xd4c
            float m_fFireDuration; // 0xd50            
            uint8_t _pad0d54[0x1]; // 0xd54
            bool m_bFireOnEmpty; // 0xd55            
            bool m_bHasReleasedForSemiAuto; // 0xd56            
            uint8_t _pad0d57[0x1]; // 0xd57
            source2sdk::entity2::GameTime_t m_flNextDisarmSound; // 0xd58            
            std::int32_t m_nPrimaryMuzzleIndex; // 0xd5c            
            source2sdk::entity2::GameTime_t m_flPrimaryMuzzleResetTime; // 0xd60            
            std::int32_t m_nSecondaryMuzzleIndex; // 0xd64            
            source2sdk::entity2::GameTime_t m_flSecondaryMuzzleResetTime; // 0xd68            
            std::int32_t m_nRandomStreak; // 0xd6c            
            std::int32_t m_nLastUsedMuzzleIndex; // 0xd70            
            std::int32_t m_nClipSizeBeforeSwap; // 0xd74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PrimaryWeapon) == 0xd78);
    };
};
