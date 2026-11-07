// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum status x;

    x = SUCCESS;

    if(x == SUCCESS)
        printf("Success");
    else if(x == FAILURE)
        printf("Failure");
    else
        printf("Timeout");

    return 0;
}
