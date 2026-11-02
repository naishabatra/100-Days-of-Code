// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main()
{
    FILE *f;
    int n, sum = 0, count = 0;
    float avg;

    f = fopen("numbers.txt", "r");

    if(f == NULL)
    {
        printf("File not found");
        return 0;
    }

    while(fscanf(f, "%d", &n) != EOF)
    {
        sum = sum + n;
        count++;
    }

    avg = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    fclose(f);

    return 0;
}
