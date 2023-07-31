/**
 * C program to check Most Significant Bit (MSB) of a number using bitwise operator
 */

#include <stdio.h>
#define BITS ((sizeof(num)*8)-1)

int main()
{
    /* Input number from user */
    int num,msb;
    printf("Enter a number: ");
    scanf("%i",&num);

    msb=num&(1<<BITS) ;

    if(msb)
    {
        printf("LSB of %i is set (1)\n\n",num);
    }
    else
    {
        printf("LSB of %i is unset (0)\n\n",num);
    }

    return 0;
}
