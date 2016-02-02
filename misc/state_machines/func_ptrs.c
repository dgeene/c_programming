/*
 * An example of a state machine using function pointers
 * http://codeandlife.com/2013/10/06/tutorial-state-machines-with-c-callbacks/
 *
 * Instead of a global func ptr we'll just have a state function return a ptr
 * to the next state.
 * What if we want to jump to a adifferent state?
 */
#include <stdio.h>
#include <unistd.h>

typedef void *(*StateFunc)();

//states
void *led_on();
void *led_off();


void *led_on()
{
    printf("Led On\n");
    return led_off; //next state
}

void *led_off()
{
    printf("Led Off\n");
    return led_on; // next state
}




int main()
{
    StateFunc statefunc = led_on;

    while(1)
    {
        statefunc = (StateFunc)(*statefunc)();
        sleep(2);
    }


    return 1; // won't get called
}
