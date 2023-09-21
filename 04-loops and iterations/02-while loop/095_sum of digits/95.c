/**
 * C program to find sum of its digits of a number
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u32 L_u32Num;
    u8 L_u8Sum=0;
    
    printf("Enter a Number: ");
    scanf("%d",&L_u32Num);

    while(L_u32Num != 0)
    {
        L_u8Sum += L_u32Num%10;
        L_u32Num = L_u32Num/10;
    }

    printf("Sum Number's Digits: %d\n\n",L_u8Sum);


    return 0;
}
