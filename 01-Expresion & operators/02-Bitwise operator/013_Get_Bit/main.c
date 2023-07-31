/**
 * C program to input any number from user and check
     whether nth bit of the given number is set (1) or not (0)
 */

#include <stdio.h>

int main()
{
    /* Input number from user */
    int num,n,nth_bit;
    printf("Enter a number: ");
    scanf("%i",&num);

    /* Input bit position you want to check */
    printf("Enter nth bit to check(0-31): ");
    scanf("%i",&n);

    nth_bit= num&(1<<n);

    if(nth_bit)
    {
        printf("the %i bit is set (1)\n\n",n);
    }
    else
    {
        printf("the %i bit is unset (0)\n\n",n);
    }

    return 0;
}
