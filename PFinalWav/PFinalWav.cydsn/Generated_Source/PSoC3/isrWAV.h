/*******************************************************************************
* File Name: isrWAV.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_ISR_isrWAV_H)
#define CY_ISR_isrWAV_H

#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void isrWAV_Start(void) ;
void isrWAV_StartEx(cyisraddress address) ;
void isrWAV_Stop(void) ;

CY_ISR_PROTO(isrWAV_Interrupt);

void isrWAV_SetVector(cyisraddress address) ;
cyisraddress isrWAV_GetVector(void) ;

void isrWAV_SetPriority(uint8 priority) ;
uint8 isrWAV_GetPriority(void) ;

void isrWAV_Enable(void) ;
uint8 isrWAV_GetState(void) ;
void isrWAV_Disable(void) ;

void isrWAV_SetPending(void) ;
void isrWAV_ClearPending(void) ;


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the isrWAV ISR. */
#define isrWAV_INTC_VECTOR            ((reg16 *) isrWAV__INTC_VECT)

/* Address of the isrWAV ISR priority. */
#define isrWAV_INTC_PRIOR             ((reg8 *) isrWAV__INTC_PRIOR_REG)

/* Priority of the isrWAV interrupt. */
#define isrWAV_INTC_PRIOR_NUMBER      isrWAV__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable isrWAV interrupt. */
#define isrWAV_INTC_SET_EN            ((reg8 *) isrWAV__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the isrWAV interrupt. */
#define isrWAV_INTC_CLR_EN            ((reg8 *) isrWAV__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the isrWAV interrupt state to pending. */
#define isrWAV_INTC_SET_PD            ((reg8 *) isrWAV__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the isrWAV interrupt. */
#define isrWAV_INTC_CLR_PD            ((reg8 *) isrWAV__INTC_CLR_PD_REG)



#endif /* CY_ISR_isrWAV_H */


/* [] END OF FILE */
