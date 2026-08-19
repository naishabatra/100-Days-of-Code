// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three sides of the triangle=");
    scanf("%d %d %d",&a,&b,&c);
    if (a == b && b == c){
        printf("Equilateral");}
    else if (a == b || b == c || a == c){
        printf("Isosceles");}
    else{
        printf("Scalene");}
    
}
