#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CBaseNPCMaker_ThreeStateDist_t.hpp"
#include "source2sdk/server/CBaseNPCMaker_VisibilityCriterion_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
    };
};
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
        struct CNPCSpawnDestination;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x620
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBaseNPCMaker : public source2sdk::server::CBaseEntity
        {
        public:
            std::int32_t m_nMaxNumNPCs; // 0x4f0            
            float m_flSpawnFrequency; // 0x4f4            
            float m_flRetryFrequency; // 0x4f8            
            std::int32_t m_nHullCheckMode; // 0x4fc            
            // m_OnSpawnNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnSpawnNPC;
            char m_OnSpawnNPC[0x28]; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnedNPCDied; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnAllSpawned; // 0x550            
            source2sdk::entity2::CEntityIOOutput m_OnAllSpawnedDead; // 0x578            
            source2sdk::entity2::CEntityIOOutput m_OnAllLiveChildrenDead; // 0x5a0            
            std::int32_t m_nLiveChildren; // 0x5c8            
            std::int32_t m_nMaxLiveChildren; // 0x5cc            
            std::int32_t m_nMinSpawnDistance; // 0x5d0            
            std::int32_t m_nSpawnThreshold; // 0x5d4            
            std::int32_t m_nBatchCount; // 0x5d8            
            float m_flRadius; // 0x5dc            
            bool m_bDisabled; // 0x5e0            
            bool m_bSpawning; // 0x5e1            
            bool m_bZeroPitchAndRoll; // 0x5e2            
            uint8_t _pad05e3[0x1]; // 0x5e3
            // m_hIgnoreEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIgnoreEntity;
            char m_hIgnoreEntity[0x4]; // 0x5e4            
            CUtlSymbolLarge m_iszIgnoreEnt; // 0x5e8            
            CUtlSymbolLarge m_iszDestinationGroup; // 0x5f0            
            // m_hSpawnEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CNPCSpawnDestination> m_hSpawnEntity;
            char m_hSpawnEntity[0x4]; // 0x5f8            
            // m_hSpawnedNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hSpawnedNPC;
            char m_hSpawnedNPC[0x4]; // 0x5fc            
            std::int32_t m_nCurrentBatchCount; // 0x600            
            std::int32_t m_nNumSpawnDestinations; // 0x604            
            std::int32_t m_nNumValidDestinations; // 0x608            
            source2sdk::server::CBaseNPCMaker_VisibilityCriterion_t m_CriterionVisibility; // 0x60c            
            source2sdk::server::CBaseNPCMaker_ThreeStateDist_t m_CriterionDistance; // 0x610            
            uint8_t _pad0614[0xc];
            
            // Datamap fields:
            // void InputSpawn; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // int32_t InputSetMaxChildren; // 0x0
            // int32_t InputAddMaxChildren; // 0x0
            // int32_t InputSetMaxLiveChildren; // 0x0
            // float InputSetSpawnFrequency; // 0x0
            // void InputSpawnInRadius; // 0x0
            // void InputSpawnInLine; // 0x0
            // int32_t InputSpawnMultiple; // 0x0
            // CUtlSymbolLarge InputChangeDestinationGroup; // 0x0
            // int32_t InputSetMinimumSpawnDistance; // 0x0
            // CUtlSymbolLarge InputSetSpawnEntity; // 0x0
            // void InputEnableInfinite; // 0x0
            // bool InputDisableInfinite; // 0x0
            // void CBaseNPCMakerMakerThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseNPCMaker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseNPCMaker) == 0x620);
    };
};
