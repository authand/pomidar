#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        struct C_BasePlayerPawn;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xe40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class C_BreakableProp : public source2sdk::client::CBaseProp
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0xcd0            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xd10            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xd38            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0xd60            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xd88            
            float m_impactEnergyScale; // 0xdb0            
            std::int32_t m_iMinHealthDmg; // 0xdb4            
            float m_flPressureDelay; // 0xdb8            
            float m_flDefBurstScale; // 0xdbc            
            Vector m_vDefBurstOffset; // 0xdc0            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xdcc            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xdd0            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xdd4            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xdd8            
            uint8_t _pad0ddc[0x4]; // 0xddc
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xde0            
            CUtlString m_strBreakableContentsParticleOverride; // 0xde8            
            bool m_bHasBreakPiecesOrCommands; // 0xdf0            
            uint8_t _pad0df1[0x3]; // 0xdf1
            float m_explodeDamage; // 0xdf4            
            float m_explodeRadius; // 0xdf8            
            uint8_t _pad0dfc[0x4]; // 0xdfc
            float m_explosionDelay; // 0xe00            
            uint8_t _pad0e04[0x4]; // 0xe04
            CUtlSymbolLarge m_explosionBuildupSound; // 0xe08            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xe10            
            CUtlSymbolLarge m_explosionCustomSound; // 0xe18            
            CUtlSymbolLarge m_explosionModifier; // 0xe20            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xe28            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xe2c            
            float m_flDefaultFadeScale; // 0xe30            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xe34            
            uint8_t _pad0e38[0x8];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // void C_BreakablePropBreakThink; // 0x0
            // void C_BreakablePropRampToDefaultFadeScale; // 0x0
            // uint32_t m_nExplosionType; // 0xdfc
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0xe40);
    };
};
