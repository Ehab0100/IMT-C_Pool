/**
 * C program to input a Number and find Sum of first and last digit of the Number using while loop.
 *
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u32 L_u32Num;
    u8 L_u8firstDigit, L_u8lastDigit,L_u8Sum;
    printf("Enter a Number: ");
    scanf("%d",&L_u32Num);

    L_u8firstDigit= L_u32Num%10;

    while(L_u32Num >= 10)
    {
        L_u32Num = L_u32Num/10;
    }
    L_u8lastDigit= L_u32Num;
    L_u8Sum= L_u8firstDigit + L_u8lastDigit;

    printf("Sum of first & last Digit: %d\n\n",L_u8Sum);


    return 0;
}
