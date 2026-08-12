//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>
void main()
{
   int a,b,c;
   printf("Enter two number=");
   scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("After Swap=%d %d",a,b);
}
