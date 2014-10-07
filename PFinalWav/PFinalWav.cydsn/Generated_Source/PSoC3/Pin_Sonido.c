/*******************************************************************************
* File Name: Pin_Sonido.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Pin_Sonido.h"


/*******************************************************************************
* Function Name: Pin_Sonido_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void Pin_Sonido_Write(uint8 value) 
{
    uint8 staticBits = (Pin_Sonido_DR & (uint8)(~Pin_Sonido_MASK));
    Pin_Sonido_DR = staticBits | ((uint8)(value << Pin_Sonido_SHIFT) & Pin_Sonido_MASK);
}


/*******************************************************************************
* Function Name: Pin_Sonido_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  None
*
*******************************************************************************/
void Pin_Sonido_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Pin_Sonido_0, mode);
}


/*******************************************************************************
* Function Name: Pin_Sonido_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro Pin_Sonido_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Pin_Sonido_Read(void) 
{
    return (Pin_Sonido_PS & Pin_Sonido_MASK) >> Pin_Sonido_SHIFT;
}


/*******************************************************************************
* Function Name: Pin_Sonido_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 Pin_Sonido_ReadDataReg(void) 
{
    return (Pin_Sonido_DR & Pin_Sonido_MASK) >> Pin_Sonido_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Pin_Sonido_INTSTAT) 

    /*******************************************************************************
    * Function Name: Pin_Sonido_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 Pin_Sonido_ClearInterrupt(void) 
    {
        return (Pin_Sonido_INTSTAT & Pin_Sonido_MASK) >> Pin_Sonido_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
