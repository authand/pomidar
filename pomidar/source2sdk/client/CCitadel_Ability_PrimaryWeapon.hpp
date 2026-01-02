#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EFireMode_t.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf98
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
        class CCitadel_Ability_PrimaryWeapon : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastReloadStartTime; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextPrimaryAttack; // 0xd94            
            source2sdk::entity2::GameTime_t m_flDelayedShotCreateTime; // 0xd98            
            uint8_t _pad0d9c[0x104]; // 0xd9c
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iClip; // 0xea0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iBonusClip; // 0xea4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // metadata: MNetworkPriority "32"
            std::int32_t m_nNumContinuousShots; // 0xea8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flContinuousShotStartTime; // 0xeac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpreadPenalty; // 0xeb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomTime; // 0xeb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flZoomOutTime; // 0xeb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int8_t m_iSpreadIndex; // 0xebc            
            uint8_t _pad0ebd[0x1]; // 0xebd
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int16_t m_nShotRecoilIndex; // 0xebe            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xec0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsZoomed; // 0xec4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint8_t m_nBurstShotsRemaining; // 0xec5            
            uint8_t _pad0ec6[0x2]; // 0xec6
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::uint32_t m_nShotNumber; // 0xec8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInReload; // 0xecc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSingleShotReloadFirstBullet; // 0xecd            
            uint8_t _pad0ece[0x2]; // 0xece
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTime_t m_reloadQueuedStartTime; // 0xed0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flReloadAvailableTime; // 0xed4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanActiveReload; // 0xed8            
            uint8_t _pad0ed9[0x3]; // 0xed9
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xedc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xee0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xee4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flAttackDelayPauseTotalTime; // 0xee8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xeec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xef0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInputPressedWhileSelected; // 0xef4            
            uint8_t _pad0ef5[0x3]; // 0xef5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::EFireMode_t m_eActiveFireMode; // 0xef8            
            QAngle m_angRecoilAngles; // 0xefc            
            QAngle m_angRecoilToAdd; // 0xf08            
            QAngle m_angRecoilRecovery; // 0xf14            
            source2sdk::entity2::GameTime_t m_flRecoilStartTime; // 0xf20            
            float m_flRecoilRecoverySpeed; // 0xf24            
            float m_flAddApproachSpeed; // 0xf28            
            float m_currentSpread; // 0xf2c            
            float m_currentMaxSpread; // 0xf30            
            float m_currentFireSpread; // 0xf34            
            float m_flCurrentSpinRate; // 0xf38            
            uint8_t _pad0f3c[0x4]; // 0xf3c
            float m_fFireDuration; // 0xf40            
            uint8_t _pad0f44[0x1]; // 0xf44
            bool m_bFireOnEmpty; // 0xf45            
            bool m_bHasReleasedForSemiAuto; // 0xf46            
            uint8_t _pad0f47[0x1]; // 0xf47
            source2sdk::entity2::GameTime_t m_flNextDisarmSound; // 0xf48            
            std::int32_t m_nPrimaryMuzzleIndex; // 0xf4c            
            source2sdk::entity2::GameTime_t m_flPrimaryMuzzleResetTime; // 0xf50            
            std::int32_t m_nSecondaryMuzzleIndex; // 0xf54            
            source2sdk::entity2::GameTime_t m_flSecondaryMuzzleResetTime; // 0xf58            
            std::int32_t m_nRandomStreak; // 0xf5c            
            std::int32_t m_nLastUsedMuzzleIndex; // 0xf60            
            uint8_t _pad0f64[0x34];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeapon) == 0xf98);
    };
};
