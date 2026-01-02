#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/EAbilityRequirements_t.hpp"
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/EShopFilters_t.hpp"
#include "source2sdk/client/ItemSectionInfo_t.hpp"

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
        // Size: 0x1788
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CitadelItemVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            uint8_t _pad16f8[0x4]; // 0x16f8
            source2sdk::client::EModTier_t m_iItemTier; // 0x16fc            
            std::int8_t m_nUpgradeSlotCost; // 0x16fd            
            bool m_bWarnIfNoAffectedAbilities; // 0x16fe            
            bool m_bShowTextDescription; // 0x16ff            
            bool m_bIsDefensiveItem; // 0x1700            
            uint8_t _pad1701[0x1]; // 0x1701
            source2sdk::client::EShopFilters_t m_eShopFilters; // 0x1702            
            source2sdk::client::EAbilityRequirements_t m_eAbilityRequirements; // 0x1704            
            uint8_t _pad1706[0x2]; // 0x1706
            CPanoramaImageName m_strShopIconLarge; // 0x1708            
            CPanoramaImageName m_strShopIconSmall; // 0x1718            
            // metadata: MPropertyFriendlyName "Item Tooltips"
            // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
            char m_vecTooltipSectionInfo[0x18]; // 0x1728            
            uint8_t _pad1740[0x18]; // 0x1740
            // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_vecComponentItems;
            char m_vecComponentItems[0x18]; // 0x1758            
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/heroes.vdata"
            // m_vecDisabledOnHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecDisabledOnHeroes;
            char m_vecDisabledOnHeroes[0x18]; // 0x1770            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CitadelItemVData) == 0x1788);
    };
};
