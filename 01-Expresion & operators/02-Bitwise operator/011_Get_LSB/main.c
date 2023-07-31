/**
 * C program to check Least Significant Bit (LSB) of a number using bitwise operator
 */

#include <stdio.h>

int main()
{
    /* Input number from user */
    int num;
    printf("Enter a number: ");
    scanf("%i",&num);

    /* If (num & 1) evaluates to 1 print LSB is set */
    if(num&1)
    {
        printf("LSB of %i is set (1)\n\n",num);
    }
    else
    {
        printf("LSB of %i is unset (0)\n\n",num);
    }

    return 0;
}
