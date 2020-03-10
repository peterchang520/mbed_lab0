#include "mbed.h"

void led(DigitalOut& ledpin, int times)
{
    int x = times*2;
    for(int i=0; i<x; i++){
        ledpin = !ledpin;
        wait(0.2f);
    }
}
