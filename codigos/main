#pragma config FOSC = INTIO67
#pragma config PLLCFG = OFF
#pragma config PRICLKEN = ON
#pragma config WDTEN = OFF
#pragma config PWRTEN = OFF
#pragma config BOREN = OFF
#pragma config MCLRE = EXTMCLR
#pragma config PBADEN = OFF

#define _XTAL_FREQ 48000000UL

#include <xc.h>
#include <stdio.h>
#include "adc.h"
#include "i2c.h"
#include "i2c_lcd.h"

char buffer[16];

void main(void)
{
    I2C_init();
    lcd_init();
    ADC_Init();

    lcd_clear();
    lcd_set_cursor(0, 0);
    lcd_write_string("Temperatura:");

    while (1)
    {
        unsigned int adcValue = ADC_Read(0); // AN0
        float voltage = adcValue * 5.0 / 1023.0;
        float tempC = voltage * 100.0; // LM35: 10mV/°C

        sprintf(buffer, "T=%.1f C     ", tempC);
        lcd_set_cursor(1, 0);
        lcd_write_string(buffer);

        __delay_ms(500);
    }
}
