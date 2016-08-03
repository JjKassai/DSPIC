#ifndef DIAGNOSTICS_H
#define	DIAGNOSTICS_H



#include <stdint.h>
#include <xc.h>


#define MAX_DAC 2^12                    // Maximum DAC Counts
#define MAX_ADC 2^10                    // Maximum ADC Counts



void sawtooth(uint32_t numberOfCycles); // Sawtooth generator

inline void startTimer(void);
inline void stopTimer(void);



#endif

