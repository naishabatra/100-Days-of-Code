// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum role x;

    x = ADMIN;

    if(x == ADMIN)
        printf("Admin");
    else if(x == USER)
        printf("User");
    else
        printf("Guest");

    return 0;
}
