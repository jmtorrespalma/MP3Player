#ifndef INCLUDED_CYFITTERKEIL_INC
#define INCLUDED_CYFITTERKEIL_INC
$INCLUDE (cydevicekeil.inc)
$INCLUDE (cydevicekeil_trm.inc)

; WaveDAC8_VDAC8_viDAC8
WaveDAC8_VDAC8_viDAC8__CR0 EQU CYREG_DAC0_CR0
WaveDAC8_VDAC8_viDAC8__CR1 EQU CYREG_DAC0_CR1
WaveDAC8_VDAC8_viDAC8__D EQU CYREG_DAC0_D
WaveDAC8_VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
WaveDAC8_VDAC8_viDAC8__PM_ACT_MSK EQU 0x01
WaveDAC8_VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
WaveDAC8_VDAC8_viDAC8__PM_STBY_MSK EQU 0x01
WaveDAC8_VDAC8_viDAC8__STROBE EQU CYREG_DAC0_STROBE
WaveDAC8_VDAC8_viDAC8__SW0 EQU CYREG_DAC0_SW0
WaveDAC8_VDAC8_viDAC8__SW2 EQU CYREG_DAC0_SW2
WaveDAC8_VDAC8_viDAC8__SW3 EQU CYREG_DAC0_SW3
WaveDAC8_VDAC8_viDAC8__SW4 EQU CYREG_DAC0_SW4
WaveDAC8_VDAC8_viDAC8__TR EQU CYREG_DAC0_TR
WaveDAC8_VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M1
WaveDAC8_VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M2
WaveDAC8_VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M3
WaveDAC8_VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M4
WaveDAC8_VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M5
WaveDAC8_VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M6
WaveDAC8_VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M7
WaveDAC8_VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M8
WaveDAC8_VDAC8_viDAC8__TST EQU CYREG_DAC0_TST

; WaveDAC8_Wave1_DMA
WaveDAC8_Wave1_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_Wave1_DMA__DRQ_NUMBER EQU 0
WaveDAC8_Wave1_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_Wave1_DMA__PRIORITY EQU 2
WaveDAC8_Wave1_DMA__TERMIN_EN EQU 0
WaveDAC8_Wave1_DMA__TERMIN_SEL EQU 0
WaveDAC8_Wave1_DMA__TERMOUT0_EN EQU 0
WaveDAC8_Wave1_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_Wave1_DMA__TERMOUT1_EN EQU 0
WaveDAC8_Wave1_DMA__TERMOUT1_SEL EQU 0

; WaveDAC8_Wave2_DMA
WaveDAC8_Wave2_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_Wave2_DMA__DRQ_NUMBER EQU 1
WaveDAC8_Wave2_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_Wave2_DMA__PRIORITY EQU 2
WaveDAC8_Wave2_DMA__TERMIN_EN EQU 0
WaveDAC8_Wave2_DMA__TERMIN_SEL EQU 0
WaveDAC8_Wave2_DMA__TERMOUT0_EN EQU 0
WaveDAC8_Wave2_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_Wave2_DMA__TERMOUT1_EN EQU 0
WaveDAC8_Wave2_DMA__TERMOUT1_SEL EQU 0

; WaveDAC8_DacClk
WaveDAC8_DacClk__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
WaveDAC8_DacClk__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
WaveDAC8_DacClk__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
WaveDAC8_DacClk__CFG2_SRC_SEL_MASK EQU 0x07
WaveDAC8_DacClk__INDEX EQU 0x00
WaveDAC8_DacClk__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
WaveDAC8_DacClk__PM_ACT_MSK EQU 0x01
WaveDAC8_DacClk__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
WaveDAC8_DacClk__PM_STBY_MSK EQU 0x01

; Pin_Senal
Pin_Senal__0__MASK EQU 0x80
Pin_Senal__0__PC EQU CYREG_PRT0_PC7
Pin_Senal__0__PORT EQU 0
Pin_Senal__0__SHIFT EQU 7
Pin_Senal__AG EQU CYREG_PRT0_AG
Pin_Senal__AMUX EQU CYREG_PRT0_AMUX
Pin_Senal__BIE EQU CYREG_PRT0_BIE
Pin_Senal__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_Senal__BYP EQU CYREG_PRT0_BYP
Pin_Senal__CTL EQU CYREG_PRT0_CTL
Pin_Senal__DM0 EQU CYREG_PRT0_DM0
Pin_Senal__DM1 EQU CYREG_PRT0_DM1
Pin_Senal__DM2 EQU CYREG_PRT0_DM2
Pin_Senal__DR EQU CYREG_PRT0_DR
Pin_Senal__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_Senal__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_Senal__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_Senal__MASK EQU 0x80
Pin_Senal__PORT EQU 0
Pin_Senal__PRT EQU CYREG_PRT0_PRT
Pin_Senal__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_Senal__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_Senal__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_Senal__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_Senal__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_Senal__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_Senal__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_Senal__PS EQU CYREG_PRT0_PS
Pin_Senal__SHIFT EQU 7
Pin_Senal__SLW EQU CYREG_PRT0_SLW

; Pin_400
Pin_400__0__MASK EQU 0x80
Pin_400__0__PC EQU CYREG_PRT2_PC7
Pin_400__0__PORT EQU 2
Pin_400__0__SHIFT EQU 7
Pin_400__AG EQU CYREG_PRT2_AG
Pin_400__AMUX EQU CYREG_PRT2_AMUX
Pin_400__BIE EQU CYREG_PRT2_BIE
Pin_400__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_400__BYP EQU CYREG_PRT2_BYP
Pin_400__CTL EQU CYREG_PRT2_CTL
Pin_400__DM0 EQU CYREG_PRT2_DM0
Pin_400__DM1 EQU CYREG_PRT2_DM1
Pin_400__DM2 EQU CYREG_PRT2_DM2
Pin_400__DR EQU CYREG_PRT2_DR
Pin_400__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_400__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_400__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_400__MASK EQU 0x80
Pin_400__PORT EQU 2
Pin_400__PRT EQU CYREG_PRT2_PRT
Pin_400__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_400__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_400__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_400__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_400__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_400__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_400__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_400__PS EQU CYREG_PRT2_PS
Pin_400__SHIFT EQU 7
Pin_400__SLW EQU CYREG_PRT2_SLW

