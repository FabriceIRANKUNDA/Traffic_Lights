/*
 * File:   source.c
 * Author: Irankunda Fabrice and Niyomukiza Egide
 *
 * Created on July 11, 2021, 6:57 PM
 */

// PIC16F877A Configuration Bit Settings

// 'C' source line config statements

// CONFIG
#pragma config FOSC = HS     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define _XTAL_FREQ 20000000
#include <xc.h>

void main(void) {
    TRISD=0x00;
    PORTD=0x00;
    while(1){
        PORTDbits.RD0=1;
        __delay_ms(5000);
        PORTDbits.RD0=0;
        
        PORTDbits.RD1=1;
        __delay_ms(5000);
        PORTDbits.RD1=0;
    
        PORTDbits.RD3=1;
        __delay_ms(5000);
        PORTDbits.RD3=0;
    
    }
}
