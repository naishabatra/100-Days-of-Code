// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
void main()
{
    int a,b;
    char c;
    printf("Enter two numbers=");
    scanf("%d %d",&a,&b);
    printf("Enter operation=");
    scanf(" %c",&c);
    switch(c)
    {
        case '+':
        printf("%d",a+b);
        break;
        
        case '-':
        printf("%d",a-b);
        break;
        
        case '*':
        printf("%d",a*b);
        break;
        
        case '/':
        printf("%d",a/b);
        break;
        
        case '%':
        printf("%d",a%b);
        break;
     }
}
