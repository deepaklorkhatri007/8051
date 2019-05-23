//  AlternateBlink.c
//  Created on: 22 May 2019
//  Edited on:  23 May 2019
//  Author: Deepak Khatri


#include<at89x51.h>                 // 8051 headerfile from sdcc

#define led1 P1_0                   // Led1 at pin 0 of port 0
#define led2 P1_1                   // Led1 at pin 0 of port 1
#define time 0.5                    //  value for delay

void delay(float val);              // Delay function initialization

void main(){                        // Main function
    while(1){                       // Infinite loop
        led1 = 0;                   //  Turn on the led1 (0 is low thus it turn on the led)
        led2 = 1;                   //  Turn off the led2 (1 is high thus it turn off the led)
        delay(time);                //  Apply delay
        led2 = 0;                   //  Turn on the led2
        led1 = 1;                   //  Turn off the led1
        delay(time);
    }
}


void delay(float val){                      // Delay function definition
    for(int i = 0; i<0xff*val; i++){        // Loop from 0 to 0xff(255)*val
        for(int j=0; j<0xff; j++){          // Loop from 0 to 0xff(255)
                                            // Do nothing
        }
    }
}