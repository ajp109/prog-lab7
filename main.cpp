#include "mbed.h"

DigitalOut green(D2);
DigitalOut red(D3);

int main()
{
    while (true) {
        green = true;
        thread_sleep_for(500);
        green = false;
        thread_sleep_for(2500);
    }
}
