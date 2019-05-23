//  LedDice.c
//  Created on: 23 May 2019
//  Author: Deepak Khatri

#include<at89x51.h>                         // 8051 headerfile from sdcc

#define led P1_0                            // Led on pin 1 of port 1
#define time 0.5                            //  value for delay

void delay(float val);                      // Delay function initialization

void main(){                                //  Main function                       
    while(1){                               //  Infinite loop
        led ^= 1;                           //  Toggle P1.0 using exclusive-OR
        delay(time);                        //  Apply delay
    }
}


void delay(float val){                      // Delay function definition
    for(int i = 0; i<0xff*val; i++){        // Loop from 0 to 0xff(255)*val
        for(int j=0; j<0xff; j++){          // Loop from 0 to 0xff(255)
                                            // Do nothing
        }
    }
}