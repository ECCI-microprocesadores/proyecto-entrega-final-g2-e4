#define _XTAL_FREQ 48000000UL

#include <xc.h>
#include "adc.h"

void ADC_Init(void)
{
    ADCON0 = 0b00000001; // Canal AN0, ADC habilitado
    ADCON1 = 0b00000000; // AN0 como analógico
    ADCON2 = 0b10110110; // Justificado a la derecha, Tacq=16TAD, Fosc/32
}

unsigned int ADC_Read(unsigned char channel)
{
    if(channel > 13) return 0;

    ADCON0 &= 0xC5;
    ADCON0 |= (channel << 2);
    __delay_ms(2);
    GO_nDONE = 1;
    while(GO_nDONE);

    return ((unsigned int)ADRESH << 8) | ADRESL;
}
