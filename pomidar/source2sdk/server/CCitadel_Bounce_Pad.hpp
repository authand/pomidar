#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBaseAbility;
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
        // Size: 0xc40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flUpFactor"
        // static metadata: MNetworkVarNames "float m_flBounceVelocity"
        // static metadata: MNetworkVarNames "GameTime_t m_tDeactivationTime"
        #pragma pack(push, 1)
        class CCitadel_Bounce_Pad : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_hAbility;
            char m_hAbility[0x4]; // 0xc18            
            // metadata: MNetworkEnable
            float m_flUpFactor; // 0xc1c            
            // metadata: MNetworkEnable
            float m_flBounceVelocity; // 0xc20            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDeactivationTime; // 0xc24            
            bool m_bDeactivated; // 0xc28            
            uint8_t _pad0c29[0x3]; // 0xc29
            float m_flBarrelBounceVelocity; // 0xc2c            
            float m_flBarrelUpFactor; // 0xc30            
            bool m_bSpeedOnLand; // 0xc34            
            bool m_bHasBouncedPlayerBefore; // 0xc35            
            uint8_t _pad0c36[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Bounce_Pad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Bounce_Pad) == 0xc40);
    };
};
