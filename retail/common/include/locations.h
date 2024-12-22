#ifndef LOCATIONS_H
#define LOCATIONS_H

#define TARGETBUFFERHEADER 0x02BFF000

#define EXCEPTION_STACK_LOCATION      0x027FFC00
#define EXCEPTION_STACK_LOCATION_SDK5 0x02FFFC00

#define ROM_FILE_LOCATION          0x37EFFA0
#define ROM_FILE_LOCATION_ALT      0x302FFA0
#define ROM_FILE_LOCATION_MAINMEM  0x27FEFA0
#define ROM_FILE_LOCATION_TWLSDK   0x2FFDFA0
#define SAV_FILE_LOCATION          (ROM_FILE_LOCATION + 0x18) //+ sizeof(aFile)
#define SAV_FILE_LOCATION_ALT      (ROM_FILE_LOCATION_ALT + 0x18) //+ sizeof(aFile)
#define SAV_FILE_LOCATION_MAINMEM  (ROM_FILE_LOCATION_MAINMEM + 0x18) //+ sizeof(aFile)
#define SAV_FILE_LOCATION_TWLSDK   (ROM_FILE_LOCATION_TWLSDK + 0x18) //+ sizeof(aFile)
#define OVL_FILE_LOCATION          (ROM_FILE_LOCATION + 0x30) //+ sizeof(aFile)
#define OVL_FILE_LOCATION_ALT      (ROM_FILE_LOCATION_ALT + 0x30) //+ sizeof(aFile)
#define OVL_FILE_LOCATION_MAINMEM  (ROM_FILE_LOCATION_MAINMEM + 0x30) //+ sizeof(aFile)
#define OVL_FILE_LOCATION_TWLSDK   (ROM_FILE_LOCATION_TWLSDK + 0x30) //+ sizeof(aFile)
/* #define GBA_FILE_LOCATION         (ROM_FILE_LOCATION + 64) //+ sizeof(aFile)
#define GBA_FILE_LOCATION_ALT     (ROM_FILE_LOCATION_ALT + 64) //+ sizeof(aFile)
#define GBA_FILE_LOCATION_MAINMEM (ROM_FILE_LOCATION_MAINMEM + 64) //+ sizeof(aFile)
#define GBA_SAV_FILE_LOCATION         (ROM_FILE_LOCATION + 96) //+ sizeof(aFile)
#define GBA_SAV_FILE_LOCATION_ALT     (ROM_FILE_LOCATION_ALT + 96) //+ sizeof(aFile)
#define GBA_SAV_FILE_LOCATION_MAINMEM (ROM_FILE_LOCATION_MAINMEM + 96) //+ sizeof(aFile) */
#define FONT_FILE_LOCATION_TWLSDK  (ROM_FILE_LOCATION_TWLSDK + 0x48) //+ sizeof(aFile)

#define LOAD_CRT0_LOCATION      0x06840000 // LCDC_BANK_C
#define LOAD_CRT0_LOCATION_B4DS 0x06860000 // LCDC_BANK_D

#define IPS_LOCATION       0x022F8000
#define IMAGES_LOCATION    0x02338000 // Also IPS location for B4DS mode

#define CHEAT_ENGINE_LOCATION_B4DS_BUFFERED     0x023FE400
#define CARDENGINE_ARM7_LOCATION_BUFFERED       0x023FD000
#define CARDENGINE_ARM9_LOCATION_BUFFERED       0x023E0000

#define CHEAT_ENGINE_LOCATION_B4DS           0x027DE000
#define CHEAT_ENGINE_LOCATION_B4DS_ALT       0x027FC000
#define CHEAT_ENGINE_LOCATION_B4DS_ALT2      0x027FD000
#define CARDENGINE_ARM7_LOCATION             0x0380E780
#define CARDENGINE_ARM9_LOCATION_DLDI_START  0x02000400
#define CARDENGINE_ARM9_LOCATION_DLDI        0x023DA400
#define CARDENGINE_ARM9_LOCATION_DLDI_32     0x023D4400
#define CARDENGINE_ARM9_LOCATION_DLDI_ALT    0x023F9C00
#define CARDENGINE_ARM9_LOCATION_DLDI_ALT2   0x023FA800
#define CARDENGINE_ARM9_LOCATION_DLDI_ALT3   0x023DB800
#define CARDENGINE_ARM9_LOCATION_DLDI_EXTMEM 0x02780000

