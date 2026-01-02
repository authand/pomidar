#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CNPC_TrooperNeutralVData.hpp"

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
        // Size: 0x17f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_NeutralSinnerSacrificeVData : public source2sdk::server::CNPC_TrooperNeutralVData
        {
        public:
            // metadata: MPropertyStartGroup "Retaliation Attack"
            // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
            float m_flRetaliateDamage; // 0x1550            
            // metadata: MPropertyStartGroup "NPC Vault Data"
            float m_flVaultMiniGameTime; // 0x1554            
            float m_flVaultMiniGameHitWindow; // 0x1558            
            float m_flVaultMiniGameWheelScrollTime; // 0x155c            
            std::int32_t m_iVaultSuccessLightBuffDropCount; // 0x1560            
            std::int32_t m_iVaultSuccessHeavyBuffDropCount; // 0x1564            
            float m_flVaultLightScrollTime; // 0x1568            
            float m_flVaultWheelScrollTime; // 0x156c            
            float m_flVaultSuccessLightsScroll; // 0x1570            
            float m_flVaultSuccessWheelScroll; // 0x1574            
            float m_flVaultSuccessDestroyTime; // 0x1578            
            uint8_t _pad157c[0x4]; // 0x157c
            // m_VaultSuccessParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_VaultSuccessParticle;
            char m_VaultSuccessParticle[0xe0]; // 0x1580            
            // metadata: MPropertyStartGroup "NPC Vault Sounds"
            CSoundEventName m_VaultIdleLoopSound; // 0x1660            
            CSoundEventName m_VaultStartActiveSound; // 0x1670            
            CSoundEventName m_VaultActiveLoopSound; // 0x1680            
            CSoundEventName m_VaultStartCriticalSound; // 0x1690            
            CSoundEventName m_VaultCriticalLoopSound; // 0x16a0            
            CSoundEventName m_VaultHitSuccessSoundLight; // 0x16b0            
            CSoundEventName m_VaultHitSuccessSoundHeavy; // 0x16c0            
            CSoundEventName m_VaultHitFailSound; // 0x16d0            
            CSoundEventName m_VaultHit01; // 0x16e0            
            CSoundEventName m_VaultHit02; // 0x16f0            
            CSoundEventName m_VaultHit03; // 0x1700            
            CSoundEventName m_VaultHit04; // 0x1710            
            CSoundEventName m_VaultHit05; // 0x1720            
            CSoundEventName m_VaultHit06; // 0x1730            
            CSoundEventName m_VaultHit07; // 0x1740            
            CSoundEventName m_VaultLight01; // 0x1750            
            CSoundEventName m_VaultLight02; // 0x1760            
            CSoundEventName m_VaultLight03; // 0x1770            
            CSoundEventName m_VaultLight04; // 0x1780            
            CSoundEventName m_VaultLight05; // 0x1790            
            CSoundEventName m_VaultLight06; // 0x17a0            
            CSoundEventName m_VaultLight07; // 0x17b0            
            CSoundEventName m_VaultLight08; // 0x17c0            
            CSoundEventName m_VaultLightHitWindow; // 0x17d0            
            CSoundEventName m_VaultWheelSuccessDing; // 0x17e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_NeutralSinnerSacrificeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_NeutralSinnerSacrificeVData) == 0x17f0);
    };
};
