// Q18: Write a program to accept percentage and assign a grade.

#include <stdio.h>

void main()
{
    int percentage;

    printf("Enter percentage=");
    scanf("%d", &percentage);

    if(percentage >= 90 && percentage <= 100)
        printf("Grade A");
    else if(percentage >= 80)
        printf("Grade B");
    else if(percentage >= 70)
        printf("Grade C");
    else if(percentage >= 60)
        printf("Grade D");
    else
        printf("Grade F");
}
