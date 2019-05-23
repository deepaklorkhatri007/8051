//  CyclicLedPattern.c
//  Created on: 23 May 2019
//  Author: Deepak Khatri

#include <at89x51.h>                // 8051 headerfile from sdcc

#define time 0.5                            //  value for delay

void delay(float val);                      // Delay function initialization

void main(){                        // Main function
    int counter = 128;              // Counter
    while(1){                       // Infinite loop
        P2 = ~counter;              // Set P2 to inverted counter
        counter |= counter>>1;      // retain the bit and also shift to right
        if (counter==255){          // if counter equals to 255
            delay(time);                // provide delay
            P2 = ~counter;          // Set P2 to inverted counter
            counter=128;            // Set counter to 128
        }
        delay(time);                    // Provide delay
    }
}


void delay(float val){                      // Delay function definition
    for(int i = 0; i<0xff*val; i++){        // Loop from 0 to 0xff(255)*val
        for(int j=0; j<0xff; j++){          // Loop from 0 to 0xff(255)
                                            // Do nothing
        }
    }
}