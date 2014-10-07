/*******************************************************************************
* File Name: Pin_500.h  
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

#if !defined(CY_PINS_Pin_500_H) /* Pins Pin_500_H */
#define CY_PINS_Pin_500_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_500_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_500_Write(uint8 value) ;
void    Pin_500_SetDriveMode(uint8 mode) ;
uint8   Pin_500_ReadDataReg(void) ;
uint8   Pin_500_Read(void) ;
uint8   Pin_500_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_500_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_500_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_500_DM_RES_UP          PIN_DM_RES_UP
#define Pin_500_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_500_DM_OD_LO           PIN_DM_OD_LO
#define Pin_500_DM_OD_HI           PIN_DM_OD_HI
#define Pin_500_DM_STRONG          PIN_DM_STRONG
#define Pin_500_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_500_MASK               Pin_500__MASK
#define Pin_500_SHIFT              Pin_500__SHIFT
#define Pin_500_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_500_PS                     (* (reg8 *) Pin_500__PS)
/* Data Register */
#define Pin_500_DR                     (* (reg8 *) Pin_500__DR)
/* Port Number */
#define Pin_500_PRT_NUM                (* (reg8 *) Pin_500__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_500_AG                     (* (reg8 *) Pin_500__AG)                       
/* Analog MUX bux enable */
#define Pin_500_AMUX                   (* (reg8 *) Pin_500__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_500_BIE                    (* (reg8 *) Pin_500__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_500_BIT_MASK               (* (reg8 *) Pin_500__BIT_MASK)
/* Bypass Enable */
#define Pin_500_BYP                    (* (reg8 *) Pin_500__BYP)
/* Port wide control signals */                                                   
#define Pin_500_CTL                    (* (reg8 *) Pin_500__CTL)
/* Drive Modes */
#define Pin_500_DM0                    (* (reg8 *) Pin_500__DM0) 
#define Pin_500_DM1                    (* (reg8 *) Pin_500__DM1)
#define Pin_500_DM2                    (* (reg8 *) Pin_500__DM2) 
/* Input Buffer Disable Override */
#define Pin_500_INP_DIS                (* (reg8 *) Pin_500__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_500_LCD_COM_SEG            (* (reg8 *) Pin_500__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_500_LCD_EN                 (* (reg8 *) Pin_500__LCD_EN)
/* Slew Rate Control */
#define Pin_500_SLW                    (* (reg8 *) Pin_500__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_500_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_500__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_500_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_500__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_500_PRTDSI__OE_SEL0        (* (reg8 *) Pin_500__PRTDSI__OE_SEL0) 
#define Pin_500_PRTDSI__OE_SEL1        (* (reg8 *) Pin_500__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_500_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_500__PRTDSI__OUT_SEL0) 
#define Pin_500_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_500__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_500_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_500__PRTDSI__SYNC_OUT) 


#if defined(Pin_500__INTSTAT)  /* Interrupt Registers */

    #define Pin_500_INTSTAT                (* (reg8 *) Pin_500__INTSTAT)
    #define Pin_500_SNAP                   (* (reg8 *) Pin_500__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Pin_500_H */


/* [] END OF FILE */
