#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0xa18
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
        // static metadata: MNetworkVarNames "float m_flFadeDuration"
        // static metadata: MNetworkVarNames "float m_flMinLogExposure"
        // static metadata: MNetworkVarNames "float m_flMaxLogExposure"
        // static metadata: MNetworkVarNames "float m_flMinExposure"
        // static metadata: MNetworkVarNames "float m_flMaxExposure"
        // static metadata: MNetworkVarNames "float m_flExposureCompensation"
        // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedUp"
        // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedDown"
        // static metadata: MNetworkVarNames "float m_flTonemapEVSmoothingRange"
        // static metadata: MNetworkVarNames "bool m_bMaster"
        // static metadata: MNetworkVarNames "bool m_bExposureControl"
        #pragma pack(push, 1)
        class CPostProcessingVolume : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad09d8[0x10]; // 0x9d8
            // metadata: MNetworkEnable
            // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
            char m_hPostSettings[0x8]; // 0x9e8            
            // metadata: MNetworkEnable
            float m_flFadeDuration; // 0x9f0            
            // metadata: MNetworkEnable
            float m_flMinLogExposure; // 0x9f4            
            // metadata: MNetworkEnable
            float m_flMaxLogExposure; // 0x9f8            
            // metadata: MNetworkEnable
            float m_flMinExposure; // 0x9fc            
            // metadata: MNetworkEnable
            float m_flMaxExposure; // 0xa00            
            // metadata: MNetworkEnable
            float m_flExposureCompensation; // 0xa04            
            // metadata: MNetworkEnable
            float m_flExposureFadeSpeedUp; // 0xa08            
            // metadata: MNetworkEnable
            float m_flExposureFadeSpeedDown; // 0xa0c            
            // metadata: MNetworkEnable
            float m_flTonemapEVSmoothingRange; // 0xa10            
            // metadata: MNetworkEnable
            bool m_bMaster; // 0xa14            
            // metadata: MNetworkEnable
            bool m_bExposureControl; // 0xa15            
            uint8_t _pad0a16[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPostProcessingVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPostProcessingVolume) == 0xa18);
    };
};
