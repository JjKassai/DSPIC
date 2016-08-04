#define FCY 33333333                   // Defined in order to use __delay_* macros

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



// FUNCTION DECLARATIONS
void sawtooth(uint32_t numberOfCycles);



// FUNCTION DEFINITIONS
void main(void) {
    
    uint16_t    i;                     // index variable for looping
    int16_t     input, output;
    float       intermediate_float;
    
    setup();
  
    while(1)
    {
        sawtooth(10);
    }
}

void sawtooth(uint32_t numberOfCycles)
{
    uint32_t i, j;
    
    for(j=0; j < numberOfCycles; j++)
    {
        for(i=0; i <= MAX_DAC; i++)
        {
            DAC1RDAT = i;
            __delay_us(10);
        }
    }
}
