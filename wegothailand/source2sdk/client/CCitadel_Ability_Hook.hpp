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
        // Size: 0x1048
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hHookVictim"
        // static metadata: MNetworkVarNames "Vector m_vecHookTargetStartPos"
        // static metadata: MNetworkVarNames "GameTime_t m_flCancelHookTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBeginReelHookTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBulletShouldExpireTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Hook : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "HookVictimChanged"
            // m_hHookVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hHookVictim;
            char m_hHookVictim[0x4]; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecHookTargetStartPos; // 0xd94            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCancelHookTime; // 0xda0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBeginReelHookTime; // 0xda4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flBulletShouldExpireTime; // 0xda8            
            uint8_t _pad0dac[0x4]; // 0xdac
            float m_flMaxHookTravelTime; // 0xdb0            
            uint8_t _pad0db4[0x294];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Hook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Hook) == 0x1048);
    };
};
