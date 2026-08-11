// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
void main()
{
    int a,b,area,perimeter;
    printf("Enter length of the rectangle=");
    scanf("%d",&a);
    printf("Enter breadth of the rectangle=");
    scanf("%d",&b);
    area=a*b;
    perimeter=2*a+2*b;
    printf("area=%d,perimeter=%d",area,perimeter);
}
