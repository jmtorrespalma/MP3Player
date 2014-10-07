/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include <math.h>
#define PI 3.1415

uint16 s_w400 = 500; //Numero de samples de cada onda.
uint16 s_w500 = 400; // size wave 500 Hz
uint16 s_w600 = 333;
uint16 s_w700 = 285;

uint8 w_400[500]; //Solo aceptan valores entre 0-255, siendo 255 -> 4V
uint8 w_500[400];
uint8 w_600[333];
uint8 w_700[285];

void fillArray(uint8 *array, uint16 size){
    float toint = 255/2.0; //Lo usamos para transformar de 0-2 a 0-255
    float inc = (2*PI) /(float)size; //Dividimos la circunferencia entera en size particiones
    int i;
    
    for(i = 0; i < size; ++i){
        array[i] = (sin(i*inc) + 1) * toint; //El +1 es para obtener siempre valores positivos
    }
    
}

int main()
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    fillArray(w_400, s_w400);
    fillArray(w_500, s_w500);
    fillArray(w_600, s_w600);
    //fillArray(w_700, s_w700);
     
    /* CyGlobalIntEnable; */ /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
        /* Place your application code here. */
        while(Pin_400_Read() && Pin_500_Read() && Pin_600_Read() && Pin_700_Read()); //Esperar mientras no se pulse nada
            
        //Comprobamos qué botón se ha pulsado y cargamos la onda.
        if(!Pin_400_Read())
            WaveDAC8_Wave1Setup(w_400, s_w400); //Elegimos la onda de 400Hz
        else if(!Pin_500_Read())
            WaveDAC8_Wave1Setup(w_500, s_w500);
        else if(!Pin_600_Read())
            WaveDAC8_Wave1Setup(w_600, s_w600);
        else if(!Pin_700_Read())
            WaveDAC8_Wave1Setup(w_700, s_w700);
         
        WaveDAC8_Start();
        while(!Pin_400_Read() || !Pin_500_Read() || !Pin_600_Read() || !Pin_700_Read()); //Suena mientras pulsamos
        WaveDAC8_Stop();
        
    }
}

/* [] END OF FILE */
