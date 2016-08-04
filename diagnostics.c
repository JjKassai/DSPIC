#include "diagnostics.h"



inline void startTimer(void)
{
    T1CONbits.TON=1;                    // Turn on the timer
}

inline void stopTimer(void)
{
    T1CONbits.TON=0;                    // Turn off the timer
}



/*
for(i=0;i<SAMPLE_SIZE;i++)
{ 
    while(!AD1CON1bits.DONE);   // 54112 sps roughly (?NEED TO VERIFY.  WAS THIS WITH RC CLOCK?)  We're polling the register to see if the A/D conversion is done.
    AD1CON1bits.DONE=0;         // Manually clear this bit, otherwise hardware won't do so until the next conversion so you'll continue to test true at the beginning of the next loop iteration
    input=ADC1BUF0;
    intermediate_float=input*(lookup[i]*ADCGAIN);
    output=(signed int) intermediate_float;
    DAC1RDAT=output;
} */
