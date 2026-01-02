#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
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
        // Size: 0x16f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flForwardSpeed"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
        #pragma pack(push, 1)
        class C_NPC_NanoRollermine : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            uint8_t _pad16c8[0x28]; // 0x16c8
            // metadata: MNetworkEnable
            float m_flForwardSpeed; // 0x16f0            
            // metadata: MNetworkEnable
            // m_hOwnerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerPawn;
            char m_hOwnerPawn[0x4]; // 0x16f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_NanoRollermine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_NanoRollermine) == 0x16f8);
    };
};
