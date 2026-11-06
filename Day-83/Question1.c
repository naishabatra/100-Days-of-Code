// Create an enum for months and print how many days each month has.

#include <stdio.h>

enum month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    int i;

    for(i = JANUARY; i <= DECEMBER; i++)
    {
        if(i == FEBRUARY)
            printf("28\n");
        else if(i == APRIL || i == JUNE || i == SEPTEMBER || i == NOVEMBER)
            printf("30\n");
        else
            printf("31\n");
    }

    return 0;
}
