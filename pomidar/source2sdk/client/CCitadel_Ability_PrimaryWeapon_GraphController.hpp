#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseAbilityGraphController.hpp"

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
        // Size: 0x4d0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon_GraphController : public source2sdk::client::CCitadelBaseAbilityGraphController
        {
        public:
            // m_bAiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bAiming;
            char m_bAiming[0x18]; // 0x368            
            // m_flReloadSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<float> m_flReloadSpeed;
            char m_flReloadSpeed[0x18]; // 0x380            
            // m_bReloadingSingleRoundStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bReloadingSingleRoundStart;
            char m_bReloadingSingleRoundStart[0x18]; // 0x398            
            // m_bReloadingSingleRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bReloadingSingleRound;
            char m_bReloadingSingleRound[0x18]; // 0x3b0            
            // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bReloading;
            char m_bReloading[0x18]; // 0x3c8            
            // m_bShootAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bShootAlt;
            char m_bShootAlt[0x18]; // 0x3e0            
            // m_bShoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bShoot;
            char m_bShoot[0x18]; // 0x3f8            
            // m_Shoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_Shoot;
            char m_Shoot[0x20]; // 0x410            
            // m_Muzzle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_Muzzle;
            char m_Muzzle[0x20]; // 0x430            
            // m_ReloadState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<CGlobalSymbol> m_ReloadState;
            char m_ReloadState[0x20]; // 0x450            
            // m_ReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_ReloadFraction;
            char m_ReloadFraction[0x18]; // 0x470            
            // m_ReloadSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_ReloadSpeed;
            char m_ReloadSpeed[0x18]; // 0x488            
            // m_AmmoFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph2ParamRef<float> m_AmmoFraction;
            char m_AmmoFraction[0x18]; // 0x4a0            
            std::int32_t m_nShootPriority; // 0x4b8            
            std::int32_t m_nReloadPriority; // 0x4bc            
            float m_flLatchedReloadSpeed; // 0x4c0            
            uint8_t _pad04c4[0x4]; // 0x4c4
            CGlobalSymbol m_symLastMuzzle; // 0x4c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeapon_GraphController) == 0x4d0);
    };
};
