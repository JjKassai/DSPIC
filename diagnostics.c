#include "diagnostics.h"



void sawtooth(uint32_t numberOfCycles)
{
    uint32_t i, j;
    
    for(j=0; j < numberOfCycles; j++)
    {
        for(i=0; i <= MAX_DAC; i++)
        {
            DAC1LDAT = i;
            DAC1RDAT = i;
        }
    }
}

inline void startTimer(void)
{
    T1CONbits.TON=1;                    // Turn on the timer
}

inline void stopTimer(void)
{
    T1CONbits.TON=0;                    // Turn off the timer
}
