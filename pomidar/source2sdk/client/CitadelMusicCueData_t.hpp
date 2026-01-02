#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelMusicChord_t.hpp"
#include "source2sdk/client/EMusicState_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x78
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMusicCueData_t
        {
        public:
            CSoundEventName m_strSoundEvent; // 0x0            
            source2sdk::client::EMusicState_t m_nDeferState; // 0x10            
            float m_flBpm; // 0x14            
            bool m_bInterruptStop; // 0x18            
            bool m_bSetToNoneStateWhenFinished; // 0x19            
            bool m_bResume; // 0x1a            
            uint8_t _pad001b[0x5]; // 0x1b
            // m_Chords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CitadelMusicChord_t> m_Chords;
            char m_Chords[0x28]; // 0x20            
            // m_Arpeggiators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Arpeggiators;
            char m_Arpeggiators[0x18]; // 0x48            
            uint8_t _pad0060[0x18];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_strSoundEvent) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_nDeferState) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_flBpm) == 0x14);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_bInterruptStop) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_bSetToNoneStateWhenFinished) == 0x19);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_bResume) == 0x1a);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_Chords) == 0x20);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_Arpeggiators) == 0x48);
        
        static_assert(sizeof(source2sdk::client::CitadelMusicCueData_t) == 0x78);
    };
};
