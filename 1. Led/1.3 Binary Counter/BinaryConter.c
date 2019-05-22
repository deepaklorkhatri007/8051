//  BinaryCounter.c
//  Created on: 22 May 2019
//  Author: Deepak Khatri

#include <at89x51.h>                // 8051 headerfile from sdcc

void delay();                       // Delay function initialization

void main(){                        // Main function
    int counter = 1;                // Counter
    while(1){                       // Infinite loop
        P2 = ~counter;              // Set P2 to inverted counter
        counter++;                  // Increase counter
        delay();                    // Provide delay
    }
}


void delay(){                       // Delay function definition
    for(int i = 0; i<0xff; i++){    // Loop from 0 to 0xff(255)
        for(int j=0; j<0xff; j++){  // Loop from 0 to 0xff(255)
                                    // Do nothing
        }
    }
}