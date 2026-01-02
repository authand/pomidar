#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"
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
        // Size: 0x1a30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hOwner"
        #pragma pack(push, 1)
        class CNPC_HeroCloneTrooper : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1a08[0x4]; // 0x1a08
            // metadata: MNetworkEnable
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x1a0c            
            uint8_t _pad1a10[0x20];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_HeroCloneTrooper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_HeroCloneTrooper) == 0x1a30);
    };
};
