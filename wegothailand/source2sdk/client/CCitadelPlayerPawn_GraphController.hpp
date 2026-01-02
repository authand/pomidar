#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"

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
        // Size: 0x5f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPlayerPawn_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_pszSprintState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<char*> m_pszSprintState;
            char m_pszSprintState[0x20]; // 0x368            
            // m_pszFullBodySequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<char*> m_pszFullBodySequence;
            char m_pszFullBodySequence[0x20]; // 0x388            
            // m_pszFlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<char*> m_pszFlinchType;
            char m_pszFlinchType[0x20]; // 0x3a8            
            // m_bShootLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bShootLean;
            char m_bShootLean[0x18]; // 0x3c8            
            // m_flReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<float> m_flReloadFraction;
            char m_flReloadFraction[0x18]; // 0x3e0            
            // m_bMovementInputActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bMovementInputActive;
            char m_bMovementInputActive[0x18]; // 0x3f8            
            // m_bLowHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bLowHealth;
            char m_bLowHealth[0x18]; // 0x410            
            // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<float> m_flTimeScale;
            char m_flTimeScale[0x18]; // 0x428            
            // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bCrouching;
            char m_bCrouching[0x18]; // 0x440            
            // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bInAir;
            char m_bInAir[0x18]; // 0x458            
            // m_bShopOpen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bShopOpen;
            char m_bShopOpen[0x18]; // 0x470            
            // m_bRespawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamRef<bool> m_bRespawn;
            char m_bRespawn[0x18]; // 0x488            
            CAnimGraphTagRef m_sAnimClippedMovement; // 0x4a0            
            CAnimGraphTagRef m_sDisableGravity; // 0x4b8            
            CAnimGraphTagRef m_sDirectAirControl; // 0x4d0            
            // m_pszMaxSpeedState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<char*> m_pszMaxSpeedState;
            char m_pszMaxSpeedState[0x20]; // 0x4e8            
            // m_pszDeathSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<char*> m_pszDeathSequence;
            char m_pszDeathSequence[0x20]; // 0x508            
            // m_pszWallAttach has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<char*> m_pszWallAttach;
            char m_pszWallAttach[0x20]; // 0x528            
            // m_bHardLanding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bHardLanding;
            char m_bHardLanding[0x18]; // 0x548            
            // m_flUltCooldownProgress has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<float> m_flUltCooldownProgress;
            char m_flUltCooldownProgress[0x18]; // 0x560            
            // m_bSpawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bSpawn;
            char m_bSpawn[0x18]; // 0x578            
            // m_flAmmoFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<float> m_flAmmoFraction;
            char m_flAmmoFraction[0x18]; // 0x590            
            // m_flLookPitchRelativeToEyes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<float> m_flLookPitchRelativeToEyes;
            char m_flLookPitchRelativeToEyes[0x18]; // 0x5a8            
            // m_flSlideSurfacePitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<float> m_flSlideSurfacePitch;
            char m_flSlideSurfacePitch[0x18]; // 0x5c0            
            // m_flSlideSurfaceRoll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<float> m_flSlideSurfaceRoll;
            char m_flSlideSurfaceRoll[0x18]; // 0x5d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayerPawn_GraphController) == 0x5f0);
    };
};
