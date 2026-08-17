// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


#include <stdio.h>
void main()
{
    int a;
    printf("Enter an integer=");
    scanf("%d",&a);
    if (a>=0){
       if (a==0){
           printf("a=%d is zero",a);}
            else {
                printf("a=%d is positive",a);}}
    else{           
    printf("a=%d is negative",a);}
}