#define DONOR_ROM_ARM7_LOCATION                      0x02680000
#define DONOR_ROM_ARM7_SIZE_LOCATION                 0x026B0000
#define DONOR_ROM_ARM7I_SIZE_LOCATION                0x026B0004
#define DONOR_ROM_MBK6_LOCATION                      0x026B0008
#define DONOR_ROM_DEVICE_LIST_LOCATION               0x026B000C
#define ARM9_DEC_SIZE_LOCATION                       0x026B0010
#define INGAME_MENU_EXT_LOCATION                     0x026B8000
#define INGAME_MENU_EXT_LOCATION_B4DS                0x02380000
#define CHEAT_ENGINE_BUFFERED_LOCATION	             0x026E0000
#define INGAME_MENU_LOCATION                         0x02F88000
#define INGAME_MENU_LOCATION_B4DS                    0x023E6000
#define INGAME_MENU_LOCATION_B4DS_EXTMEM             (INGAME_MENU_LOCATION_B4DS+0x400000)
#define CACHE_ADDRESS_TABLE_LOCATION                 0x027D8000
#define CACHE_ADDRESS_TABLE_LOCATION2                0x027E0000
#define CACHE_DESCRIPTOR_TABLE_LOCATION              0x027DA000
#define CACHE_DESCRIPTOR_TABLE_LOCATION2             0x027E2000
#define CACHE_COUNTER_TABLE_LOCATION                 0x027DC000
#define CACHE_COUNTER_TABLE_LOCATION2                0x027E4000
#define UNPATCHED_FUNCTION_LOCATION                  0x027FFA40
#define UNPATCHED_FUNCTION_LOCATION_SDK5             0x02FFFA40

#define BLOWFISH_LOCATION_B4DS                       0x023ECE00
#define CARDENGINEI_ARM9_BUFFERED_LOCATION           0x026F0000
#define BLOWFISH_LOCATION                            0x027B0C00
#define ARM7_FIX_BUFFERED_LOCATION                   0x027B1E00
#define CARDENGINEI_ARM7_BUFFERED_LOCATION           0x027B2000
#define CARDENGINEI_ARM9_SDK5_BUFFERED_LOCATION      0x027E0000

#define CHEAT_ENGINE_LOCATION                      0x037C0000
#define CHEAT_ENGINE_LOCATION_ALT                  0x03000000
#define CHEAT_ENGINE_TWLSDK_SMALL_LOCATION         0x02F60000
#define CHEAT_ENGINE_TWLSDK_LOCATION               0x02F00000
#define CHEAT_ENGINE_TWLSDK_LARGE_LOCATION         0x02D00000
#define CHEAT_ENGINE_TWLSDK_LOCATION_3DS           0x0DFF7C00
#define CHEAT_ENGINE_DSIWARE_LOCATION              0x02FD9400
#define CHEAT_ENGINE_DSIWARE_LOCATION3             0x02F80C00
#define CARDENGINEI_ARM7_LOCATION                  0x037C8400
#define CARDENGINEI_ARM7_LOCATION_DLDI             0x037F0000
#define CARDENGINEI_ARM7_LOCATION_ALT              0x03008400
#define CARDENGINEI_ARM7_LOCATION_ALT_DLDI         0x03030000
#define CARDENGINEI_ARM7_TWLSDK_LOCATION           0x03037A00
#define CARDENGINEI_ARM7_TWLSDK_LOCATION3          0x03807200
#define CARDENGINEI_ARM7_DSIWARE_LOCATION          0x03037C00
#define CARDENGINEI_ARM7_DSIWARE_LOCATION3         0x03807400
#define CARDENGINEI_ARM9_LOCATION                  0x027FC000
#define CARDENGINEI_ARM9_LOCATION_DLDI_DRIVER      CACHE_ADDRESS_TABLE_LOCATION
#define CARDENGINEI_ARM9_LOCATION2_DLDI_DRIVER     CACHE_ADDRESS_TABLE_LOCATION2
#define CARDENGINEI_ARM9_TWLSDK_LOCATION           0x02FD8800 // Used for DSi-Enhanced games in DSi mode
#define CARDENGINEI_ARM9_TWLSDK_LOCATION3          0x02F80000 // Used for DSi-Exclusive games
#define CARDENGINEI_ARM9_DSIWARE_LOCATION          CARDENGINEI_ARM9_TWLSDK_LOCATION
#define CARDENGINEI_ARM9_DSIWARE_LOCATION3         CARDENGINEI_ARM9_TWLSDK_LOCATION3

