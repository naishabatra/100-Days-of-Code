// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum choice
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, ch;

    scanf("%d %d", &a, &b);
    scanf("%d", &ch);

    switch(ch)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
