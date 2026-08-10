//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
void main()
{
    int a,b,sum,diff,product,quotient;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;
    printf("sum=%d,diff=%d,product=%d,quotient=%d",sum,diff,product,quotient);
}
