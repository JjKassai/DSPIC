#include "interrupts.h"

void __attribute__((interrupt, no_auto_psv))_DAC1RInterrupt(void)
{
    IFS4bits.DAC1RIF = 0;                   // Clear Right Channel Interrupt Flag
    if(sawtoothFlag)
    {
        DAC1RDAT = ++dacOutputRight;
    }
    else if(echoFlag)
    {
        DAC1RDAT = ADC1BUF0;
    }
}
void __attribute__((interrupt, no_auto_psv))_DAC1LInterrupt(void)
{
    IFS4bits.DAC1LIF = 0;                   // Clear Left Channel Interrupt Flag
    if(sawtoothFlag)
    {
        DAC1LDAT = ++dacOutputLeft;
    }
    else if(echoFlag)
    {
        DAC1LDAT = ADC1BUF0;
    }
}

void __attribute__((__interrupt__, no_auto_psv)) _T1Interrupt(void)
{
    
    IFS0bits.T1IF = 0; // Clear Timer1 Interrupt Flag}
}
