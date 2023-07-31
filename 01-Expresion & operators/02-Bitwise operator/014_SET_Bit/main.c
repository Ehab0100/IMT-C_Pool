/**
 * C program to input any number from user and set nth bit
       of the given number as (1) using bitwise operator
 */

#include <stdio.h>

int main()
{
    /* Input number from user */
    int num,new_num,n;
    printf("Enter a number: ");
    scanf("%i",&num);

    /* Input bit position you want to set */
    printf("Enter nth bit to set(0-31): ");
    scanf("%i",&n);

    new_num =num | (1<<n);

    printf("Bit is set (1)\n");
    printf("number before setting bit %i : %i\n",n,num);
    printf("number after setting bit %i : %i\n",n,new_num);

    return 0;
}
