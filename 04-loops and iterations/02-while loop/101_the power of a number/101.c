/**
 * C Program to calculate the power of a number using while loop
 */

#include <stdio.h>
#include "STD_Types.h"

int main()
{
    u8 L_u8Num1=0,L_u8Power;
    u32 L_u32Result=1;

    printf("Enter a number: ");
    scanf("%d",&L_u8Num1);
    printf("Enter the Power: ");
    scanf("%d",&L_u8Power);

    while(L_u8Power-- != 0)
    {
        L_u32Result = L_u32Result*L_u8Num1;
    }

    printf("Answer: %lu\n\n",L_u32Result);


    return 0;
}
