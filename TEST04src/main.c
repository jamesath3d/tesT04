
//#include "_include_all.h"
#include <stdint.h>
#include "gpio.h"



int main(void) {

    uint8_t __ii ;
    uint8_t __jj ;
    uint8_t __rt ;

    //main_init();
    WDTCTL = WDTPW | WDTHOLD; // Stop watchdog timer
    P1DIR |= BIT6;
    P1DIR |= BIT7;
    PM5CTL0 &= ~LOCKLPM5;




    //_uart_p1_5_tx_only_testloop();

    __delay_cycles(1000000);
    // p1.6/red p1.7/green

    __jj = 0 ;
    while(1)
    {
        //_led_red_toggle();

        //_LED_red_on();
        P1OUT &= ~BIT6 ;
        //_LED_green_on();
        P1OUT &= ~BIT7 ;
        //__rt = _cable_tester_mainloop_once();
        __delay_cycles(1000000);

        //_CB_PR_1hex_u8_rn(" cable tester return code is : " , " <<==== 0 --> all ok ; others -> failed. \r\n", __rt);

        __jj ++ ;
        if ( __jj & 1 ) {
            //_LED_red_on(); // turn on red --> error
            P1OUT &= ~BIT6 ;
        } else {
            //_LED_red_off();
            P1OUT |=  BIT6 ;
            //P1OUT &= ~BIT6 ;
        }

        __rt = 6 ; // flash 10 time.

        for ( __ii= __rt ; __ii>0 ; __ii--) {
            if ( __ii & 1 ) {
                //_LED_green_on();
                P1OUT &= ~BIT7 ;
            } else {
                //_LED_green_off();
                P1OUT |=  BIT7 ;
            }
            __delay_cycles(500000);
        }
        //_i2c_expander01_testLoopMainR();
        //_i2c_expander01_testLoopMainW();
    }
}

