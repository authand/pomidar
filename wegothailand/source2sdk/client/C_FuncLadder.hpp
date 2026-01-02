#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_InfoLadderDismount;
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
        // Size: 0xa28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecLadderDir"
        // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
        // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
        // static metadata: MNetworkVarNames "float m_flAutoRideSpeed"
        // static metadata: MNetworkVarNames "bool m_bFakeLadder"
        #pragma pack(push, 1)
        class C_FuncLadder : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecLadderDir; // 0x9d0            
            uint8_t _pad09dc[0x4]; // 0x9dc
            // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_InfoLadderDismount>> m_Dismounts;
            char m_Dismounts[0x18]; // 0x9e0            
            Vector m_vecLocalTop; // 0x9f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecPlayerMountPositionTop; // 0xa04            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecPlayerMountPositionBottom; // 0xa10            
            // metadata: MNetworkEnable
            float m_flAutoRideSpeed; // 0xa1c            
            bool m_bDisabled; // 0xa20            
            // metadata: MNetworkEnable
            bool m_bFakeLadder; // 0xa21            
            bool m_bHasSlack; // 0xa22            
            uint8_t _pad0a23[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncLadder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncLadder) == 0xa28);
    };
};
