/**
*  C program to find number of days in month.
 */

#include <stdio.h>

int main()
{
    /* Input month number from user */
    int month;
    printf("Enter month NO. (1-12): ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days\n\n");
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days\n\n");
            break;

        case 2:
            printf("28/29 Days\n\n");
            break;

        default:
            printf("Invalid input! Please enter Month number between (1-12).\n\n");
    }

    return 0;
}
