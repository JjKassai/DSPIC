#ifndef CONFIGURATION_H
#define	CONFIGURATION_H



#include <xc.h>



// Function Prototypes
void setup(void);



// DSPIC33FJ128GP802 Configuration Bit Settings
// FBS
#pragma config BWRP = WRPROTECT_OFF     // Boot Segment Write Protect (Boot Segment may be written)
#pragma config BSS = NO_FLASH           // Boot Segment Program Flash Code Protection (No Boot program Flash segment)
#pragma config RBS = NO_RAM             // Boot Segment RAM Protection (No Boot RAM)

// FSS
#pragma config SWRP = WRPROTECT_OFF     // Secure Segment Program Write Protect (Secure segment may be written)
#pragma config SSS = NO_FLASH           // Secure Segment Program Flash Code Protection (No Secure Segment)
#pragma config RSS = NO_RAM             // Secure Segment Data RAM Protection (No Secure RAM)

// FGS
#pragma config GWRP = OFF               // General Code Segment Write Protect (User program memory is not write-protected)
#pragma config GSS = OFF                // General Segment Code Protection (User program memory is not code-protected)

// FOSCSEL
#pragma config FNOSC = PRIPLL           // Oscillator Mode (Primary Oscillator (XT, HS, EC))
#pragma config IESO = ON                // Internal External Switch Over Mode (Start-up device with user-selected oscillator source)

// FOSC
#pragma config POSCMD = HS              // Primary Oscillator Source (HS Oscillator Mode)
#pragma config OSCIOFNC = ON            // OSC2 Pin Function (OSC2 pin has digital I/O function)
#pragma config IOL1WAY = ON             // Peripheral Pin Select Configuration (Allow Only One Re-configuration)
#pragma config FCKSM = CSDCMD           // Clock Switching and Monitor (Both Clock Switching and Fail-Safe Clock Monitor are disabled)

// FWDT
#pragma config WDTPOST = PS32768        // Watchdog Timer Postscaler (1:32,768)
#pragma config WDTPRE = PR128           // WDT Prescaler (1:128)
#pragma config WINDIS = OFF             // Watchdog Timer Window (Watchdog Timer in Non-Window mode)
#pragma config FWDTEN = OFF             // Watchdog Timer Enable (Watchdog timer enabled/disabled by user software)

// FPOR
#pragma config FPWRT = PWR128           // POR Timer Value (128ms)
#pragma config ALTI2C = OFF             // Alternate I2C  pins (I2C mapped to SDA1/SCL1 pins)

// FICD
#pragma config ICS = PGD1               // Comm Channel Select (Communicate on PGC1/EMUC1 and PGD1/EMUD1)
#pragma config JTAGEN = OFF             // JTAG Port Enable (JTAG is Disabled)



void setup(void)
{
    //OSCILLATOR SETUP
    //OSCCON=0b0011001100000000;
    OSCCONbits.NOSC=0b011;              // Primary oscillator with PLL

    //AUX OSCILLATOR SETUP
    //ACLKCON=0b0010111100000000;
    ACLKCONbits.SELACLK=1;              // Aux oscillator provides clock to aux clock divider (?)
    ACLKCONbits.AOSCMD=0b01;            // HS Oscillator select
    ACLKCONbits.APSTSCLR=0b111;         // Divide by 1
    
    //DAC SETUP
    //DAC1CON=0b1001000000000000;
    DAC1CONbits.DACEN=1;                // Enable the DAC
    DAC1CONbits.FORM=1;                 // Signed integer for math purposes
    //DAC1STAT=0b1000000010000000;
    DAC1STATbits.LOEN=1;                // Left channel output enable
    DAC1STATbits.ROEN=1;                // Right channel output enable
        
    DAC1DFLT=0x0;                       // Default data register loaded to zero
    DAC1LDAT=0x0;                       // Initialize DAC data registers to zero
    DAC1RDAT=0x0;
    
    //ADC SETUP
    AD1CON1bits.ADON=1;                 // Turn on
    AD1CON1bits.AD12B=0;                // 10 bit 4 channels
    AD1CON1bits.FORM=0b01;              // Signed Integer ouput format for math purposes
    AD1CON1bits.SSRC=0b111;             // Auto-convert
    AD1CON1bits.ASAM=1;                 // Auto Sample
    AD1CON3bits.ADRC=1;                 // Try the RC clock
//    AD1CON3bits.ADCS=0b00111111;      // Divide system clock by 64 to get ADC
    AD1CON3bits.SAMC=0b11111;           // Auto Sample Time = 31 TAD
    AD1CHS0bits.CH0SB=0b00000;          // Channel 0 pos input is AN0
    AD1CHS0bits.CH0SA=0b00000;          // Channel 0 pos input sample b is AN0
    
    //PORT SETUP
    TRISA=0x0001;                       // RA0 is an analog input from the mic
    TRISB=0x0000;
    
    //TIMER1 SETUP
    //Default timer values are good
}



#endif
