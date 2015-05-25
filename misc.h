/* 
 * File:   misc.h
 * Author: root
 *
 * Created on May 25, 2015, 5:50 PM
 */

#ifndef MISC_H
#define	MISC_H

#ifdef	__cplusplus
extern "C" {
#endif

      //AD1CON1bits.DONE=0;
        //DAC1LDAT=ADC1BUF0*5;
    //DAC1RDAT=ADC1BUF0*ADCGAIN*rand();
        
        //Code to measure Fcy
    /*  LATBbits.LATB3=1;
        LATBbits.LATB3=0;
        LATBbits.LATB3=1;
        LATBbits.LATB3=0;
        LATBbits.LATB3=1;
        LATBbits.LATB3=0;
        LATBbits.LATB3=1;
        LATBbits.LATB3=0;
        LATBbits.LATB3=1;
        LATBbits.LATB3=0;
        LATBbits.LATB3=1;
        LATBbits.LATB3=0;
        __delay32(25);
   */   //Sawtooth generator to test the DAC
        /*  for(i=0;i<0xFFFF-increment;i+=increment)
        {
            DAC1LDAT=i;
        }
        for(i=0xFFFF; i>increment; i-=increment)
        {
            DAC1LDAT=i;
        }
        for(i=0x0000; i<0xFFFF-increment; i+=increment)
        {
            DAC1LDAT=i;
        }
    */  //DAC1LDAT = ADC1BUF0;
        //__delay_us(10);
        //DAC1RDAT = rand();
    

#ifdef	__cplusplus
}
#endif

#endif	/* MISC_H */