#define CARDENGINE_SHARED_ADDRESS_SDK1 0x027FFA0C
#define CARDENGINE_SHARED_ADDRESS_SDK5 0x02FFFA0C

#define LOADER_RETURN_LOCATION                     (u32)CARDENGINEI_ARM7_BUFFERED_LOCATION+0xB000
#define LOADER_RETURN_SDK5_LOCATION                (u32)CARDENGINEI_ARM7_BUFFERED_LOCATION+0x8400
#define LOADER_RETURN_DSIWARE_LOCATION             (u32)CARDENGINEI_ARM7_BUFFERED_LOCATION+0x8000

#define RESET_PARAM      0x27FFC20
#define RESET_PARAM_SDK5 0x2FFFC20

//#define TEMP_MEM 0x02FFE000 // __DSiHeader

#define NDS_HEADER         0x027FFE00
#define NDS_HEADER_SDK5    0x02FFFE00 // __NDSHeader
#define NDS_HEADER_POKEMON 0x027FF000

#define DSI_HEADER         0x027FE000
#define DSI_HEADER_SDK5    0x02FFE000 // __DSiHeader

#define ROM_LOCATION               0x0C400000
#define ROM_LOCATION_DSIMODE       0x0C800000
#define ROM_LOCATION_TWLSDK        0x0D000000

#define CACHE_ADRESS_START                     0x0C400000
#define CACHE_ADRESS_START_DSIMODE             0x0C800000
#define retail_CACHE_ADRESS_START_TWLSDK_SMALL       0x02F60000
#define retail_CACHE_ADRESS_START_TWLSDK_SMALL_CHEAT 0x02F68400
#define retail_CACHE_ADRESS_START_TWLSDK       0x02F00000
#define retail_CACHE_ADRESS_START_TWLSDK_CHEAT 0x02F08400
#define retail_CACHE_ADRESS_START_TWLSDK_LARGE       0x02D00000
#define retail_CACHE_ADRESS_START_TWLSDK_LARGE_CHEAT 0x02D08400

#define retail_CACHE_ADRESS_SIZE              0xBD0000
#define retail_CACHE_ADRESS_SIZE_DSIMODE      0x7FF000
#define retail_CACHE_ADRESS_SIZE_BROWSER      0x3D0000
#define retail_CACHE_ADRESS_SIZE_TWLSDK_SMALL       0x20000
#define retail_CACHE_ADRESS_SIZE_TWLSDK_SMALL_CHEAT 0x17C00
#define retail_CACHE_ADRESS_SIZE_TWLSDK       0x80000
#define retail_CACHE_ADRESS_SIZE_TWLSDK_CHEAT 0x77C00
#define retail_CACHE_ADRESS_SIZE_TWLSDK_LARGE       0x280000
#define retail_CACHE_ADRESS_SIZE_TWLSDK_LARGE_CHEAT 0x277C00

#define dev_CACHE_ADRESS_START_TWLSDK 0x0D000000

#define dev_CACHE_ADRESS_SIZE              0x1BD0000
#define dev_CACHE_ADRESS_SIZE_DSIMODE      0x17FF000
#define dev_CACHE_ADRESS_SIZE_TWLSDK       0x1000000
#define dev_CACHE_ADRESS_SIZE_TWLSDK_CHEAT 0xFF7C00

#define dev_CACHE_SLOTS_16KB        dev_CACHE_ADRESS_SIZE/0x4000
#define dev_CACHE_SLOTS_16KB_TWLSDK dev_CACHE_ADRESS_SIZE_TWLSDK/0x4000

#endif // LOCATIONS_H
