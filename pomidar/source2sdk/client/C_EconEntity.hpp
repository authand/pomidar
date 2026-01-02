#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAttributeContainer.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/client/C_EconEntity_AttachedModelData_t.hpp"
#include "source2sdk/client/C_EconEntity_AttachedParticleInfo_t.hpp"
#include "source2sdk/client/EconEntityParticleDisableMode_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraph;
    };
};
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
        // Size: 0x1060
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        #pragma pack(push, 1)
        class C_EconEntity : public source2sdk::client::C_BaseFlex
        {
        public:
            uint8_t _pad0ea8[0x10]; // 0xea8
            // metadata: MNetworkEnable
            source2sdk::client::CAttributeContainer m_AttributeManager; // 0xeb8            
            bool m_bClientside; // 0x1010            
            uint8_t _pad1011[0x3]; // 0x1011
            source2sdk::client::EconEntityParticleDisableMode_t m_nDisableMode; // 0x1014            
            bool m_bParticleSystemsCreated; // 0x1018            
            bool m_bForceDestroyAttachedParticlesImmediately; // 0x1019            
            uint8_t _pad101a[0x6]; // 0x101a
            // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedParticleInfo_t> m_vecAttachedParticles;
            char m_vecAttachedParticles[0x18]; // 0x1020            
            // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimGraph> m_hViewmodelAttachment;
            char m_hViewmodelAttachment[0x4]; // 0x1038            
            std::int32_t m_iOldTeam; // 0x103c            
            bool m_bAttachmentDirty; // 0x1040            
            source2sdk::client::style_index_t m_iOldStyle; // 0x1041            
            uint8_t _pad1042[0x2]; // 0x1042
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0x1044            
            // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedModelData_t> m_vecAttachedModels;
            char m_vecAttachedModels[0x18]; // 0x1048            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconEntity) == 0x1060);
    };
};
