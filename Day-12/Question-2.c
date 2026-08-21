#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter units consumed = ");
    scanf("%d", &a);

    if(a <= 100)
    {
        b = a * 5;}
    else if(a <= 200)
    {
        b = 100 * 5 + (a - 100) * 7;}
    else if(a <= 300)
    {
        b = 100 * 5 + 100 * 7 + (a - 200) * 10;}
    else
    {
        b = 100 * 5 + 100 * 7 + 100 * 10 + (a - 300) * 12;}

    printf("Bill = %d", b);
}
