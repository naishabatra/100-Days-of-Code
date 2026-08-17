// Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
void main()
{
    int a;
    printf("Enter a year=");
    scanf("%d",&a);
    if (a % 400 == 0){
        printf("Leap Year");}
    else if (a % 100 == 0){
        printf("Not a Leap Year");}
    else if (a % 4 == 0){
        printf("Leap Year");}
    else{
        printf("Not a Leap Year");}
}
