/*******************************************************************************
* File Name: Pin_Play_Pause.h  
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

#if !defined(CY_PINS_Pin_Play_Pause_H) /* Pins Pin_Play_Pause_H */
#define CY_PINS_Pin_Play_Pause_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_Play_Pause_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_Play_Pause_Write(uint8 value) ;
void    Pin_Play_Pause_SetDriveMode(uint8 mode) ;
uint8   Pin_Play_Pause_ReadDataReg(void) ;
uint8   Pin_Play_Pause_Read(void) ;
uint8   Pin_Play_Pause_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_Play_Pause_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_Play_Pause_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_Play_Pause_DM_RES_UP          PIN_DM_RES_UP
#define Pin_Play_Pause_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_Play_Pause_DM_OD_LO           PIN_DM_OD_LO
#define Pin_Play_Pause_DM_OD_HI           PIN_DM_OD_HI
#define Pin_Play_Pause_DM_STRONG          PIN_DM_STRONG
#define Pin_Play_Pause_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_Play_Pause_MASK               Pin_Play_Pause__MASK
#define Pin_Play_Pause_SHIFT              Pin_Play_Pause__SHIFT
#define Pin_Play_Pause_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_Play_Pause_PS                     (* (reg8 *) Pin_Play_Pause__PS)
/* Data Register */
#define Pin_Play_Pause_DR                     (* (reg8 *) Pin_Play_Pause__DR)
/* Port Number */
#define Pin_Play_Pause_PRT_NUM                (* (reg8 *) Pin_Play_Pause__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_Play_Pause_AG                     (* (reg8 *) Pin_Play_Pause__AG)                       
/* Analog MUX bux enable */
#define Pin_Play_Pause_AMUX                   (* (reg8 *) Pin_Play_Pause__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_Play_Pause_BIE                    (* (reg8 *) Pin_Play_Pause__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_Play_Pause_BIT_MASK               (* (reg8 *) Pin_Play_Pause__BIT_MASK)
/* Bypass Enable */
#define Pin_Play_Pause_BYP                    (* (reg8 *) Pin_Play_Pause__BYP)
/* Port wide control signals */                                                   
#define Pin_Play_Pause_CTL                    (* (reg8 *) Pin_Play_Pause__CTL)
/* Drive Modes */
#define Pin_Play_Pause_DM0                    (* (reg8 *) Pin_Play_Pause__DM0) 
#define Pin_Play_Pause_DM1                    (* (reg8 *) Pin_Play_Pause__DM1)
#define Pin_Play_Pause_DM2                    (* (reg8 *) Pin_Play_Pause__DM2) 
/* Input Buffer Disable Override */
#define Pin_Play_Pause_INP_DIS                (* (reg8 *) Pin_Play_Pause__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_Play_Pause_LCD_COM_SEG            (* (reg8 *) Pin_Play_Pause__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_Play_Pause_LCD_EN                 (* (reg8 *) Pin_Play_Pause__LCD_EN)
/* Slew Rate Control */
#define Pin_Play_Pause_SLW                    (* (reg8 *) Pin_Play_Pause__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_Play_Pause_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_Play_Pause__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_Play_Pause_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_Play_Pause__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_Play_Pause_PRTDSI__OE_SEL0        (* (reg8 *) Pin_Play_Pause__PRTDSI__OE_SEL0) 
#define Pin_Play_Pause_PRTDSI__OE_SEL1        (* (reg8 *) Pin_Play_Pause__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_Play_Pause_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_Play_Pause__PRTDSI__OUT_SEL0) 
#define Pin_Play_Pause_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_Play_Pause__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_Play_Pause_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_Play_Pause__PRTDSI__SYNC_OUT) 


#if defined(Pin_Play_Pause__INTSTAT)  /* Interrupt Registers */

    #define Pin_Play_Pause_INTSTAT                (* (reg8 *) Pin_Play_Pause__INTSTAT)
    #define Pin_Play_Pause_SNAP                   (* (reg8 *) Pin_Play_Pause__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Pin_Play_Pause_H */


/* [] END OF FILE */
