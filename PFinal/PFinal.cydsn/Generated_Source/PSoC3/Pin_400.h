/*******************************************************************************
* File Name: Pin_400.h  
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

#if !defined(CY_PINS_Pin_400_H) /* Pins Pin_400_H */
#define CY_PINS_Pin_400_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_400_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_400_Write(uint8 value) ;
void    Pin_400_SetDriveMode(uint8 mode) ;
uint8   Pin_400_ReadDataReg(void) ;
uint8   Pin_400_Read(void) ;
uint8   Pin_400_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_400_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_400_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_400_DM_RES_UP          PIN_DM_RES_UP
#define Pin_400_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_400_DM_OD_LO           PIN_DM_OD_LO
#define Pin_400_DM_OD_HI           PIN_DM_OD_HI
#define Pin_400_DM_STRONG          PIN_DM_STRONG
#define Pin_400_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_400_MASK               Pin_400__MASK
#define Pin_400_SHIFT              Pin_400__SHIFT
#define Pin_400_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_400_PS                     (* (reg8 *) Pin_400__PS)
/* Data Register */
#define Pin_400_DR                     (* (reg8 *) Pin_400__DR)
/* Port Number */
#define Pin_400_PRT_NUM                (* (reg8 *) Pin_400__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_400_AG                     (* (reg8 *) Pin_400__AG)                       
/* Analog MUX bux enable */
#define Pin_400_AMUX                   (* (reg8 *) Pin_400__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_400_BIE                    (* (reg8 *) Pin_400__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_400_BIT_MASK               (* (reg8 *) Pin_400__BIT_MASK)
/* Bypass Enable */
#define Pin_400_BYP                    (* (reg8 *) Pin_400__BYP)
/* Port wide control signals */                                                   
#define Pin_400_CTL                    (* (reg8 *) Pin_400__CTL)
/* Drive Modes */
#define Pin_400_DM0                    (* (reg8 *) Pin_400__DM0) 
#define Pin_400_DM1                    (* (reg8 *) Pin_400__DM1)
#define Pin_400_DM2                    (* (reg8 *) Pin_400__DM2) 
/* Input Buffer Disable Override */
#define Pin_400_INP_DIS                (* (reg8 *) Pin_400__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_400_LCD_COM_SEG            (* (reg8 *) Pin_400__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_400_LCD_EN                 (* (reg8 *) Pin_400__LCD_EN)
/* Slew Rate Control */
#define Pin_400_SLW                    (* (reg8 *) Pin_400__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_400_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_400__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_400_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_400__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_400_PRTDSI__OE_SEL0        (* (reg8 *) Pin_400__PRTDSI__OE_SEL0) 
#define Pin_400_PRTDSI__OE_SEL1        (* (reg8 *) Pin_400__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_400_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_400__PRTDSI__OUT_SEL0) 
#define Pin_400_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_400__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_400_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_400__PRTDSI__SYNC_OUT) 


#if defined(Pin_400__INTSTAT)  /* Interrupt Registers */

    #define Pin_400_INTSTAT                (* (reg8 *) Pin_400__INTSTAT)
    #define Pin_400_SNAP                   (* (reg8 *) Pin_400__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins Pin_400_H */


/* [] END OF FILE */
