#include "diagnostics.h"



inline void startTimer(void)
{
    T1CONbits.TON=1;                    // Turn on the timer
}

inline void stopTimer(void)
{
    T1CONbits.TON=0;                    // Turn off the timer
}
