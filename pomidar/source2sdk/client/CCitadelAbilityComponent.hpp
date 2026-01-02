#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityResource_t.hpp"
#include "source2sdk/client/ConsumedComponentState_t.hpp"
#include "source2sdk/entity2/CEntityComponent.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1c8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<C_CitadelBaseAbility> m_vecAbilities"
        // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationSlots"
        // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationAbilityIDs"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hSelectedAbility"
        // static metadata: MNetworkVarNames "EHANDLE m_hPreviouslySelectedAbility"
        // static metadata: MNetworkVarNames "bool m_bPreviousAbilityQueued"
        // static metadata: MNetworkVarNames "float m_flTimeScale"
        // static metadata: MNetworkVarNames "float m_flParticleTimeScale"
        // static metadata: MNetworkVarNames "bool m_bInInterruptState"
        // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceStamina"
        // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceAbility"
        // static metadata: MNetworkVarNames "ConsumedComponentState_t m_vecConsumedComponents"
        #pragma pack(push, 1)
        class CCitadelAbilityComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0x60]; // 0x8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_CitadelBaseAbility>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0x68            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_arPendingAsyncAbilityReservationSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_arPendingAsyncAbilityReservationSlots;
            char m_arPendingAsyncAbilityReservationSlots[0x18]; // 0x80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "Abilities"
            // metadata: MNetworkPriority "32"
            // m_arPendingAsyncAbilityReservationAbilityIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_arPendingAsyncAbilityReservationAbilityIDs;
            char m_arPendingAsyncAbilityReservationAbilityIDs[0x18]; // 0x98            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
            // m_hSelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hSelectedAbility;
            char m_hSelectedAbility[0x4]; // 0xb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_hPreviouslySelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviouslySelectedAbility;
            char m_hPreviouslySelectedAbility[0x4]; // 0xb4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bPreviousAbilityQueued; // 0xb8            
            uint8_t _pad00b9[0x3]; // 0xb9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbiCompTimeScaleChanged"
            float m_flTimeScale; // 0xbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
            float m_flParticleTimeScale; // 0xc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            bool m_bInInterruptState; // 0xc4            
            uint8_t _pad00c5[0x3]; // 0xc5
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::AbilityResource_t m_ResourceStamina; // 0xc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::client::AbilityResource_t m_ResourceAbility; // 0xe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecConsumedComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ConsumedComponentState_t> m_vecConsumedComponents;
            char m_vecConsumedComponents[0x68]; // 0x108            
            uint8_t _pad0170[0x48]; // 0x170
            std::uint32_t m_nExecuteAbilityMask; // 0x1b8            
            uint8_t _pad01bc[0x4]; // 0x1bc
            bool m_bSelectedEffectsStarted; // 0x1c0            
            uint8_t _pad01c1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelAbilityComponent) == 0x1c8);
    };
};
