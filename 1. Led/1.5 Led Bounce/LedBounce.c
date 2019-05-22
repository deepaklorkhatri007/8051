//  LedBounce.c
//  Created on: 22 May 2019
//  Author: Deepak Khatri

#include <at89x51.h>                // 8051 headerfile from sdcc

void delay();                       // Delay function initialization  

void main(){                        // Main function
    int counter = 1, flag =1;       // counter and flag
    while (1){                      // infinite loop
        
        // Counter & flag logic
        if(counter == 128){         // when pattern is 00000001
            flag = 0;
        }
        if( counter == 1){          // when pattern is 10000000
            flag = 1;
        }

        // Led logic
        if(flag == 0){              // when flag is 0
            P2 = ~counter;          // output inverted counter
            counter=counter>>1;     // shift to right
        }
        
        if(flag == 1){              // when flag is 1
            P2 = ~counter;          // output inverted counter 
            counter=counter<<1;     // shift to left
            
        }
        
        delay();                    // provide delay
    }   
         
    
}


void delay(){                       // Delay function definition
    for(int i = 0; i<0xff; i++){    // Loop from 0 to 0xff(255)
        for(int j=0; j<0xff; j++){  // Loop from 0 to 0xff(255)
                                    // Do nothing
        }
    }
}