#ifndef GLOBAL_H
#define	GLOBAL_H



#include <xc.h>                         // include processor files - each processor file is guarded.
#include <stdint.h>



#define FCY 40000000ULL                 // Defined in order to use __delay_* macros
#define DIAG_LED PORTBbits.RB3          // Diagnostic LED pin location


extern const int16_t const_maxAdcCounts;
extern const int16_t const_maxDacCounts;
extern const uint16_t const_adcGain;


extern volatile int16_t dacOutputRight, dacOutputLeft, adcRawInput;
extern uint8_t sawtoothFlag, echoFlag, diagFlag;

 

#endif

