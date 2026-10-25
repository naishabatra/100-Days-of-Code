/* Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, 
and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.*/

#include <stdio.h>

int main()
{
    FILE *f;
    char name[50];
    int age;

    f = fopen("info.txt", "w");

    scanf("%s", name);
    scanf("%d", &age);

    fprintf(f, "%s %d", name, age);

    fclose(f);

    printf("Data was successfully saved");

    return 0;
}
