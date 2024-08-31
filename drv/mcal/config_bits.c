// C:\Program Files\Microchip\xc8\v2.46\pic\dat\cfgdata\18f27j13.cfgdata

// CONFIG1L
#pragma config WDTEN = OFF     // Watchdog Timer
#pragma config PLLDIV = 1      // 96MHz PLL Prescaler Selection
#pragma config CFGPLLEN = OFF  // PLL Enable Configuration Bit
#pragma config STVREN = ON     // Stack Overflow/Underflow Reset
#pragma config XINST = OFF     // Extended Instruction Set

// CONFIG1H
#pragma config CP0 = ON  // Code Protect

// CONFIG2L
#pragma config OSC = INTOSC   // Oscillator
#pragma config SOSCSEL = LOW  // T1OSC/SOSC Power Selection Bits
#pragma config CLKOEC = OFF   // EC Clock Out Enable Bit
#pragma config FCMEN = OFF    // Fail-Safe Clock Monitor
#pragma config IESO = OFF     // Internal External Oscillator Switch Over Mode

// CONFIG2H
#pragma config WDTPS = 32768  // Watchdog Postscaler

// CONFIG3L
#pragma config DSWDTOSC = INTOSCREF  // DSWDT Clock Select
#pragma config RTCOSC = INTOSCREF    // RTCC Clock Select
#pragma config DSBOREN = ON          // Deep Sleep BOR
#pragma config DSWDTEN = OFF         // Deep Sleep Watchdog Timer
#pragma config DSWDTPS = K131        // Deep Sleep Watchdog Postscaler

// CONFIG3H
#pragma config IOL1WAY = ON      // IOLOCK One-Way Set Enable bit
#pragma config ADCSEL = BIT12    // ADC 10 or 12 Bit Select
#pragma config PLLSEL = PLL4X    // PLL Selection Bit
#pragma config MSSP7B_EN = MSK7  // MSSP address masking

// CONFIG4L
#pragma config WPFP = PAGE_127  // Write/Erase Protect Page Start/End Location
#pragma config WPCFG = ON       // Write/Erase Protect Configuration Region

// CONFIG4H
#pragma config WPDIS = ON      // Write Protect Disable bit
#pragma config WPEND = PAGE_0  // Write/Erase Protect Region Select bit
