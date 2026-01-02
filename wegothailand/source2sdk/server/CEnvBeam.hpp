#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/server/Touch_t.hpp"
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
        // Size: 0x950
        // Has VTable
        #pragma pack(push, 1)
        class CEnvBeam : public source2sdk::server::CBeam
        {
        public:
            std::int32_t m_active; // 0x8a8            
            uint8_t _pad08ac[0x4]; // 0x8ac
            // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
            char m_spriteTexture[0x8]; // 0x8b0            
            CUtlSymbolLarge m_iszStartEntity; // 0x8b8            
            CUtlSymbolLarge m_iszEndEntity; // 0x8c0            
            float m_life; // 0x8c8            
            float m_boltWidth; // 0x8cc            
            float m_noiseAmplitude; // 0x8d0            
            std::int32_t m_speed; // 0x8d4            
            float m_restrike; // 0x8d8            
            uint8_t _pad08dc[0x4]; // 0x8dc
            CUtlSymbolLarge m_iszSpriteName; // 0x8e0            
            std::int32_t m_frameStart; // 0x8e8            
            Vector m_vEndPointWorld; // 0x8ec            
            Vector m_vEndPointRelative; // 0x8f8            
            float m_radius; // 0x904            
            source2sdk::server::Touch_t m_TouchType; // 0x908            
            uint8_t _pad090c[0x4]; // 0x90c
            CUtlSymbolLarge m_iFilterName; // 0x910            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFilter;
            char m_hFilter[0x4]; // 0x918            
            uint8_t _pad091c[0x4]; // 0x91c
            CUtlSymbolLarge m_iszDecal; // 0x920            
            source2sdk::entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x928            
            
            // Datamap fields:
            // int32_t m_nClipStyle; // 0x88c
            // void CEnvBeamStrikeThink; // 0x0
            // void CEnvBeamUpdateThink; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputToggle; // 0x0
            // void InputStrikeOnce; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvBeam) == 0x950);
    };
};
