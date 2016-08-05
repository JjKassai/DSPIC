#ifndef CONFIGURATION_H
#define	CONFIGURATION_H



#include "global.h"



// FUNCTION DECLARATIONS
void setup(void);
void setupClock(void);
void setupTimer1(void);
void setupDAC(void);
void setupADC(void);
void setupIO(void);
void setupUART(uint16_t baudRate);
void putch(unsigned char byte);



#endif
