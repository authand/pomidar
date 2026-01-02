#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"

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
        // Size: 0x10a8
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
        // static metadata: MNetworkVarNames "bool m_bDestroyed"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bFinal"
        #pragma pack(push, 1)
        class CCitadel_Destroyable_Building : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xc18            
            source2sdk::entity2::CEntityIOOutput m_OnDestroyed; // 0xc30            
            source2sdk::entity2::CEntityIOOutput m_OnRevitilized; // 0xc58            
            source2sdk::entity2::CEntityIOOutput m_OnDamageTaken; // 0xc80            
            source2sdk::entity2::CEntityIOOutput m_OnLifeChanged; // 0xca8            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeActive; // 0xcd0            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeInvulnerable; // 0xcf8            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeVulnerable; // 0xd20            
            source2sdk::entity2::CEntityIOOutput m_OnUnderAttack; // 0xd48            
            source2sdk::entity2::CEntityIOOutput m_OnAttackSubsided; // 0xd70            
            std::int32_t m_nBuildingHealth; // 0xd98            
            uint8_t _pad0d9c[0x4]; // 0xd9c
            std::int32_t m_iLane; // 0xda0            
            source2sdk::entity2::GameTime_t m_flDestroyedTime; // 0xda4            
            source2sdk::entity2::GameTime_t m_flLastDamagedTime; // 0xda8            
            QAngle m_angOriginal; // 0xdac            
            uint8_t _pad0db8[0x20]; // 0xdb8
            CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xdd8            
            uint8_t _pad0de0[0x18]; // 0xde0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xdf8            
            // metadata: MNetworkEnable
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0x1038            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "DestroyedChanged"
            bool m_bDestroyed; // 0x10a0            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x10a1            
            // metadata: MNetworkEnable
            bool m_bFinal; // 0x10a2            
            uint8_t _pad10a3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Destroyable_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Destroyable_Building) == 0x10a8);
    };
};
