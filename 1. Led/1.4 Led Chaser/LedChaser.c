//  LedChaser.c
//  Created on: 22 May 2019
//  Author: Deepak Khatri

#include <at89x51.h>                // 8051 headerfile from sdcc

void delay();                       // Delay function initialization

void main(){                        // Main function
    int counter = 128;              // Counter
    while(1){                       // Infinite loop
        P2 = ~counter;              // Set P2 to inverted counter
        counter = counter>>1;       // shift to right
        if (counter==0){            // if counter equals to 0
            counter=128;            // Increase counter
        }
        
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