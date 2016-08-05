#ifndef INTERRUPTS_H
#define	INTERRUPTS_H



#include "global.h"
#include <xc.h>                         // include processor files - each processor file is guarded.  



// FUNCTION DECLARATIONS
void __attribute__((interrupt, no_auto_psv))_DAC1RInterrupt(void);
void __attribute__((interrupt, no_auto_psv))_DAC1LInterrupt(void);
void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void);
void __attribute__((interrupt, no_auto_psv)) _U1RXInterrupt(void);



#endif
