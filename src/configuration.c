#include "configuration.h"



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
    setupClock();
    
    setupIO();
    
    setupDAC();
    
    setupADC();
    
    setupTimer1();
}

void setupClock(void)
{
    // See /Documentation/Calculators.xls to see how to get these numbers.
    // This results in 80MHz clock, 40MIPs operation (CONFIRMED)
    OSCCONbits.NOSC=0b011;              // Primary oscillator with PLL
    CLKDIVbits.PLLPRE=0b1;              // N1 = 3
    CLKDIVbits.PLLPOST=0b0;             // N2 = 2
    PLLFBDbits.PLLDIV=0b100110;         // M = 40
    ACLKCONbits.SELACLK=0;              // Fosc (PLL Output) provides AUX CLK
    ACLKCONbits.APSTSCLR=0;             // Aux CLK divide by 256
}

void setupTimer1(void)
{
    T1CONbits.TON = 0;                  // Turn it off first
    T1CONbits.TCS = 0;                  // Use Fosc as clock input
    T1CONbits.TCKPS = 0;                // 1:1 Prescaler
    TMR1 = 0;                           // Clear the timer register
//    PR1 = 65536;                        // Load the period value (?)
    
    IPC0bits.T1IP = 1;                  // Timer 1 Interrupt Priority 1
    IFS0bits.T1IF = 0;                  // Clear the interrupt flag
    IEC0bits.T1IE = 1;                  // Enable Timer1 interrupt
}

void setupDAC(void)
{
    // See /Documentation/Calculators.xls to see how these numbers were calculated.
    // This should result in a ~41.6 kHz DAC sample rate.
    DAC1CONbits.FORM=1;                 // Signed integer for math purposes
    DAC1STATbits.LOEN=1;                // Left channel output enable
    DAC1STATbits.ROEN=1;                // Right channel output enable
    DAC1CONbits.DACFDIV=0b1111;         // Divide clock by 15 to get ~44.6kHz
        
    DAC1DFLT=0x0;                       // Default data register loaded to zero
    DAC1LDAT=0x0;                       // Initialize DAC data registers to zero
    DAC1RDAT=0x0;
    
    DAC1CONbits.DACEN=1;                // Enable the DAC
}

void setupADC(void)
{
    // See /Documentation/Calculators.xls to see how these numbers were calculated.
    // This should provide a ~42kHz sample rate
    AD1CON1bits.AD12B=1;                // 12 bit 1 channel
    AD1CON1bits.FORM=0b01;              // Signed Integer output format for math purposes
    AD1CON1bits.SSRC=0b111;             // Auto-convert
    AD1CON1bits.ASAM=1;                 // Auto Sample
    AD1CON3bits.ADRC=0;                 // Use the system clock, divided down
    AD1CON3bits.ADCS=0b110001;          // Divide system clock by 50 to get ADC (see calculator)
    AD1CON3bits.SAMC=0b101;             // Auto Sample Time = 5 TAD (see calculator))
    AD1CHS0bits.CH0SB=0b00000;          // Channel 0 pos input is AN0
    AD1CHS0bits.CH0SA=0b00000;          // Channel 0 pos input sample b is AN0
    AD1CON1bits.ADON=1;                 // Turn on
}

void setupIO(void)
{   
    TRISA=0x0001;                       // RA0 is an analog input from the mic
    TRISB=0x0000;                       // Use a B port for LED diagnostics
}

void setupUART(uint16_t baudRate)
{
    U1MODE = 0;                         // Standard setup, 8 data, 1 stop, no parity
    
    U1BRG = ((FCY/baudRate)/16)-1;      // Set up the appropriate baudrate.  Equation from Family Reference Manual, UART.
    
    U1STAbits.UTXEN = 1;                // Enable the transmitter
    U1MODEbits.UARTEN = 1;              // Enable the module
    
    // U1RXREG has incoming data
    // U1TXREG has outgoing data
}

void putch(unsigned char byte)
{
    while (!U1STAbits.TRMT);
    U1TXREG = byte;
    if ('\n' == byte) {
        while (!U1STAbits.TRMT);
        U1TXREG = '\r';
    }
    return;
}