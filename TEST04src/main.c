#include <stdint.h>
#include "gpio.h"
#include "msp430.h"

int main(void) {

    uint8_t __ii ;
    uint8_t __jj ;
    uint8_t __rt ;

    WDTCTL = WDTPW | WDTHOLD; // Stop watchdog timer
    P1DIR |= BIT6;
    P1DIR |= BIT7;
    PM5CTL0 &= ~LOCKLPM5;

    __delay_cycles(1000000);

    __jj = 0 ;
    while(1)
    {
        P1OUT &= ~BIT6 ;
        P1OUT &= ~BIT7 ;
        __delay_cycles(1000000);

        __jj ++ ;
        if ( __jj & 1 ) {
            P1OUT &= ~BIT6 ;
        } else {
            P1OUT |=  BIT6 ;
        }

        __rt = 6 ; // flash 10 time.

        for ( __ii= __rt ; __ii>0 ; __ii--) {
            if ( __ii & 1 ) {
                P1OUT &= ~BIT7 ;
            } else {
                P1OUT |=  BIT7 ;
            }
            __delay_cycles(500000);
        }
    }
}
