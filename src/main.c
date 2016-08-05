// INCLUDES
#include "global.h"
#include <stdio.h>
#include <stdlib.h>                     // Used for rand()
#include <libpic30.h>                   // Delay functions
#include <math.h>                       // Trigonometric functions
#include "configuration.h"              // Configuration bits and setup functions
#include "diagnostics.h"                // Diagnostic functions
//#include "lookups.h"                    // Lookup tables for audio manipulation
#include "interrupts.h"                 // Interrupt service routines



// GLOBAL CONSTANT DEFINITION
const int16_t const_maxAdcCounts = 2^12;
const int16_t const_maxDacCounts = 2^16;
const uint16_t const_adcGain = 40;



// GLOBAL VARIABLE DEFINITION
volatile int16_t dacOutputRight = 0;
volatile int16_t dacOutputLeft = 0;
volatile int16_t adcRawInput = 0;
uint8_t sawtoothFlag = 0;
uint8_t echoFlag = 0;



// FUNCTION DECLARATIONS
void sawtooth(void);
void echo(void);



// FUNCTION DEFINITIONS
int main(void) {

    setup();
    
    setupUART(9600);
    
    printf("Testing the UART");
  
    sawtooth();
    
    while(1)
    {
        DIAG_LED = AD1CON1bits.DONE;
    }
    return(EXIT_SUCCESS);
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
