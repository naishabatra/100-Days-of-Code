// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum light
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum light x;

    x = RED;

    if(x == RED)
        printf("Stop");
    else if(x == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}