; Pin_500
Pin_500__0__MASK EQU 0x80
Pin_500__0__PC EQU CYREG_PRT1_PC7
Pin_500__0__PORT EQU 1
Pin_500__0__SHIFT EQU 7
Pin_500__AG EQU CYREG_PRT1_AG
Pin_500__AMUX EQU CYREG_PRT1_AMUX
Pin_500__BIE EQU CYREG_PRT1_BIE
Pin_500__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Pin_500__BYP EQU CYREG_PRT1_BYP
Pin_500__CTL EQU CYREG_PRT1_CTL
Pin_500__DM0 EQU CYREG_PRT1_DM0
Pin_500__DM1 EQU CYREG_PRT1_DM1
Pin_500__DM2 EQU CYREG_PRT1_DM2
Pin_500__DR EQU CYREG_PRT1_DR
Pin_500__INP_DIS EQU CYREG_PRT1_INP_DIS
Pin_500__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Pin_500__LCD_EN EQU CYREG_PRT1_LCD_EN
Pin_500__MASK EQU 0x80
Pin_500__PORT EQU 1
Pin_500__PRT EQU CYREG_PRT1_PRT
Pin_500__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Pin_500__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Pin_500__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Pin_500__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Pin_500__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Pin_500__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Pin_500__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Pin_500__PS EQU CYREG_PRT1_PS
Pin_500__SHIFT EQU 7
Pin_500__SLW EQU CYREG_PRT1_SLW

; Pin_600
Pin_600__0__MASK EQU 0x40
Pin_600__0__PC EQU CYREG_PRT1_PC6
Pin_600__0__PORT EQU 1
Pin_600__0__SHIFT EQU 6
Pin_600__AG EQU CYREG_PRT1_AG
Pin_600__AMUX EQU CYREG_PRT1_AMUX
Pin_600__BIE EQU CYREG_PRT1_BIE
Pin_600__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Pin_600__BYP EQU CYREG_PRT1_BYP
Pin_600__CTL EQU CYREG_PRT1_CTL
Pin_600__DM0 EQU CYREG_PRT1_DM0
Pin_600__DM1 EQU CYREG_PRT1_DM1
Pin_600__DM2 EQU CYREG_PRT1_DM2
Pin_600__DR EQU CYREG_PRT1_DR
Pin_600__INP_DIS EQU CYREG_PRT1_INP_DIS
Pin_600__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Pin_600__LCD_EN EQU CYREG_PRT1_LCD_EN
Pin_600__MASK EQU 0x40
Pin_600__PORT EQU 1
Pin_600__PRT EQU CYREG_PRT1_PRT
Pin_600__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Pin_600__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Pin_600__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Pin_600__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Pin_600__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Pin_600__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Pin_600__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Pin_600__PS EQU CYREG_PRT1_PS
Pin_600__SHIFT EQU 6
Pin_600__SLW EQU CYREG_PRT1_SLW

; Pin_700
Pin_700__0__MASK EQU 0x20
Pin_700__0__PC EQU CYREG_PRT1_PC5
Pin_700__0__PORT EQU 1
Pin_700__0__SHIFT EQU 5
Pin_700__AG EQU CYREG_PRT1_AG
Pin_700__AMUX EQU CYREG_PRT1_AMUX
Pin_700__BIE EQU CYREG_PRT1_BIE
Pin_700__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Pin_700__BYP EQU CYREG_PRT1_BYP
Pin_700__CTL EQU CYREG_PRT1_CTL
Pin_700__DM0 EQU CYREG_PRT1_DM0
Pin_700__DM1 EQU CYREG_PRT1_DM1
Pin_700__DM2 EQU CYREG_PRT1_DM2
Pin_700__DR EQU CYREG_PRT1_DR
Pin_700__INP_DIS EQU CYREG_PRT1_INP_DIS
Pin_700__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Pin_700__LCD_EN EQU CYREG_PRT1_LCD_EN
Pin_700__MASK EQU 0x20
Pin_700__PORT EQU 1
Pin_700__PRT EQU CYREG_PRT1_PRT
Pin_700__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Pin_700__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Pin_700__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Pin_700__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Pin_700__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Pin_700__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Pin_700__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Pin_700__PS EQU CYREG_PRT1_PS
Pin_700__SHIFT EQU 5
Pin_700__SLW EQU CYREG_PRT1_SLW

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_LEOPARD
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_PANTHER EQU 3
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_PSOC5LP EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC3
CYDEV_CHIP_JTAG_ID EQU 0x1E028069
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 4
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_3A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_3A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_LEOPARD_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CONFIGURATION_CLEAR_SRAM EQU 1
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DEBUG_ENABLE_MASK EQU 0x01
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA LIT '5.0'
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD LIT '5.0'
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0 LIT '5.0'
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1 LIT '5.0'
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2 LIT '5.0'
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3 LIT '5.0'
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0 EQU 5
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1 EQU 5
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2 EQU 5
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3 EQU 5
CYDEV_VIO3_MV EQU 5000
DMA_CHANNELS_USED__MASK0 EQU 0x00000003
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERKEIL_INC */