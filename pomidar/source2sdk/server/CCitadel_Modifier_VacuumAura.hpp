#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_VacuumAura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad0100[0x1c0]; // 0x100
            // m_hEnemyHeroInVacuum has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemyHeroInVacuum;
            char m_hEnemyHeroInVacuum[0x18]; // 0x2c0            
            std::int32_t m_nNumPlayersKilled; // 0x2d8            
            source2sdk::entity2::GameTime_t m_tLastDamageTime; // 0x2dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_VacuumAura) == 0x2e0);
    };
};
