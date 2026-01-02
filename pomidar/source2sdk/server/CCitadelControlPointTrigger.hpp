#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerMultiple.hpp"
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
        // Size: 0xaa8
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
        class CCitadelControlPointTrigger : public source2sdk::server::CTriggerMultiple
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnFullyCaptured; // 0xa00            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeCapturable; // 0xa28            
            // metadata: MNetworkEnable
            float m_flInitialRadius; // 0xa50            
            // metadata: MNetworkEnable
            float m_flEndRadius; // 0xa54            
            // metadata: MNetworkEnable
            float m_flProgress; // 0xa58            
            // metadata: MNetworkEnable
            float m_flCaptureTime; // 0xa5c            
            // metadata: MNetworkEnable
            // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hUnlockPrereq;
            char m_hUnlockPrereq[0x4]; // 0xa60            
            // metadata: MNetworkEnable
            bool m_bAvailable; // 0xa64            
            // metadata: MNetworkEnable
            bool m_bIsBeingCaptured; // 0xa65            
            // metadata: MNetworkEnable
            bool m_bIsBeingBlocked; // 0xa66            
            uint8_t _pad0a67[0x9]; // 0xa67
            source2sdk::entity2::GameTime_t m_flLastTouchedTime; // 0xa70            
            Vector m_vecBeamTarget; // 0xa74            
            Vector m_vecBeamStart; // 0xa80            
            source2sdk::client::ParticleIndex_t m_nFXProgressBeam; // 0xa8c            
            CUtlSymbolLarge m_strUnlockPrereq; // 0xa90            
            CUtlSymbolLarge m_strBeamStart; // 0xa98            
            CUtlSymbolLarge m_strBeamTarget; // 0xaa0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelControlPointTrigger) == 0xaa8);
    };
};
