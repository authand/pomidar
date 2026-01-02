#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECatStatueState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0xd90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ECatStatueState_t m_eState"
        // static metadata: MNetworkVarNames "EHANDLE m_hStatue"
        #pragma pack(push, 1)
        class CCitadel_Ability_ProximityRitual : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::ECatStatueState_t m_eState; // 0xba0            
            uint8_t _pad0ba1[0x3]; // 0xba1
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hStatue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hStatue;
            char m_hStatue[0x4]; // 0xba4            
            source2sdk::entity2::GameTime_t m_tCatRecallTime; // 0xba8            
            std::int32_t m_iCatRecallHealth; // 0xbac            
            Vector m_vLaunchPosition; // 0xbb0            
            QAngle m_qLaunchAngle; // 0xbbc            
            uint8_t _pad0bc8[0x1c8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ProximityRitual) == 0xd90);
    };
};
