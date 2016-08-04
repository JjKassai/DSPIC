#define FCY 40000000ULL                 // Defined in order to use __delay_* macros



// INCLUDES
#include <stdio.h>
#include <stdlib.h>                     // Used for rand()
#include <stdint.h>                     // Standard width types
#include <libpic30.h>                   // Delay functions
#include <math.h>                       // Trigonometric functions
#include <xc.h>                         // Microchip register defines and so on
#include "configuration.h"              // Configuration bits and setup functions
#include "diagnostics.h"                // Diagnostic functions
#include "lookups.h"                    // Lookup tables for audio manipulation



// CONSTANT DECLARATION
#define ADCGAIN 40                      // Software gain for the ADC.  Eventually this should be removed
#define SAMPLE_SIZE 5000                // Sample size for discrete time modulation



// GLOBAL VARIABLE DECLARATION
int16_t dacOutputRight, dacOutputLeft;
uint8_t sawtoothFlag, echoFlag;



// FUNCTION DECLARATIONS
void sawtooth(void);
void echo(void);



// FUNCTION DEFINITIONS
void main(void) {
    
    uint16_t    i;                     // index variable for looping
    int16_t     input, output;
    float       intermediate_float;
    
    setup();
  
    while(1)
    {
        sawtooth();
    }
}

void sawtooth(void)
{
    sawtoothFlag = 1;
    IFS4bits.DAC1RIF = 0;               // Clear Right Channel Interrupt Flag
    IFS4bits.DAC1LIF = 0;               // Clear Left Channel Interrupt Flag
    IEC4bits.DAC1RIE = 1;               // Right Channel Interrupt Enabled
    IEC4bits.DAC1LIE = 1;               // Left Channel Interrupt Enabled
}

void echo(void)
{
    echoFlag = 1;
    IFS4bits.DAC1RIF = 0;               // Clear Right Channel Interrupt Flag
    IFS4bits.DAC1LIF = 0;               // Clear Left Channel Interrupt Flag
    IEC4bits.DAC1RIE = 1;               // Right Channel Interrupt Enabled
    IEC4bits.DAC1LIE = 1;               // Left Channel Interrupt Enabled
}

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
