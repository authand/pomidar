#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CitadelPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"

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
        // Size: 0x1158
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            bool m_bSuppressIntroEffects; // 0xf30            
            bool m_bIsAlternateLoadout; // 0xf31            
            bool m_bSpawnBackgroundModels; // 0xf32            
            bool m_bDeferredPortrait; // 0xf33            
            bool m_bShowParticleAssetModifiers; // 0xf34            
            bool m_bIgnorePortraitInfo; // 0xf35            
            bool m_bFlyingCourier; // 0xf36            
            uint8_t _pad0f37[0x1]; // 0xf37
            std::int32_t m_nEffigyStatusEffect; // 0xf38            
            uint8_t _pad0f3c[0x4]; // 0xf3c
            CUtlSymbolLarge m_effigySequenceName; // 0xf40            
            CUtlSymbolLarge m_BodyGroup; // 0xf48            
            float m_flStartingAnimationCycle; // 0xf50            
            float m_flRareLoadoutAnimChance; // 0xf54            
            uint8_t _pad0f58[0x10]; // 0xf58
            source2sdk::client::CitadelPortraitEnvironmentType_t m_environment; // 0xf68            
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0xf6c            
            uint8_t _pad0f70[0x170]; // 0xf70
            CUtlSymbolLarge m_cameraName; // 0x10e0            
            uint8_t _pad10e8[0x30]; // 0x10e8
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x1118            
            source2sdk::client::ParticleIndex_t m_nAmbientParticle; // 0x111c            
            std::int32_t m_nCourierType; // 0x1120            
            source2sdk::client::HeroID_t m_heroID; // 0x1124            
            CUtlSymbolLarge m_strGraphBaseState; // 0x1128            
            CUtlSymbolLarge m_heroAnimGraphEnumName; // 0x1130            
            CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0x1138            
            CUtlSymbolLarge m_sceneName; // 0x1140            
            std::int32_t m_nThinksUntilPresent; // 0x1148            
            uint8_t _pad114c[0xc];
            
            // Datamap fields:
            // uint32_t heroid; // 0x7fffffff
            // bool skip_pet_spawn; // 0x7fffffff
            // int32_t model_index; // 0x7fffffff
            // bool StartDisabled; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x1158);
    };
};
