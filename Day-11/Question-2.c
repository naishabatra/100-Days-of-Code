//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

void main()
{
    int cp, sp, profit, loss, per;

    printf("Enter Cost Price and Selling Price = ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        per = (profit * 100) / cp;
        printf("Profit %d%%", per);
    }
    else if (sp < cp)
    {
        loss = cp - sp;
        per = (loss * 100) / cp;
        printf("Loss %d%%", per);
    }
    else
    {
        printf("No Profit No Loss");
    }
}
