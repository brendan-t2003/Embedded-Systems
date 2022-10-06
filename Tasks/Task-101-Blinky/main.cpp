#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
int main()
{
    led1 = 1;
    led2.write(1);
    while(true) {
        //Do nothing
    }
}