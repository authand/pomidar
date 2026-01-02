#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ModifierPropRuntimeHandle_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
        // Standard-layout class: true
        // Size: 0x268
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAllowModifiersOnDeadEntities"
        // static metadata: MNetworkVarNames "uint32 m_nDisabledGroups"
        // static metadata: MNetworkVarNames "uint32 m_bvEnabledStateMask"
        // static metadata: MNetworkVarNames "uint32 m_bvDisabledStateMask"
        // static metadata: MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
        #pragma pack(push, 1)
        class CModifierProperty
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x30            
            uint8_t _pad0034[0x182]; // 0x34
            bool m_bModifierStatesDirty; // 0x1b6            
            bool m_bPredictedOwner; // 0x1b7            
            // metadata: MNetworkEnable
            bool m_bAllowModifiersOnDeadEntities; // 0x1b8            
            std::int8_t m_iLockRefCount; // 0x1b9            
            source2sdk::client::ModifierPropRuntimeHandle_t m_hHandle; // 0x1ba            
            std::uint32_t m_nBroadcastEventListenerMask; // 0x1bc            
            source2sdk::client::ParticleIndex_t m_nCachedHighestParticleIndex; // 0x1c0            
            uint8_t _pad01c4[0xc]; // 0x1c4
            // metadata: MNetworkEnable
            std::uint32_t m_nDisabledGroups; // 0x1d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledStateMask[8]; // 0x1d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvDisabledStateMask[8]; // 0x1f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledPredictedStateMask[8]; // 0x214            
            uint8_t _pad0234[0x34];
            
            // Datamap fields:
            // void m_pNotifyOwnerEvents; // 0x1c8
            // void m_vecModifiers; // 0x38
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModifierProperty, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_hOwner) == 0x30);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bModifierStatesDirty) == 0x1b6);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bPredictedOwner) == 0x1b7);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bAllowModifiersOnDeadEntities) == 0x1b8);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_iLockRefCount) == 0x1b9);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_hHandle) == 0x1ba);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_nBroadcastEventListenerMask) == 0x1bc);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_nCachedHighestParticleIndex) == 0x1c0);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_nDisabledGroups) == 0x1d0);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bvEnabledStateMask) == 0x1d4);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bvDisabledStateMask) == 0x1f4);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bvEnabledPredictedStateMask) == 0x214);
        
        static_assert(sizeof(source2sdk::client::CModifierProperty) == 0x268);
    };
};
