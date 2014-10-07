/*******************************************************************************
* File Name: isrWAV.c  
* Version 1.70
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include <cydevice_trm.h>
#include <CyLib.h>
#include <isrWAV.h>

#if !defined(isrWAV__REMOVED) /* Check for removal by optimization */

/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START isrWAV_intc` */

/* `#END` */


/*******************************************************************************
* Function Name: isrWAV_Start
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_Start(void) 
{
    /* For all we know the interrupt is active. */
    isrWAV_Disable();

    /* Set the ISR to point to the isrWAV Interrupt. */
    isrWAV_SetVector(&isrWAV_Interrupt);

    /* Set the priority. */
    isrWAV_SetPriority((uint8)isrWAV_INTC_PRIOR_NUMBER);

    /* Enable it. */
    isrWAV_Enable();
}


/*******************************************************************************
* Function Name: isrWAV_StartEx
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_StartEx(cyisraddress address) 
{
    /* For all we know the interrupt is active. */
    isrWAV_Disable();

    /* Set the ISR to point to the isrWAV Interrupt. */
    isrWAV_SetVector(address);

    /* Set the priority. */
    isrWAV_SetPriority((uint8)isrWAV_INTC_PRIOR_NUMBER);

    /* Enable it. */
    isrWAV_Enable();
}


/*******************************************************************************
* Function Name: isrWAV_Stop
********************************************************************************
*
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_Stop(void) 
{
    /* Disable this interrupt. */
    isrWAV_Disable();
}


/*******************************************************************************
* Function Name: isrWAV_Interrupt
********************************************************************************
* Summary:
*   The default Interrupt Service Routine for isrWAV.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(isrWAV_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START isrWAV_Interrupt` */

    /* `#END` */

    /* PSoC3 ES1, ES2 RTC ISR PATCH  */ 
    #if(CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3)
        #if((CYDEV_CHIP_REVISION_USED <= CYDEV_CHIP_REVISION_3A_ES2) && (isrWAV__ES2_PATCH ))      
            isrWAV_ISR_PATCH();
        #endif /* CYDEV_CHIP_REVISION_USED */
    #endif /* (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) */
}


/*******************************************************************************
* Function Name: isrWAV_SetVector
********************************************************************************
*
* Summary:
*   Change the ISR vector for the Interrupt. Note calling isrWAV_Start
*   will override any effect this method would have had. To set the vector 
*   before the component has been started use isrWAV_StartEx instead.
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_SetVector(cyisraddress address) 
{
    CY_SET_REG16(isrWAV_INTC_VECTOR, (uint16) address);
}


/*******************************************************************************
* Function Name: isrWAV_GetVector
********************************************************************************
*
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*******************************************************************************/
cyisraddress isrWAV_GetVector(void) 
{
    return (cyisraddress) CY_GET_REG16(isrWAV_INTC_VECTOR);
}


/*******************************************************************************
* Function Name: isrWAV_SetPriority
********************************************************************************
*
* Summary:
*   Sets the Priority of the Interrupt. Note calling isrWAV_Start
*   or isrWAV_StartEx will override any effect this method would 
*   have had. This method should only be called after isrWAV_Start or 
*   isrWAV_StartEx has been called. To set the initial
*   priority for the component use the cydwr file in the tool.
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 7, 0 being the highest.
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_SetPriority(uint8 priority) 
{
    *isrWAV_INTC_PRIOR = priority << 5;
}


/*******************************************************************************
* Function Name: isrWAV_GetPriority
********************************************************************************
*
* Summary:
*   Gets the Priority of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Priority of the interrupt. 0 - 7, 0 being the highest.
*
*******************************************************************************/
uint8 isrWAV_GetPriority(void) 
{
    uint8 priority;


    priority = *isrWAV_INTC_PRIOR >> 5;

    return priority;
}


/*******************************************************************************
* Function Name: isrWAV_Enable
********************************************************************************
*
* Summary:
*   Enables the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_Enable(void) 
{
    /* Enable the general interrupt. */
    *isrWAV_INTC_SET_EN = isrWAV__INTC_MASK;
}


/*******************************************************************************
* Function Name: isrWAV_GetState
********************************************************************************
*
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   1 if enabled, 0 if disabled.
*
*******************************************************************************/
uint8 isrWAV_GetState(void) 
{
    /* Get the state of the general interrupt. */
    return ((*isrWAV_INTC_SET_EN & (uint8)isrWAV__INTC_MASK) != 0u) ? 1u:0u;
}


/*******************************************************************************
* Function Name: isrWAV_Disable
********************************************************************************
*
* Summary:
*   Disables the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_Disable(void) 
{
    /* Disable the general interrupt. */
    *isrWAV_INTC_CLR_EN = isrWAV__INTC_MASK;
}


/*******************************************************************************
* Function Name: isrWAV_SetPending
********************************************************************************
*
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_SetPending(void) 
{
    *isrWAV_INTC_SET_PD = isrWAV__INTC_MASK;
}


/*******************************************************************************
* Function Name: isrWAV_ClearPending
********************************************************************************
*
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void isrWAV_ClearPending(void) 
{
    *isrWAV_INTC_CLR_PD = isrWAV__INTC_MASK;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
