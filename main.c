/* 
 * File:   main.c
 * Author: Joe Kassai
 *
 * Created on April 13, 2015, 7:20 PM
 */

//INCLUDE FILES
#include <stdio.h>
#include <stdlib.h>
#include <libpic30.h>
#include <math.h>
#include "config_bits.h"
#include "misc.h"
#include "diagnostics.h"
#include "lookups.h"

//CONSTANT DECLARATION
#define FCY 33333333
#define increment 10
#define ADCGAIN 30 
#define OFFSET 0x0000
#define SAMPLE_SIZE 10000
#define MAX_ADC 2^10
#define MAX_DAC 2^12


//VARIABLE DECLARATION
unsigned int i=0;
signed int input, output;
//unsigned int min_in, max_in, time;
float int1;

//PROTOTYPES
void setup(void);

int main(int argc, char** argv) {
    setup();
    while(1)
    {
        //T1CONbits.TON=1;           //Turn on the timer
        for(i=0;i<SAMPLE_SIZE;i++)
        { 
            while(!AD1CON1bits.DONE);  
            AD1CON1bits.DONE=0;         //Manually clear this bit, otherwise hardware won't do so until the next conversion so you'll continue to test true throughout sampling
            input=ADC1BUF0;
            int1=input*(lookup[i]*ADCGAIN);
            output=(signed int) int1;
            DAC1RDAT=output;
        }
        //T1CONbits.TON=0;
        //time=TMR1;
        //TMR1=0;
    }
    return (EXIT_SUCCESS);
}

void setup(void)
{
    //OSCILLATOR SETUP
    //OSCCON=0b0011001100000000;
    OSCCONbits.NOSC=0b011;           //Primary oscillator with PLL

    //AUX OSCILLATOR SETUP
    //ACLKCON=0b0010111100000000;
    ACLKCONbits.SELACLK=1;          //Aux oscillator provides clock to aux clock divider (?)
    ACLKCONbits.AOSCMD=0b01;        //HS Oscillator select
    ACLKCONbits.APSTSCLR=0b111;     //Divide by 1
    
    //DAC SETUP
    //DAC1CON=0b1001000000000000;
    DAC1CONbits.DACEN=1;            //Enable the DAC
    DAC1CONbits.FORM=1;             //Signed integer for math purposes
    //DAC1STAT=0b1000000010000000;
    DAC1STATbits.LOEN=1;            //Left channel output enable
    DAC1STATbits.ROEN=1;            //Right channel output enable
        
    DAC1DFLT=0x0000;                //Default data register loaded to zero
    
    //DAC1LDAT=0xFFFF;
    //DAC1RDAT=0xFFFF;
    
    //ADC SETUP
    AD1CON1bits.ADON=1;             //Turn on
    AD1CON1bits.AD12B=0;            //10 bit 4 channels
    AD1CON1bits.FORM=0b01;          //Signed Integer ouput format for math purposes
    AD1CON1bits.SSRC=0b111;         //Auto-convert
    AD1CON1bits.ASAM=1;             //Auto Sample
    AD1CON3bits.ADRC=1;             //Try the RC cloc,
//    AD1CON3bits.ADCS=0b00111111;    //Divide system clock by 64 to get ADC
    AD1CON3bits.SAMC=0b11111;       //Auto Sample Time = 31 TAD
    AD1CHS0bits.CH0SB=0b00000;      //Channel 0 pos input is AN0
    AD1CHS0bits.CH0SA=0b00000;      //Channel 0 pos input sample b is AN0
    
    //PORT SETUP
    TRISA=0x0001;                   //RA0 is an analog input from the mic
    TRISB=0x0000;
    
    //TIMER1 SETUP
    //Default timer values are good
}