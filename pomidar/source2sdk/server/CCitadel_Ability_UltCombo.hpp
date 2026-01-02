#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0xc88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iBonusHealth"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
        #pragma pack(push, 1)
        class CCitadel_Ability_UltCombo : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hTargetComboModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hTargetComboModifier;
            char m_hTargetComboModifier[0x18]; // 0xba0            
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xbb8            
            std::int32_t m_nAttackNum; // 0xbbc            
            uint8_t _pad0bc0[0xc0]; // 0xbc0
            // metadata: MNetworkEnable
            std::int32_t m_iBonusHealth; // 0xc80            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xc84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_UltCombo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_UltCombo) == 0xc88);
    };
};
