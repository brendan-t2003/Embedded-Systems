#include "mbed.h"

DigitalIn ButtonA(PG_0); //Button A
DigitalOut redLED(PC_2); //Red Traffic 1
DigitalIn ButtonB(PG_1);
DigitalIn ButtonC(PG_2, PinMode :: PullDown);
DigitalIn ButtonD(PG_3, PinMode :: PullDown);

// main() runs in its own thread in the OS
int main()
{
    int btnA;
    int btnB;
    int btnC;
    int btnD;
    // Turn OFF the red LED
    redLED = 0;

    while (true) {
    
        // Wait for the button to be pressed
        do {
            btnA = ButtonA;
            btnB = ButtonB;
            btnC = ButtonC;
            btnD = ButtonD;
        } while ((btnA && btnB && btnC && btnD)==0);


        //Toggle the red LED
       
            redLED = !redLED;
        
        
        

        //Wait for noise to settle
        wait_us(10000);

        // Wait for the button to be released
        do {
            btnA = ButtonA;
            btnB = ButtonB;
            btnC = ButtonC;
            btnD = ButtonD; 
        } while ((btnA && btnB && btnC && btnD)==1);

        //Wait for noise to settle
        wait_us(10000);
    }
}




