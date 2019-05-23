//  RandomLeds.c
//  Created on: 22 May 2019
//  Edited on:  23 May 2019
//  Author: Deepak Khatri


#include <stdlib.h>                 // standard library
#include <at89x51.h>                // 8051 headerfile from sdcc

#define time 0.5                    //  value for delay

void delay(float val);              // Delay function initialization              

void main(){                        // Main function
    int counter;                    // counter variable
    while (1){                      // infinite while loop
        counter = rand();           // random integer value
        P2 = ~counter;              // Set P2 to inverted counter
        delay(time);                // provide delay               
    }   
         
    
}

void delay(float val){                      // Delay function definition
    for(int i = 0; i<0xff*val; i++){        // Loop from 0 to 0xff(255)*val
        for(int j=0; j<0xff; j++){          // Loop from 0 to 0xff(255)
                                            // Do nothing
        }
    }
}