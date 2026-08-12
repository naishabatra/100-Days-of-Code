//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
void main()
{
    float c,f;
    printf("Enter Temperature in Celsius:");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("Temperature in Fahrenheit=%f",f);
}
