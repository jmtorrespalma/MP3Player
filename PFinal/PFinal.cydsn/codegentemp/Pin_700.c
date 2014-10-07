/*******************************************************************************
* File Name: Pin_700.c  
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
#include "Pin_700.h"


/*******************************************************************************
* Function Name: Pin_700_Write
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
void Pin_700_Write(uint8 value) 
{
    uint8 staticBits = (Pin_700_DR & (uint8)(~Pin_700_MASK));
    Pin_700_DR = staticBits | ((uint8)(value << Pin_700_SHIFT) & Pin_700_MASK);
}


/*******************************************************************************
* Function Name: Pin_700_SetDriveMode
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
void Pin_700_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(Pin_700_0, mode);
}


/*******************************************************************************
* Function Name: Pin_700_Read
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
*  Macro Pin_700_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 Pin_700_Read(void) 
{
    return (Pin_700_PS & Pin_700_MASK) >> Pin_700_SHIFT;
}


/*******************************************************************************
* Function Name: Pin_700_ReadDataReg
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
uint8 Pin_700_ReadDataReg(void) 
{
    return (Pin_700_DR & Pin_700_MASK) >> Pin_700_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(Pin_700_INTSTAT) 

    /*******************************************************************************
    * Function Name: Pin_700_ClearInterrupt
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
    uint8 Pin_700_ClearInterrupt(void) 
    {
        return (Pin_700_INTSTAT & Pin_700_MASK) >> Pin_700_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
