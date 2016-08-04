#include <xc.h>



void setup(void)
{
    // OSCILLATOR SETUP
    //
    // See /Documentation/Calculators.xls to see how to get these numbers.
    // This results in 80MHz clock, 40MIPs operation
    OSCCONbits.NOSC=0b011;              // Primary oscillator with PLL
    CLKDIVbits.PLLPRE=0b1;              // N1 = 3
    CLKDIVbits.PLLPOST=0b0;             // N2 = 2
    PLLFBDbits.PLLDIV=0b100110;         // M = 40
    ACLKCONbits.SELACLK=0;              // Fosc (PLL Output) provides AUX CLK
    ACLKCONbits.APSTSCLR=0;             // Aux CLK divide by 256

    // DAC SETUP
    //
    // See /Documentation/Calculators.xls to see how these numbers were calculated.
    // This should result in a ~44.6 kHz DAC sample rate.
    DAC1CONbits.DACEN=1;                // Enable the DAC
    DAC1CONbits.FORM=1;                 // Signed integer for math purposes
    DAC1STATbits.LOEN=1;                // Left channel output enable
    DAC1STATbits.ROEN=1;                // Right channel output enable
    DAC1CONbits.DACFDIV=0b110;          // Divide clock by 7 to get ~44.6kHz
        
    DAC1DFLT=0x0;                       // Default data register loaded to zero
    DAC1LDAT=0x0;                       // Initialize DAC data registers to zero
    DAC1RDAT=0x0;
    
    // ADC SETUP
    AD1CON1bits.ADON=1;                 // Turn on
    AD1CON1bits.AD12B=1;                // 12 bit 1 channel
    AD1CON1bits.FORM=0b01;              // Signed Integer output format for math purposes
    AD1CON1bits.SSRC=0b111;             // Auto-convert
    AD1CON1bits.ASAM=1;                 // Auto Sample
    AD1CON3bits.ADRC=0;                 // Use the system clock, divided down
    AD1CON3bits.ADCS=0b100;             // Divide system clock by 5 to get ADC (see calculator)
    AD1CON3bits.SAMC=0b100;             // Auto Sample Time = 4 TAD (see calculator))
    AD1CHS0bits.CH0SB=0b00000;          // Channel 0 pos input is AN0
    AD1CHS0bits.CH0SA=0b00000;          // Channel 0 pos input sample b is AN0
    
    // PORT SETUP
    TRISA=0x0001;                       // RA0 is an analog input from the mic
    TRISB=0x0000;                       // Use a B port for LED diagnostics
    
    // TIMER1 SETUP
    // Default timer values are good
}
