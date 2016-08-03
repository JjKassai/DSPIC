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
#define FCY 33333333                    // Defined in order to use __delay_* macros
#define ADCGAIN 40                      // Software gain for the ADC.  Eventually this should be removed
#define SAMPLE_SIZE 5000                // Sample size for discrete time modulation



// GLOBAL VARIABLE DECLARATION



// FUNCTION DECLARATIONS



// FUNCTION DEFINITIONS
void main(void) {
    
    uint16_t    i;                     // index variable for looping
    int16_t     input, output;
    float       intermediate_float;
    
    setup();
  
    while(1)
    {
/*        for(i=0;i<SAMPLE_SIZE;i++)
        { 
            while(!AD1CON1bits.DONE);   // 54112 sps roughly (?NEED TO VERIFY.  WAS THIS WITH RC CLOCK?)  We're polling the register to see if the A/D conversion is done.
            AD1CON1bits.DONE=0;         // Manually clear this bit, otherwise hardware won't do so until the next conversion so you'll continue to test true at the beginning of the next loop iteration
            input=ADC1BUF0;
            intermediate_float=input*(lookup[i]*ADCGAIN);
            output=(signed int) intermediate_float;
            DAC1RDAT=output;
        } */
        sawtooth(1);
    }
}
