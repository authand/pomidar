#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xd40
        // Has VTable
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimGraph
        {
        public:
            std::int32_t flags; // 0xc98            
            source2sdk::entity2::GameTime_t die; // 0xc9c            
            float m_flFrameMax; // 0xca0            
            float x; // 0xca4            
            float y; // 0xca8            
            float fadeSpeed; // 0xcac            
            float bounceFactor; // 0xcb0            
            std::int32_t hitSound; // 0xcb4            
            std::int32_t priority; // 0xcb8            
            Vector tentOffset; // 0xcbc            
            QAngle m_vecTempEntAngVelocity; // 0xcc8            
            std::int32_t tempent_renderamt; // 0xcd4            
            Vector m_vecNormal; // 0xcd8            
            float m_flSpriteScale; // 0xce4            
            std::int32_t m_nFlickerFrame; // 0xce8            
            float m_flFrameRate; // 0xcec            
            float m_flFrame; // 0xcf0            
            uint8_t _pad0cf4[0x4]; // 0xcf4
            char* m_pszImpactEffect; // 0xcf8            
            char* m_pszParticleEffect; // 0xd00            
            bool m_bParticleCollision; // 0xd08            
            uint8_t _pad0d09[0x3]; // 0xd09
            std::int32_t m_iLastCollisionFrame; // 0xd0c            
            Vector m_vLastCollisionOrigin; // 0xd10            
            Vector m_vecTempEntVelocity; // 0xd1c            
            Vector m_vecPrevAbsOrigin; // 0xd28            
            Vector m_vecTempEntAcceleration; // 0xd34            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0xd40);
    };
};
