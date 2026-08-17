// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
void main()
{
    int a;
    printf("Enter an integer=");
    scanf("%d",&a);
    if (a%2==0){
    printf("a=%d is even",a);}
    else {
    printf("a=%d is odd",a);}
}
