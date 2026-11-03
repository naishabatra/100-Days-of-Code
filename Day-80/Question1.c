// Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main()
{
    FILE *f;
    char name[50];
    int roll, marks;
    int n, i;

    scanf("%d", &n);

    f = fopen("student.txt", "w");

    for(i = 0; i < n; i++)
    {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(f, "%s %d %d\n", name, roll, marks);
    }

    fclose(f);

    f = fopen("student.txt", "r");

    while(fscanf(f, "%s %d %d", name, &roll, &marks) != EOF)
    {
        printf("%s %d %d\n", name, roll, marks);
    }

    fclose(f);

    return 0;
}
