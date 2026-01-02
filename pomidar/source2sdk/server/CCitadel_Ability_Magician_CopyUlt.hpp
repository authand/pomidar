#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ModelChange_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0xdb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasUsedCopiedUlt"
        // static metadata: MNetworkVarNames "bool m_bHasCopiedUlt"
        // static metadata: MNetworkVarNames "bool m_bIsModelSwapped"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pCopyUltimateAbility"
        // static metadata: MNetworkVarNames "HeroID_t m_nCopiedHeroID"
        #pragma pack(push, 1)
        class CCitadel_Ability_Magician_CopyUlt : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0ba0[0x100]; // 0xba0
            // metadata: MNetworkEnable
            bool m_bHasUsedCopiedUlt; // 0xca0            
            // metadata: MNetworkEnable
            bool m_bHasCopiedUlt; // 0xca1            
            // metadata: MNetworkEnable
            bool m_bIsModelSwapped; // 0xca2            
            uint8_t _pad0ca3[0x1]; // 0xca3
            // metadata: MNetworkEnable
            // m_pCopyUltimateAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelBaseAbility> m_pCopyUltimateAbility;
            char m_pCopyUltimateAbility[0x4]; // 0xca4            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nCopiedHeroID; // 0xca8            
            uint8_t _pad0cac[0x4]; // 0xcac
            source2sdk::client::ModelChange_t m_ModelChange; // 0xcb0            
            uint8_t _pad0d98[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Magician_CopyUlt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Magician_CopyUlt) == 0xdb0);
    };
};
