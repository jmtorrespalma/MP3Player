/*******************************************************************************
* File Name: Pin_600.h  
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

#if !defined(CY_PINS_Pin_600_H) /* Pins Pin_600_H */
#define CY_PINS_Pin_600_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_600_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_600_Write(uint8 value) ;
void    Pin_600_SetDriveMode(uint8 mode) ;
uint8   Pin_600_ReadDataReg(void) ;
uint8   Pin_600_Read(void) ;
uint8   Pin_600_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_600_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_600_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_600_DM_RES_UP          PIN_DM_RES_UP
#define Pin_600_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_600_DM_OD_LO           PIN_DM_OD_LO
#define Pin_600_DM_OD_HI           PIN_DM_OD_HI
#define Pin_600_DM_STRONG          PIN_DM_STRONG
#define Pin_600_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_600_MASK               Pin_600__MASK
#define Pin_600_SHIFT              Pin_600__SHIFT
#define Pin_600_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_600_PS                     (* (reg8 *) Pin_600__PS)
/* Data Register */
#define Pin_600_DR                     (* (reg8 *) Pin_600__DR)
/* Port Number */
#define Pin_600_PRT_NUM                (* (reg8 *) Pin_600__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_600_AG                     (* (reg8 *) Pin_600__AG)                       
/* Analog MUX bux enable */
#define Pin_600_AMUX                   (* (reg8 *) Pin_600__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_600_BIE                    (* (reg8 *) Pin_600__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_600_BIT_MASK               (* (reg8 *) Pin_600__BIT_MASK)
/* Bypass Enable */
#define Pin_600_BYP                    (* (reg8 *) Pin_600__BYP)
/* Port wide control signals */                                                   
#define Pin_600_CTL                    (* (reg8 *) Pin_600__CTL)
/* Drive Modes */
#define Pin_600_DM0                    (* (reg8 *) Pin_600__DM0) 
#define Pin_600_DM1                    (* (reg8 *) Pin_600__DM1)
#define Pin_600_DM2                    (* (reg8 *) Pin_600__DM2) 
/* Input Buffer Disable Override */
#define Pin_600_INP_DIS                (* (reg8 *) Pin_600__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_600_LCD_COM_SEG            (* (reg8 *) Pin_600__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_600_LCD_EN                 (* (reg8 *) Pin_600__LCD_EN)
/* Slew Rate Control */
#define Pin_600_SLW                    (* (reg8 *) Pin_600__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_600_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_600__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_600_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_600__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_600_PRTDSI__OE_SEL0        (* (reg8 *) Pin_600__PRTDSI__OE_SEL0) 
#define Pin_600_PRTDSI__OE_SEL1        (* (reg8 *) Pin_600__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_600_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_600__PRTDSI__OUT_SEL0) 
#define Pin_600_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_600__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_600_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_600__PRTDSI__SYNC_OUT) 


#if defined(Pin_600__INTSTAT)  /* Interrupt Registers */

    #define Pin_600_INTSTAT                (* (reg8 *) Pin_600__INTSTAT)
    #define Pin_600_SNAP                   (* (reg8 *) Pin_600__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Pin_600_H */


/* [] END OF FILE */
