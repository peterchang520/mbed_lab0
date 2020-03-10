#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int led(DigitalOut& ledpin, int times);

int main()
{
    redLED = 1;
    greenLED = 1;
    while(true){
        led(redLED, 3);
        led(greenLED, 2);
    }
}