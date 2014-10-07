/*******************************************************************************
* File Name: Pin_700.h  
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

#if !defined(CY_PINS_Pin_700_H) /* Pins Pin_700_H */
#define CY_PINS_Pin_700_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_700_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_700_Write(uint8 value) ;
void    Pin_700_SetDriveMode(uint8 mode) ;
uint8   Pin_700_ReadDataReg(void) ;
uint8   Pin_700_Read(void) ;
uint8   Pin_700_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_700_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_700_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_700_DM_RES_UP          PIN_DM_RES_UP
#define Pin_700_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_700_DM_OD_LO           PIN_DM_OD_LO
#define Pin_700_DM_OD_HI           PIN_DM_OD_HI
#define Pin_700_DM_STRONG          PIN_DM_STRONG
#define Pin_700_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_700_MASK               Pin_700__MASK
#define Pin_700_SHIFT              Pin_700__SHIFT
#define Pin_700_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_700_PS                     (* (reg8 *) Pin_700__PS)
/* Data Register */
#define Pin_700_DR                     (* (reg8 *) Pin_700__DR)
/* Port Number */
#define Pin_700_PRT_NUM                (* (reg8 *) Pin_700__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_700_AG                     (* (reg8 *) Pin_700__AG)                       
/* Analog MUX bux enable */
#define Pin_700_AMUX                   (* (reg8 *) Pin_700__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_700_BIE                    (* (reg8 *) Pin_700__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_700_BIT_MASK               (* (reg8 *) Pin_700__BIT_MASK)
/* Bypass Enable */
#define Pin_700_BYP                    (* (reg8 *) Pin_700__BYP)
/* Port wide control signals */                                                   
#define Pin_700_CTL                    (* (reg8 *) Pin_700__CTL)
/* Drive Modes */
#define Pin_700_DM0                    (* (reg8 *) Pin_700__DM0) 
#define Pin_700_DM1                    (* (reg8 *) Pin_700__DM1)
#define Pin_700_DM2                    (* (reg8 *) Pin_700__DM2) 
/* Input Buffer Disable Override */
#define Pin_700_INP_DIS                (* (reg8 *) Pin_700__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_700_LCD_COM_SEG            (* (reg8 *) Pin_700__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_700_LCD_EN                 (* (reg8 *) Pin_700__LCD_EN)
/* Slew Rate Control */
#define Pin_700_SLW                    (* (reg8 *) Pin_700__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_700_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_700__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_700_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_700__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_700_PRTDSI__OE_SEL0        (* (reg8 *) Pin_700__PRTDSI__OE_SEL0) 
#define Pin_700_PRTDSI__OE_SEL1        (* (reg8 *) Pin_700__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_700_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_700__PRTDSI__OUT_SEL0) 
#define Pin_700_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_700__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_700_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_700__PRTDSI__SYNC_OUT) 


#if defined(Pin_700__INTSTAT)  /* Interrupt Registers */

    #define Pin_700_INTSTAT                (* (reg8 *) Pin_700__INTSTAT)
    #define Pin_700_SNAP                   (* (reg8 *) Pin_700__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Pin_700_H */


/* [] END OF FILE */
