#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Standard-layout class: false
        // Size: 0xb68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flInitialRadius"
        // static metadata: MNetworkVarNames "float m_flEndRadius"
        // static metadata: MNetworkVarNames "float m_flProgress"
        // static metadata: MNetworkVarNames "float m_flCaptureTime"
        // static metadata: MNetworkVarNames "EHANDLE m_hUnlockPrereq"
        // static metadata: MNetworkVarNames "bool m_bAvailable"
        // static metadata: MNetworkVarNames "bool m_bIsBeingCaptured"
        // static metadata: MNetworkVarNames "bool m_bIsBeingBlocked"
        #pragma pack(push, 1)
        class CCitadelControlPointTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            float m_flInitialRadius; // 0xb10            
            // metadata: MNetworkEnable
            float m_flEndRadius; // 0xb14            
            // metadata: MNetworkEnable
            float m_flProgress; // 0xb18            
            // metadata: MNetworkEnable
            float m_flCaptureTime; // 0xb1c            
            // metadata: MNetworkEnable
            // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hUnlockPrereq;
            char m_hUnlockPrereq[0x4]; // 0xb20            
            // metadata: MNetworkEnable
            bool m_bAvailable; // 0xb24            
            // metadata: MNetworkEnable
            bool m_bIsBeingCaptured; // 0xb25            
            // metadata: MNetworkEnable
            bool m_bIsBeingBlocked; // 0xb26            
            uint8_t _pad0b27[0x9]; // 0xb27
            source2sdk::entity2::GameTime_t m_flLastTouchedTime; // 0xb30            
            Vector m_vecBeamTarget; // 0xb34            
            Vector m_vecBeamStart; // 0xb40            
            source2sdk::client::ParticleIndex_t m_nFXProgressBeam; // 0xb4c            
            CUtlSymbolLarge m_strUnlockPrereq; // 0xb50            
            CUtlSymbolLarge m_strBeamStart; // 0xb58            
            CUtlSymbolLarge m_strBeamTarget; // 0xb60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelControlPointTrigger) == 0xb68);
    };
};
