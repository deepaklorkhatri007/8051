//  LedDice.c
//  Created on: 23 May 2019
//  Edited on: 24 May 2019
//  Author: Deepak Khatri

#include<at89x51.h>

#define ALL_OFF 0xff                        // 0xff = 255 = 0b11111111, Turn HIGH every pin  
#define Button P1_0                         // Button at pin 1 of port 1
#define time 0.5                            // Value for delay

void delay(float val);                      // Delay function initialization

void main(){                                // Main function
    int DICE = 0;                           // Dice variable
    int DICE_ARRAY[6]={                     // Dice positions
        0x08,                               // 1 - 00001000
        0x14,                               // 2 - 00010100
        0x1C,                               // 3 - 00011100
        0x63,                               // 4 - 01100011
        0x6B,                               // 5 - 01101011
        0x77                                // 6 - 01110111
        };                              

    while(1){                               // Infinite loop
        if(Button == 0){                    // If button pressed
            P2 = ~DICE_ARRAY[DICE-1];       // Set dice when button pressed
            delay(3);                       // Provides delay 
            P2 = ALL_OFF;                   // Turn all the leds off
        } else{                             // When button not pressed
            DICE++;                         // Increment dice position
            if(DICE == 7) DICE = 1;         // Rest dice
        }

    }
}

void delay(float val){                      // Delay function definition
    for(int i = 0; i<0xff*val; i++){        // Loop from 0 to 0xff(255)*val
        for(int j=0; j<0xff; j++){          // Loop from 0 to 0xff(255)
                                            // Do nothing
        }
    }
}
