#include "interrupts.h"



void __attribute__((interrupt, no_auto_psv))_DAC1RInterrupt(void)
{
    if(sawtoothFlag)
    {
        dacOutputRight += 1000;
    }
    else if(echoFlag)
    {
        dacOutputRight = ADC1BUF0;
    }
    IFS4bits.DAC1RIF = 0;                   // Clear Right Channel Interrupt Flag
}

void __attribute__((interrupt, no_auto_psv))_DAC1LInterrupt(void)
{
    if(sawtoothFlag)
    {
        dacOutputLeft += 1000;
    }
    else if(echoFlag)
    {
        dacOutputLeft = ADC1BUF0;
    }
    IFS4bits.DAC1LIF = 0;                   // Clear Left Channel Interrupt Flag
}

void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void)
{
    IFS0bits.T1IF = 0; // Clear Timer1 Interrupt Flag}
}

void __attribute__((interrupt, no_auto_psv)) _U1RXInterrupt(void)
{
    if(U1RXREG == 'x')
    {
        DIAG_LED = !DIAG_LED;
    }
    IFS0bits.U1RXIF = 0;                    // Clear TX Interrupt flag
}
