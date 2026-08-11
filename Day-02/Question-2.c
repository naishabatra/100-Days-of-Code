// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
void main()
{
    float r,area,circumference;
    printf("Enter radius of the circle=");
    scanf("%f",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("area=%f,circumference=%f",area,circumference);
}
