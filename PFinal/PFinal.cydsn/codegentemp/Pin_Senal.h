/*******************************************************************************
* File Name: Pin_Senal.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_Senal_H) /* Pins Pin_Senal_H */
#define CY_PINS_Pin_Senal_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_Senal_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_Senal_Write(uint8 value) ;
void    Pin_Senal_SetDriveMode(uint8 mode) ;
uint8   Pin_Senal_ReadDataReg(void) ;
uint8   Pin_Senal_Read(void) ;
uint8   Pin_Senal_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_Senal_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_Senal_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_Senal_DM_RES_UP          PIN_DM_RES_UP
#define Pin_Senal_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_Senal_DM_OD_LO           PIN_DM_OD_LO
#define Pin_Senal_DM_OD_HI           PIN_DM_OD_HI
#define Pin_Senal_DM_STRONG          PIN_DM_STRONG
#define Pin_Senal_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_Senal_MASK               Pin_Senal__MASK
#define Pin_Senal_SHIFT              Pin_Senal__SHIFT
#define Pin_Senal_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_Senal_PS                     (* (reg8 *) Pin_Senal__PS)
/* Data Register */
#define Pin_Senal_DR                     (* (reg8 *) Pin_Senal__DR)
/* Port Number */
#define Pin_Senal_PRT_NUM                (* (reg8 *) Pin_Senal__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_Senal_AG                     (* (reg8 *) Pin_Senal__AG)                       
/* Analog MUX bux enable */
#define Pin_Senal_AMUX                   (* (reg8 *) Pin_Senal__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_Senal_BIE                    (* (reg8 *) Pin_Senal__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_Senal_BIT_MASK               (* (reg8 *) Pin_Senal__BIT_MASK)
/* Bypass Enable */
#define Pin_Senal_BYP                    (* (reg8 *) Pin_Senal__BYP)
/* Port wide control signals */                                                   
#define Pin_Senal_CTL                    (* (reg8 *) Pin_Senal__CTL)
/* Drive Modes */
#define Pin_Senal_DM0                    (* (reg8 *) Pin_Senal__DM0) 
#define Pin_Senal_DM1                    (* (reg8 *) Pin_Senal__DM1)
#define Pin_Senal_DM2                    (* (reg8 *) Pin_Senal__DM2) 
/* Input Buffer Disable Override */
#define Pin_Senal_INP_DIS                (* (reg8 *) Pin_Senal__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_Senal_LCD_COM_SEG            (* (reg8 *) Pin_Senal__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_Senal_LCD_EN                 (* (reg8 *) Pin_Senal__LCD_EN)
/* Slew Rate Control */
#define Pin_Senal_SLW                    (* (reg8 *) Pin_Senal__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_Senal_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_Senal__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_Senal_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_Senal__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_Senal_PRTDSI__OE_SEL0        (* (reg8 *) Pin_Senal__PRTDSI__OE_SEL0) 
#define Pin_Senal_PRTDSI__OE_SEL1        (* (reg8 *) Pin_Senal__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_Senal_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_Senal__PRTDSI__OUT_SEL0) 
#define Pin_Senal_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_Senal__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_Senal_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_Senal__PRTDSI__SYNC_OUT) 


#if defined(Pin_Senal__INTSTAT)  /* Interrupt Registers */

    #define Pin_Senal_INTSTAT                (* (reg8 *) Pin_Senal__INTSTAT)
    #define Pin_Senal_SNAP                   (* (reg8 *) Pin_Senal__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Pin_Senal_H */


/* [] END OF FILE */
