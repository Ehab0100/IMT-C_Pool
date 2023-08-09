/**
 * C program to calculate profit or loss
 */

#include <stdio.h>
int main()
{
    /* Input cost price and selling price of a product */
    int cost,sell,total;
    printf("Enter cost price: ");
    scanf("%d",&cost);

    printf("Enter sell price: ");
    scanf("%d",&sell);

    /* Calculate total Profit or losses */
    total=sell-cost;

    if(total > 0)
        printf("Profit= %d\n\n",total);
    else if(total < 0)
        printf("loss= %d\n\n",-total);
    else
        /* Neither profit nor loss */
        printf("No Profit No Loss.");


    return 0;
}
