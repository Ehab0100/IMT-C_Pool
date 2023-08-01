/**
 * C program to count flip all bits of a binary number using bitwise operator
 */

#include <stdio.h>

int main()
{
    /* Input number from user */
    int num,flipped_Number;
    printf("Enter a number: ");
    scanf("%i",&num);

    flipped_Number =~num;

    printf("Original number: %i\n",num);
    printf("number after  Flip all bits: %i\n",flipped_Number);

    return 0;
}
