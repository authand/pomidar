#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xe60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iBonusHealth"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
        #pragma pack(push, 1)
        class CCitadel_Ability_UltCombo : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xd90            
            std::int32_t m_nAttackNum; // 0xd94            
            uint8_t _pad0d98[0xc0]; // 0xd98
            // metadata: MNetworkEnable
            std::int32_t m_iBonusHealth; // 0xe58            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xe5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_UltCombo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_UltCombo) == 0xe60);
    };
};
