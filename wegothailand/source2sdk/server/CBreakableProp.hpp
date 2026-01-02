#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class CBreakableProp : public source2sdk::server::CBaseProp
        {
        public:
            uint8_t _pad0af0[0x8]; // 0xaf0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0xaf8            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xb38            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xb60            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x28]; // 0xb88            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xbb0            
            float m_impactEnergyScale; // 0xbd8            
            std::int32_t m_iMinHealthDmg; // 0xbdc            
            QAngle m_preferredCarryAngles; // 0xbe0            
            float m_flPressureDelay; // 0xbec            
            float m_flDefBurstScale; // 0xbf0            
            Vector m_vDefBurstOffset; // 0xbf4            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xc00            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xc04            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xc08            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xc0c            
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xc10            
            CUtlString m_strBreakableContentsParticleOverride; // 0xc18            
            bool m_bHasBreakPiecesOrCommands; // 0xc20            
            uint8_t _pad0c21[0x3]; // 0xc21
            float m_explodeDamage; // 0xc24            
            float m_explodeRadius; // 0xc28            
            uint8_t _pad0c2c[0x4]; // 0xc2c
            float m_explosionDelay; // 0xc30            
            uint8_t _pad0c34[0x4]; // 0xc34
            CUtlSymbolLarge m_explosionBuildupSound; // 0xc38            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xc40            
            CUtlSymbolLarge m_explosionCustomSound; // 0xc48            
            CUtlSymbolLarge m_explosionModifier; // 0xc50            
            source2sdk::server::AI_VolumetricEventHandle_t m_explosionDangerSound; // 0xc58            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xc60            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xc64            
            float m_flDefaultFadeScale; // 0xc68            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xc6c            
            CUtlSymbolLarge m_iszPuntSound; // 0xc70            
            bool m_bUsePuntSound; // 0xc78            
            bool m_bOriginalBlockLOS; // 0xc79            
            uint8_t _pad0c7a[0x6];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetNavIgnore; // 0x0
            // void InputEnablePuntSound; // 0x0
            // void InputDisablePuntSound; // 0x0
            // void CBreakablePropBreakThink; // 0x0
            // void CBreakablePropRampToDefaultFadeScale; // 0x0
            // uint32_t m_nExplosionType; // 0xc2c
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakableProp) == 0xc80);
    };
};
