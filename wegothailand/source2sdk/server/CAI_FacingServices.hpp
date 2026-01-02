#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/server/AI_ScheduleFacingTargetPriority_t.hpp"
#include "source2sdk/server/AI_Strafing_t.hpp"
#include "source2sdk/server/CAI_InterestTarget.hpp"
#include "source2sdk/server/ChoreoEntityFacing_t.hpp"

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
        // Size: 0x210
        // Has VTable
        #pragma pack(push, 1)
        class CAI_FacingServices : public source2sdk::client::CAI_Component
        {
        public:
            source2sdk::server::CAI_InterestTarget m_pEntityFacingRequests[8]; // 0x40            
            source2sdk::server::AI_ScheduleFacingTargetPriority_t m_eScheduleFacingRequestPriority; // 0x1e0            
            source2sdk::server::AI_Strafing_t m_strafingRequests[6]; // 0x1e1            
            bool m_pEnableForceFacing[2]; // 0x1e7            
            std::uint8_t m_nEntityFacingLockCount; // 0x1e9            
            uint8_t _pad01ea[0x6]; // 0x1ea
            // m_vecChoreoEntityFacings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ChoreoEntityFacing_t> m_vecChoreoEntityFacings;
            char m_vecChoreoEntityFacings[0x18]; // 0x1f0            
            bool m_bFailedTargetValidation; // 0x208            
            uint8_t _pad0209[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_FacingServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_FacingServices) == 0x210);
    };
};
