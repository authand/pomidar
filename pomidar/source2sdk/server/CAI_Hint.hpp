#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CServerOnlyEntity.hpp"
#include "source2sdk/server/HintNodeData.hpp"
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
        // Size: 0x5e8
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Hint : public source2sdk::server::CServerOnlyEntity
        {
        public:
            source2sdk::server::HintNodeData m_NodeData; // 0x4f0            
            // m_hHintOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHintOwner;
            char m_hHintOwner[0x4]; // 0x530            
            source2sdk::entity2::GameTime_t m_flNextUseTime; // 0x534            
            // m_OnNPCStartedUsing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnNPCStartedUsing;
            char m_OnNPCStartedUsing[0x28]; // 0x538            
            // m_OnNPCStoppedUsing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnNPCStoppedUsing;
            char m_OnNPCStoppedUsing[0x28]; // 0x560            
            float m_nodeFOV; // 0x588            
            bool m_bNodeFOVCheckBehind; // 0x58c            
            uint8_t _pad058d[0x3]; // 0x58d
            Vector m_vecForward; // 0x590            
            uint8_t _pad059c[0x4]; // 0x59c
            CUtlSymbolLarge m_iszAnimgraphEntryAction; // 0x5a0            
            CUtlSymbolLarge m_iszAnimgraphExitAction; // 0x5a8            
            CUtlSymbolLarge m_iszAnimgraphEntryCmd; // 0x5b0            
            CUtlSymbolLarge m_iszAnimgraphExitCmd; // 0x5b8            
            CUtlSymbolLarge m_iszNavlinkTargetName; // 0x5c0            
            bool m_bRemoveOnUnreserved; // 0x5c8            
            uint8_t _pad05c9[0x3]; // 0x5c9
            // m_hAssociatedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssociatedEntity;
            char m_hAssociatedEntity[0x4]; // 0x5cc            
            float m_flInteractionDistance; // 0x5d0            
            float m_flCooldown; // 0x5d4            
            CUtlSymbolLarge m_iszNPCFollowsEntity; // 0x5d8            
            float m_flNPCSnapToHintDistance; // 0x5e0            
            uint8_t _pad05e4[0x4];
            
            // Datamap fields:
            // void CAI_HintEnableThink; // 0x0
            // void InputEnableHint; // 0x0
            // void InputDisableHint; // 0x0
            // void InputToggleHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Hint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Hint) == 0x5e8);
    };
};
